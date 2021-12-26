<h1 align="center">Number Line Jumps</h1>

## Problem Description

You are choreographing a circus show with various animals.
For one act, you are given two kangaroos on a number line ready to jump in the positive direction
(i.e, toward positive infinity).

- The first kangaroo starts at location **_x1_** and moves at a rate of **_v1_** meters per jump.

- The second kangaroo starts at location **_x2_** and moves at a rate of **_v2_** meters per jump.

You have to figure out a way to get both kangaroos at the same location at the same time as part of the show.
If it is possible, return YES, otherwise return NO.

## Examples

**_x<sub>1</sub>_ = 2**

**_v<sub>1</sub>_ = 1**

**_x<sub>2</sub>_ = 1**

**_v<sub>2</sub>_ = 2**

After one jump, they are both at **x = 3**, (**_x<sub>1</sub>_ + _v<sub>1</sub>_ = _x<sub>2</sub>_ + _v<sub>2<sub>_** ), so the answer is YES.

## Function Description
## Input

A single line of 4 space-separated integers denoting the respective values of **_x<sub>1</sub>_**, **_v<sub>1</sub>_**, **_x<sub>2</sub>_**, **_v<sub>2</sub>_**

## Output

- string: either **YES** or **NO**

## Constraints

- 0 <= x<sub>1</sub> < x<sub>2</sub> <= 10000
- 1 <= v<sub>1</sub> <= 10000
- 1 <= v<sub>2</sub> <= 10000

## Approach

- x<sub>2</sub> is always greater than x<sub>1</sub>
  - if v<sub>1</sub> <= v<sub>2</sub> -> return "NO"
  - if not:
    - The distance the kangaroo 1 travels is s<sub>1</sub> = x<sub>1</sub> + d * v<sub>1</sub>
    - The distance the kangaroo 2 travels is s<sub>2</sub> = x<sub>2</sub> + d * v<sub>2</sub>
    - For the 2 of them to meet at some point -> s<sub>1</sub> = s<sub>2</sub>
