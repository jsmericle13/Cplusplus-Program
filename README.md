# Cplusplus-Program
Class 370-Current/Emerging Trends 
Project Summary and Work Done
For this project, I built an intelligent pirate agent for a treasure hunt game. The goal of the pirate is to navigate a grid-like environment, avoid obstacles, and reach the treasure before the player. I was given starter code that defined the game environment, including how states, actions, rewards, and the overall game loop worked. I also received code for things like rendering, movement rules, and basic agent structure. I wrote the core of the deep Q-learning (DQN) training loop myself. That included building the neural network model to approximate Q-values, implementing replay memory, choosing actions with an ε-greedy policy (balancing exploration and exploitation), updating Q-targets, and training the model over many episodes. In other words, I completed the learning logic that actually teaches the pirate how to move intelligently toward the treasure. 

Connection to Computer Science
Computer scientists design systems that solve real problems using computation. That matters because many real-world problems (like pathfinding, decision-making, prediction, optimization) are too large or too fast for humans to solve manually in real time. In this project, I approached the pirate’s navigation task the same way a computer scientist would: I defined the problem in terms of states (where the pirate is), actions (where it can move), goals (get the treasure), and rewards (positive for treasure, negative for bad moves). From there, I designed and implemented an algorithm that could learn a policy through trial and error. Instead of hardcoding a path, I created a system that learns its own behavior. That mindset—turning a real scenario into formal rules, data structures, and algorithms—is central to computer science. 

Problem-Solving Approach
My approach to problem solving in this project was iterative and data-driven. First, I broke the task into parts: environment, agent, learning loop. Then I identified what information the agent needed to make decisions (state representation), what choices it could legally make (action space), and how to score those choices (reward function). After that, I built and tuned the learning algorithm: training episodes, target updates, discount factor, exploration rate, etc. Finally, I evaluated performance by watching whether the pirate could consistently reach the treasure. This mirrors how computer scientists solve complex problems: define objectives, design algorithms, test, observe failures, and refine.

Ethical Responsibilities
Even though this is “just a game,” the ideas behind it apply directly to real AI systems that act in the world. That means there are ethical responsibilities to both the end user and the organization using the AI. First, the system should behave in a predictable and explainable way. If an AI is making decisions (especially in safety-critical settings), you need to understand why it makes those choices and what it was trained to optimize. Second, the reward function matters. In reinforcement learning, the agent will do whatever gets it the highest reward, even if that means exploiting loopholes. So you have a responsibility to design rewards that align with safe, fair, intended behavior. Finally, there’s responsibility around honesty: documenting what the model can and cannot do, and avoiding overstating performance. In a real deployment, that protects users from harm and protects the organization from relying on an AI system in the wrong context


CS- 340 Client/SErver Development 
How do you write programs that are maintainable, readable, and adaptable?

The biggest things that make code maintainable are structure and clarity. For this course, that meant keeping the database logic (CRUD operations) in its own Python module instead of mixing it directly into the dashboard code. By building that CRUD module in Project One and then reusing it in Project Two, I ended up with cleaner code that was easier to update. If the database connection string changes, or if we want to add a new query, I only need to change it in one place, not in every callback in the dashboard.

Readability also comes from naming and comments. Clear function names like create(), read(), and update() make it obvious what each part does, even for someone new who looks at the code later. Inline comments explain why something is written a certain way, not just what it does. That helps future developers (or future me) avoid breaking things by accident.

Adaptability comes from thinking ahead a little. For example, the read() function in the CRUD module can accept different queries and projections, not just one hard-coded search. That means I can reuse it for different dashboard filters (like certain breeds, age under 2, or rescue type) without rewriting it every time. The advantage of working this way is that the CRUD module is now a reusable “database layer” I could plug into other apps — not just this dashboard. I could build a CLI tool for shelter staff, a batch report script for exports, or even a different web frontend, and all of them could reuse the same module instead of starting from scratch.

How do you approach a problem as a computer scientist?

The process I used for Grazioso Salvare was basically: understand the real goal, then design around it in pieces. The client didn’t ask for “a dashboard for fun.” They asked for a way to quickly find dogs that fit specific search-and-rescue profiles across multiple shelters. So instead of thinking “how do I make charts,” I thought “what questions does the user need answered in under 10 seconds?”

From there I worked backwards:

What data do we need from the database to answer those questions?

How should that data be filtered (age, breed, rescue type, location)?

How should the results be displayed so a non-technical user can act on it (table, map, summary chart)?

That’s different from earlier assignments where the focus was “make it work.” Here the focus was “make it work the way someone else would actually use it.” I also had to think in terms of components talking to each other — database → Python logic → dashboard controls → visual output — which is basically following an MVC-style mindset.

If I were building a different database/dashboard for another client in the future, I’d use the same strategy: define the user’s decisions first, then design queries for those decisions, then build visuals on top of those queries. I’d also keep the data access layer separated so that if they later move from MongoDB to something else (like Postgres or an API), I wouldn’t have to rewrite the whole UI. I’d just swap out the backend module.

What do computer scientists do, and why does it matter?

Computer scientists turn messy real-world problems into systems that can be repeated, trusted, and scaled. In this project, the raw shelter data is just a giant pile of records — different breeds, ages, locations, outcomes, etc. On its own, that data isn’t useful to a person who needs to make a fast decision. After building the pipeline (database → queries → filters → dashboard), that same data becomes a tool. Now a coordinator can say: “Show me dogs under 2 years old that are good for water rescue and where they are located,” and get that answer instantly.

That matters for a company like Grazioso Salvare because their work directly affects safety and response time in emergency situations. If they can quickly identify the right dog for specialized rescue training — like water rescue, wilderness tracking, or disaster response — they can train more effectively and deploy faster when lives are at risk. So this isn’t just about code working. It’s about reducing the time between “we have a need” and “we have a trained dog ready to respond.”

More broadly, computer scientists build systems that help people make better decisions with confidence. That includes not just writing code, but also thinking about data quality, how users interact with the system, performance, and ethics. The dashboard we built is a small version of that: it’s a decision tool, not just an app.
