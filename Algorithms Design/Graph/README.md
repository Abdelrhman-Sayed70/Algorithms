# Graph

# Terminolgies

## `General`
- A graph is an abstract representation of a set of objects where some pairs of the objects are connected by links. 
- Vertices: Interconnected objects 
- Edges: Links that connect the vertices  
- Adjacency: For each edge {u, v} the vertices u and v are said to be adjacent to one another, denoted `u ~ v`.
- Graph Order: number of vertices |V|
- Graph Size:  number of edges |E| <br>
  `note` max graph size is O(|V|^2) for directed graph, O(|V|^2) also for undirected graph 
  
- Vertex degree: number of `edges` connected to this vertex <br>
  For directed graph: <br>
  `In degree`: number of edges that enter this vertex.
  `Out degree`: number of edges leaves this vertex
  
## `Graph Types` 
- Connected graph: there is path from any vertex to any another vertex.
- Disconnected graph: there is at least one vertex that can not reach at least another vertex
- Undirected graph `Symmetrical` <br>
  ➙ Edge (u,v) = Edge (v,u) <br>
  ➙ No self loops <br>

- Directed graph `UnSymmetrical` <br>
  ➙ Edge (u, v) goes from u to v not vice versa. `u ➙ v`

- Weighted graph: associates weights with either the edges or the vertices

- Dense graph <br> 
  ➙ a graph with large number of edges <br>
  ➙ number of edges `graph size` = V^2 <br>
  
- Sparse graph: graph with number of edges `graph size` = V 

## `Complexity`
- In order of number of `edges` & `vertices`

## Question
- Consider an undirected graph that has V vertices, no parallel edges, and is connected (i.e., “in one piece”). What is the minimum and maximum number of edges that the graph could have, respectively? `V-1` `V^2`

