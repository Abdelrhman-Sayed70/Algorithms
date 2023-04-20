# Edge Classifications⛓️

# Color Reference

- **White** ▶ have not been discovered.
- **Grey** ▶discovered but not fully explored.
- **Black ▶** discovered and fully explored.

## Backward Edge

- On tree the edge connects `bottom node [child]` with `top node [gray parent]`
- Edge makes cycle.
- Edge connects child with any of its parents.
- Go to **Gray** node.

## Forward Edge

- On tree, the edge goes from `top [parent]` to `bottom [black child of the top]` 
- Go to **Black** node & discoveryTime(source) < discoveryTime(destination)

## Cross Edge

- On tree the edge connects 2 nodes in different trees, or 2 different branches in the same tree
- Go to **Black** node & discoveryTime(source) > discoveryTime(destination)
