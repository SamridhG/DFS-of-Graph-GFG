# DFS-of-Graph-GFG


Given a connected undirected graph. Perform a Depth First Traversal of the graph.


Note: Use recursive approach to find the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph..


Example 1:

![image](https://user-images.githubusercontent.com/63790684/128987254-8c01a173-92d4-46f0-9853-c2e8fd572160.png)


Input:



Output: 0 1 2 4 3


Explanation: 


0 is connected to 1, 2, 4.


1 is connected to 0.

2 is connected to 0.


3 is connected to 0.


4 is connected to 0, 3.


so starting from 0, it will go to 1 then 2


then 4, and then from 4 to 3.


Thus dfs will be 0 1 2 4 3.



Example 2:

![image](https://user-images.githubusercontent.com/63790684/128987306-36175812-713e-46e9-8719-d1bc8fe9d533.png)


Input:



Output: 0 1 2 3


Explanation:


0 is connected to 1 , 3.


1 is connected to 2. 


2 is connected to 1.


3 is connected to 0. 


so starting from 0, it will go to 1 then 2


then back to 0 then 0 to 3


thus dfs will be 0 1 2 3. 



Your task:


You don’t need to read input or print anything. Your task is to complete the function dfsOfGraph() which takes the integer V denoting the number of vertices and adjacency list as input parameters and returns  a list containing the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph.


Expected Time Complexity: O(V + E)


Expected Auxiliary Space: O(V)


Constraints:


1 ≤ V, E ≤ 104
