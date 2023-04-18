# insertion sort

Assume array to be :
```
array = [64,34, 25 ,12, 22, 11, 90]
```

lets try to visualize the insertion sort:

it'll start from index 1 which is 34. 34 will vacant the space and will get compared to its left. which is 64. since 34 is less than the 64.

```

64, __ , 25 ,12, 22, 11, 90
    34

   , 64, 25 ,12, 22, 11, 90
     34

34, 64, 25 ,12, 22, 11, 90

```

Now, 25 will vacant its space and be compared to number to its left.

```
34, 64, 25 ,12, 22, 11, 90

34, 64, __ ,12, 22, 11, 90
        25

34,   , 64 , 12, 22, 11, 90
        25

  , 34 , 64 , 12, 22, 11, 90
        25

25 , 34 , 64 , 12, 22, 11, 90
```

now, 12 will vacant its space and be compared to the numbers to its left.

```
25 , 34 , 64 , 12, 22, 11, 90

25 , 34 , 64 ,  __ , 22, 11, 90
                12

25 , 34 ,   ,  64 , 22, 11, 90
                12

25 ,    , 34 ,  64 , 22, 11, 90
                12

   , 25   , 34 ,  64 , 22, 11, 90
                12
12 , 25   , 34 ,  64 , 22, 11, 90

```


now, 22 will vacant its space and be compared to its left.

```
12 , 25   , 34 ,  64 , ___, 11, 90
                        22

12 , 25   , 34 ,   ,  64 , 11, 90
                        22

12 , 25   ,    ,   34 ,  64 , 11, 90
                        22

12 ,    ,  25  ,   34 ,  64 , 11, 90
                        22


12 ,  22  ,  25  ,   34 ,  64 , 11, 90
                        

```