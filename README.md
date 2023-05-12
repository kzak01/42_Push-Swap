# Push-Swap

General Description:
Push Swap is a project aimed at developing a sorting algorithm to arrange a stack of integers in a specific order. The project focuses on efficiently sorting a random sequence of numbers using two stacks, A and B.

Project Workflow:
The algorithm starts by dividing the stack A into chunks and gradually pushes elements from stack A to stack B. The algorithm then employs a method that determines the next required number and strategically moves the elements within stack B, either from the bottom to the top or vice versa, in order to minimize the number of moves required.

During this process, the algorithm performs a continuous check. For instance, if the algorithm needs to place the number 65, it checks if the path includes 64, and if so, checks for 63, and so on. It prioritizes pushing and positioning these numbers below the required number to facilitate double moves.

The project was a collaborative effort, and I would like to express gratitude to mvolpi(https://github.com/Mich120201) for working together on the project. Michela mainly focused on implementing the moves and handling the base cases, while I handled error handling and cases involving larger numbers (100 and 500).

I would also like to acknowledge the invaluable guidance provided by two guides throughout the project. The first guide helped in gaining a better understanding of the project and the underlying reasoning behind it. Their insights and explanations were instrumental in shaping the overall approach.
(https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)
The second guide played a crucial role in refining and solidifying the final idea of the project, contributing valuable suggestions and guidance.

Their combined contributions greatly aided in the success of the project, enabling us to develop an efficient sorting algorithm for integer stacks. Additionally, a visualizer tool was utilized to visualize the sorting process, which can be found at (https://github.com/o-reo/push_swap_visualizer).

Visualizer Instructions:
To use the visualizer tool for observing the sorting process, follow these steps:

Navigate to the push_swap_visualizer directory by running the following command:

<pre>cd push_swap_visualizer/build</pre>

Execute the visualizer by running the following command:
./bin/visualizer
Once the visualizer is running, set up the visualization according to the provided screenshot or instructions.
