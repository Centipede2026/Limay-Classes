//Kruskal's Spanning Tree

/*
THe algorithm is used to find the minimum cost spanning tree uses the greedy approach. This algorith treats the 
graph as a forest and every node it has as an individual tree. A tree connects to another only and only if
it has the least cost among all available options and does not voilate minimum spanning tree properties. 
To understand kruskal's algorithm let us consider following algorithm.*/

/*
Step1: Remove all loops and parallel edges from the following graph, in case of parallel edges keep the one which has 
the least cost associated and remove all other.
Step2: Arrange all edges in there increasing order of weight
.   BD  DT  AC  CD  CB  BT  AB  SA  SC
.   2   2   3   3   4   5   6   7   8
Now we start adding edges to the graph beginning from the one which has the least weight. Throughout we shall
keep checking that the spanning properties remain intact. In case by adding one edge the spanning tree property
does not hold then we shall consider not to include the edge of the graph.

The least cost is 2 and edges involved are BD and DT, We add them and adding them does not voilate spanning tree
properties. 
Now the next cost is 3 and associated edges are AC and CD, we add them again.
Next cost in the table is 4 and we observe that adding it will create a circuit in the graph, we ignore it
in the process, we shall ignore or avoid all edges that create a circuit. 
While attempting to add cost 5 and 6, circuit is being created so we ignore them. Now we are left with only 
one node to be added between the 2 least cost edges available 7 and 8 we shall add edge with cost 7 but adding
it              all the nodes of the graph and we now have minimum cost priority tree.
*/
