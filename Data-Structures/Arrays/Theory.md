# Arrays

## One Dimensional Arrays

### What is an array variable?
- It is a named group of contiguous (close to each other) memory locations
- Works just like a list

### Example
- Array of 5 integers:
    ```        
    array = { 8, 3, 1, 5, 7 }
    Index:    0  1  2  3  4
    ```

### Index
- The position of each element of the array
- Zero based (starts from zero)
- You can access elements from the array by its index: 
    ```        
    array = { 8, 3, 1, 5, 7 }
    Index:    0  1  2  3  4

    array[index] = element
    array[0] = 8
    array[3] = 5
    ```

## Two Dimensional Arrays

### What is that?
- You can look at a two dimensional array like a grid, with rows and colmuns
- Basically is a list with lists inside, each list represents a row

### Example
- Array with 3 arrays of 5 integers:
    ```
    array = {
        {2, 4, 7, 8, 3},
        {8, 2, 1, 2, 4},
        {2, 4, 3, 1, 7},
        {6, 2, 9, 2, 3},
        {1, 6, 2, 8, 1}
    }
    ```
- The example above can also be visualized as a grid:
    ```
    Rows (y or i) 
                [0] | 2 | 4 | 7 | 8 | 3 |
                [1] | 8 | 2 | 1 | 2 | 4 |
                [2] | 2 | 4 | 3 | 1 | 7 |
                [3] | 6 | 2 | 9 | 2 | 3 |
                [4] | 1 | 6 | 2 | 8 | 1 |
    Columns (x or j) [0] [1] [2] [3] [4]
    ```

### Index
- To select an element of a 2D array, you need to pass the index of the row and in which column the element is indexed, example:
    ```
    Rows (y or i) 
                [0] | 2 | 4 | 7 | 8 | 3 |
                [1] | 8 | 2 | 1 | 2 | 4 |
                [2] | 2 | 4 | 3 | 1 | 7 |
                [3] | 6 | 2 | 9 | 2 | 3 |
                [4] | 1 | 6 | 2 | 8 | 1 |
    Columns (x or j) [0] [1] [2] [3] [4]

    array[row] = row array
    array[0] = {2, 4, 7, 8, 3}
    array[3] = {6, 2, 9, 2, 3}

    array[row][column] = element
    array[2][1] = 4
    array[0][4] = 3
    ```
