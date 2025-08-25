
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

// Structure to hold course information
struct Course {
    string courseNumber;
    string courseTitle;
    vector<string> prerequisites;
};

// Function prototypes
void loadData(vector<Course> &courses, const string &filename);
void printCourseList(const vector<Course> &courses);
void printCourse(const vector<Course> &courses);
string toUpperCase(const string &str);
Course* findCourse(vector<Course> &courses, const string &courseNumber);

int main() {
    vector<Course> courses;
    int choice;
    string filename;

    cout << "Welcome to the course planner." << endl;

    do {
        cout << "1. Load Data Structure." << endl;
        cout << "2. Print Course List." << endl;
        cout << "3. Print Course." << endl;
        cout << "9. Exit" << endl;
        cout << "What would you like to do? ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter the course data file name: ";
                cin >> filename;
                loadData(courses, filename);
                break;
            case 2:
                if (courses.empty()) {
                    cout << "Please load the data structure first." << endl;
                } else {
                    printCourseList(courses);
                }
                break;
            case 3:
                if (courses.empty()) {
                    cout << "Please load the data structure first." << endl;
                } else {
                    printCourse(courses);
                }
                break;
            case 9:
                cout << "Thank you for using the course planner!" << endl;
                break;
            default:
                cout << choice << " is not a valid option." << endl;
        }

    } while(choice != 9);

    return 0;
}

// Function to load course data from file
void loadData(vector<Course> &courses, const string &filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error: Could not open file " << filename << endl;
        return;
    }

    courses.clear(); // Clear any existing data
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string token;
        Course c;

        getline(ss, c.courseNumber, ',');
        getline(ss, c.courseTitle, ',');
        if (!c.courseTitle.empty() && c.courseTitle[0] == ' ') {
            c.courseTitle.erase(0, 1);
        }

        while (getline(ss, token, ',')) {
            if (!token.empty() && token[0] == ' ') token.erase(0, 1);
            if (!token.empty()) c.prerequisites.push_back(token);
        }

        courses.push_back(c);
    }

    file.close();
    cout << "Data loaded successfully!" << endl;
}

// Function to print sorted course list
void printCourseList(const vector<Course> &courses) {
    vector<Course> sortedCourses = courses;

    sort(sortedCourses.begin(), sortedCourses.end(), [](const Course &a, const Course &b){
        return a.courseNumber < b.courseNumber;
    });

    cout << "Here is a sample schedule:" << endl;
    for (const auto &c : sortedCourses) {
        cout << c.courseNumber << ", " << c.courseTitle << endl;
    }
}

// Function to find a course by number (returns pointer or nullptr)
Course* findCourse(vector<Course> &courses, const string &courseNumber) {
    string target = toUpperCase(courseNumber);
    for (auto &c : courses) {
        if (toUpperCase(c.courseNumber) == target) {
            return &c;
        }
    }
    return nullptr;
}

// Function to print specific course info with full prerequisite titles
void printCourse(const vector<Course> &courses) {
    string input;
    cout << "What course do you want to know about? ";
    cin >> input;

    Course* course = const_cast<Course*>(findCourse(const_cast<vector<Course>&>(courses), input));
    if (!course) {
        cout << "Course not found." << endl;
        return;
    }

    cout << course->courseNumber << ", " << course->courseTitle << endl;

    if (course->prerequisites.empty()) {
        cout << "Prerequisites: None" << endl;
    } else {
        cout << "Prerequisites: ";
        for (size_t i = 0; i < course->prerequisites.size(); ++i) {
            Course* prereq = const_cast<Course*>(findCourse(const_cast<vector<Course>&>(courses), course->prerequisites[i]));
            if (prereq) {
                cout << prereq->courseNumber;
            } else {
                cout << course->prerequisites[i]; // fallback
            }
            if (i != course->prerequisites.size() - 1) cout << ", ";
        }
        cout << endl;
    }
}

// Helper function to convert string to uppercase
string toUpperCase(const string &str) {
    string result = str;
    for (char &c : result) c = toupper(c);
    return result;
}
