# Edge Classifications

## Backward Edge

- Edge makes cycle.
- Edge connects child with any of its parents.
- Go to **Gray** node. `discoverd node but not fully explored`

## Forward Edge

- Edge connects parent `top` with any of its already before visited child `down`

- Go to **Black** node `discovered node and fully explored ` & discoveryTime(source) < discoveryTime(destination)

## Cross Edge

- Edge connects 2 nodes in different trees, or 2 different branches in the same tree
- Go to **Black** node `discovered node and fully explored ` & discoveryTime(source) > discoveryTime(destination)
