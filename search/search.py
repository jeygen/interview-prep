# O(logn) 
def binarySearch(arr, l, r, x):
    if r >= l:
        mid = l + (r - l)//2
        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            return binarySearch(arr, l, mid-1, x)
        else:
            return binarySearch(arr, mid+1, r, x)
    else:
        return -1


# bfs
# Time: O(Vertices(num of nodes) + Edges(num of edges))
# Space O(V)
# https://favtutor.com/blogs/breadth-first-search-python
# uses queues, goes level by level, guarantees shortest path, good for maps, cycle detection, more
graph = {
  '5' : ['3','7'], # node/vertex 5 has edges to 3 and 7
  '3' : ['2', '4'],
  '7' : ['8'],
  '2' : [],
  '4' : ['8'],
  '8' : []
}

visited = [] # List for visited nodes.
queue = []     #Initialize a queue

def bfs(visited, graph, node): 
  visited.append(node) # Mark the source node as visited.
  queue.append(node) # Push the source node into the queue

  while queue:          # Creating loop to visit each node
    m = queue.pop(0) # Pop the first element from the queue
    print (m, end = " ") 

    for neighbour in graph[m]: # Get all adjacent nodes of the popped node, uses dictionary
      if neighbour not in visited:
        visited.append(neighbour)
        queue.append(neighbour)

# Driver Code
print("Following is the Breadth-First Search")
bfs(visited, graph, '5')    # function calling

# dfs
# Time: O(Vertices(num of nodes) + Edges(num of edges))
# Space O(V)
# https://favtutor.com/blogs/depth-first-search-python
# recursive, uses stacks, goes deep and narrow, good for mazes, more

# Using a Python dictionary to act as an adjacency list
graph = {
  '5' : ['3','7'],
  '3' : ['2', '4'],
  '7' : ['8'],
  '2' : [],
  '4' : ['8'],
  '8' : []
}

visited = set() # Set to keep track of visited nodes of graph. constructor of set class (unordered, immutable, no duplicates, can add and remove, no index)

def dfs(visited, graph, node):   
    if node not in visited:
        print (node)
        visited.add(node)
        for neighbour in graph[node]:
            dfs(visited, graph, neighbour)

# Driver Code
print("Following is the Depth-First Search")
dfs(visited, graph, '5')