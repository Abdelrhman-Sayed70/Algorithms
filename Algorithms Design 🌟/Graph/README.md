# Graph

### [`Indroduction To Graph Theory | CS Academy`](https://csacademy.com/lesson/introduction_to_graphs/)

###  [`Graph Visualizer`](https://csacademy.com/app/graph_editor/)



# ⚪ Terminolgies
> ![image](https://user-images.githubusercontent.com/99830416/230741172-cd39c380-5637-44d2-999d-ba3cd847cfac.png)
> 
> ## General
> - A graph is an abstract representation of a set of objects where some pairs of the objects are connected by links. 
> - Vertices: Interconnected objects 
> - Edges: Links that connect the vertices  
> 
> ## Adjacency 
> - For each edge {u, v} the vertices u and v are said to be adjacent to one another, denoted `u ~ v`.
> - 1 is adjacent to 3.
> - 1 is not adjacent to 2.
> 
> ## Directed & Undirected Graphs
> #### Directed
> - `UnSymmetrical`
> - Edge (u, v) goes from u to v not vice versa. `u ➙ v`
> #### Undirected
> - `Symmetrical`
> - Edge (u,v) = Edge (v,u) <br>
> - No self loops <br>
> 
> ## Graph Order
> - Number of vertices |V|
> 
> ## Graph Size
> - Number of edges |E| 
> - For `Directed Graph` one vertex can have at most v edges = v-1 edges to all vertices and one to its self. So `max number of edges` = |v^2|
> - For `Undirected Graph` First vertex has |v| edges, Second vertex has |v-1|, Third vertex has |v-2| and so on. <br> So `max number of edges` = (v - 1) * (v) / 2. While order will be O(|V^2|).
> - `note` max graph size is O(|V|^2) for directed graph, O(|V|^2) also for undirected graph 
>   
> ## Vertex degree
> - Number of `edges` connected to this vertex
> - For directed graph: <br>
>   `In degree`: number of edges that enter this vertex.
>   `Out degree`: number of edges leaves this vertex
>   
> ## Graph Types
> - Connected graph: There is path from any vertex to any another vertex.
> - Disconnected graph: There is at least one vertex that can not reach at least another vertex
> - Weighted graph: Associates weights with either the edges or the vertices
> - Dense graph <br> 
>   ➙ a graph with large number of edges <br>
>   ➙ number of edges `graph size` = V^2 <br>
> - Sparse graph: graph with number of edges `graph size` = V 

# ⚪ Complexity
- In term of number of `edges` & `vertices`
- O(vertices + edges)

# ⚪ Question
- Consider an undirected graph that has V vertices, no parallel edges, and is connected (i.e., “in one piece”). What is the minimum and maximum number of edges that the graph could have, respectively?   
 `V-1` `(V - 1) * V / 2`

# ⚪ Common Problems
- **Connectivity**: Can i reach form node A to B ?
- **Generate Connected Components**: Components is nodes that generate connected graph
- **Shotest Path**
- **Min Cost**
