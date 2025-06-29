# Cplusplus-Program
This project was created for The Gaming Room, a client that developed a game called Draw It or Lose It for Android and wanted to expand it to be accessible on web browsers across multiple platforms. The goal was to design a scalable, secure, and maintainable software solution that would support real-time multiplayer gameplay, platform independence, and a smooth user experience. The final software design document outlines a three-tier architecture using Java on the backend, React for the frontend, and MySQL or Firebase for data storage.

One thing I did particularly well was organizing the document clearly and using object-oriented design principles to define the system’s structure. This included the use of design patterns like Singleton and Iterator, which helped manage shared resources and enforce name uniqueness. Working through this design document before coding helped clarify how the system should be structured, what entities needed to be created, and how they would interact. It also gave me a solid blueprint to follow when developing the application.

If I could improve one section, I would expand the risk assessment and evaluation portions of the document to address more deployment scenarios and potential technical challenges. I interpreted user needs by focusing on platform compatibility, low latency, and ease of use. Meeting user expectations is critical in software development because it ensures the final product is practical and provides a positive user experience.

To design this system, I used techniques like domain modeling, architectural planning, and design pattern implementation. In future projects, I plan to continue using these strategies along with tools like UML diagrams and CI/CD pipelines to analyze requirements and plan scalable, maintainable applications.


Artifact: Practices for Secure Software Report (Project Two)
1. Summary of Client and Software Requirements
Artemis Financial is a client-focused financial services company that needed its Java-based web application to be evaluated and refactored for software security. The company requested improvements in communication security, vulnerability assessment, and encryption implementation.

2. Strengths and Importance of Secure Coding
I successfully identified and mitigated vulnerabilities by integrating SHA-256 hashing and HTTPS. Secure coding is vital because it protects user data from exposure or tampering. Secure software adds credibility and safeguards a company’s operations and customer trust.

3. Challenges in Vulnerability Assessment
A challenging but educational part of the process was integrating the OWASP Dependency-Check plugin and understanding how it evaluates third-party libraries. This deepened my understanding of static code analysis.

4. Increasing Layers of Security
I layered security by using SHA-256 hashing, enforcing HTTPS via TLS, and incorporating static analysis tools. In the future, I would also explore dynamic scanning tools like OWASP ZAP or SonarQube for additional insights.

5. Ensuring Functionality and Security Post-Refactoring
I confirmed functionality by manually testing the application and checking HTTPS connection in the browser. I ensured no new vulnerabilities were introduced by running static analysis after refactoring.

6. Useful Tools and Practices
Java Keytool, SHA-256 checksum implementation, OWASP Dependency-Check, and HTTPS configuration were key. These will be valuable in future work requiring security hygiene and compliance.

7. Portfolio and Employment Use
This project demonstrates my ability to refactor secure code, run vulnerability assessments, and implement encryption techniques. It’s a strong example to showcase my secure software development skills to future employers.

