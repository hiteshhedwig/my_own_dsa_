Sure! Here's a visual example of selection sort using an array of numbers:

```csharp

[7, 2, 9, 3, 1, 6]
```
Step 1: Find the smallest number in the array and swap it with the first element:

```csharp

[1, 2, 9, 3, 7, 6]
 ^  ^
```
Step 2: Find the smallest number in the remaining array (excluding the first element) and swap it with the second element:

```csharp

[1, 2, 9, 3, 7, 6]
    ^  ^
```
Step 3: Find the smallest number in the remaining array and swap it with the third element:

```csharp

[1, 2, 3, 9, 7, 6]
       ^  ^
```
Step 4: Find the smallest number in the remaining array and swap it with the fourth element:

```csharp

[1, 2, 3, 6, 7, 9]
  ```        ^  ^

Step 5: Find the smallest number in the remaining array and swap it with the fifth element:

```csharp

[1, 2, 3, 6, 7, 9]
             ^  ^
```
