Architecture
Compare and contrast the types of frontend development you used (Express HTML, JavaScript, SPA).
In this project I used Express to serve HTML pages for basic navigation and page structure. I used JavaScript on the client side to handle interactive behaviors like form submission, updating the UI, and making requests to the backend without reloading the page. I also used a single-page application (SPA) approach for parts of the site where it was better to dynamically load and update content. Express-rendered pages are simpler and easier to set up, while the SPA approach feels faster and smoother for users because it updates the page dynamically.
Why did the backend use a NoSQL MongoDB database?
MongoDB worked well because it stores data as flexible documents, which fits naturally with JavaScript/Node development. It also makes it easier to adjust the data structure as the project evolves. MongoDB integrates well with REST APIs because data can be sent and received as JSON.
Functionality
How is JSON different from JavaScript and how does JSON tie together the frontend and backend?
JavaScript is a programming language used to write logic and behavior in the application. JSON is a data format used to store and transmit information. The backend sends JSON responses to the frontend, and the frontend sends JSON in requests back to the backend. This makes JSON the “bridge” that connects the frontend UI to the backend API.
Instances where you refactored code and benefits of reusable UI components.
During development I refactored code by reusing shared functions instead of repeating logic in multiple places (such as validation, formatting, and request handling). I also reorganized routes and controllers to keep the code easier to read and maintain. Reusable UI components help because they keep the interface consistent, reduce duplication, and make future changes faster since updates only need to be made once.
Testing
Methods, endpoints, and security in a full stack application.
Endpoints are the routes the frontend calls to access backend functionality. Methods like GET, POST, PUT/PATCH, and DELETE define what action is performed on the data. Testing is important to confirm that each endpoint returns the correct status codes and data. Adding security makes testing more difficult because protected routes require authentication, meaning you must test both authorized and unauthorized requests to ensure the application blocks access correctly and only allows valid users to perform admin actions.
Reflection
How has this course helped you reach your professional goals and become more marketable?
This course helped me understand the full stack development process from end to end, including frontend structure, backend APIs, database integration, and security. I improved my ability to debug issues across multiple layers of an application, build REST endpoints, and connect the UI to real data. I also learned how to implement secure admin authentication and why security must be planned early. These skills make me more marketable because employers expect developers to understand full stack workflows, API development, and security basics.
