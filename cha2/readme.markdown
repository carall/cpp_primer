# cha2

## ex2-1
* int 16, long 32, long long 64
* signed is default (integer and float*point number)
* significant digits and minimum size

## ex2-2
* rate : double
* principle : double
* payment : double

## ex2-5
(a) char, wchar_t, string, wchar_t string

(b) int, unsigned, long, unsigned long, int int

(c) double, float, long double

(d) int, unsigned, double, double

## ex2-6

2ed is illegal, oct

## ex2-7
(a) string **"Who goes with Fergus?new line"** **escape sequences use octal number**

(b) long double 31.4

(c) float 1024.0 **syntax error**

(d) long double 3.14

## ex2-9
(a) illegal

(b) illegal  **list initialization does not allow information loss**

(c) illegal

(d) legal  i = 3;

## ex2-10
* built-in type:
    * inside a function : uninitialized (undefined)
    * outside any function : zero
* class type : self-control

## ex2-11
(a) definition

(b) definition

(c) declaration

**use extern to declare, definition is also a declaration**

## ex2-12
e is valid

## ex2-13
100

## ex2-14
i = 10, sum = 45

## ex2-15

(a) valid type conversion

(b) invalid **reference may be bound only to an object**

(c) valid

(d) invalid **reference must be initialized**

## ex2-17

10 10

## ex2-19

reference is an alias, pointer is an object;

**reference can not be changed once initialized, pointer can be changed**

**a reference must be initialized**

## ex2-20

`i = i * i`

## ex2-21

(a) invalid **the type of a pointer and its object must be the same**

(b) invalid **type conversion from int to int***

(c) valid

## ex2-22

if p is nullptr

## ex2-23

**no**

## ex2-24

void* can bound to any type of object, but it can do only a limited number of things

## ex2-25

(a) ip@int* i@int r@int&

(b) i@int ip@int*

(c) ip@int* ip2@int

## ex2-26

(a) invalid **const variable must be initialized**

(b) valid

(c) valid

(d) valid, invalid

## ex2-27

(a) illegal **a reference can only bound to an object**

(b) legal

(c) legal **a reference to const can bound to literal**

(d) legal

(e) legal

(f) illegal **a reference to const can not be const and a reference must be initialized**

## ex2-28

(a) illegal **a const pointer must be initialized**

(b) illegal same with a

(c) illegal **ic should be initialized**

(d) illegal same with a

(e) legal

(g) legal

# ex2-29

(a) legal assign an int with a const int

(b) illegal different pointer type

(c) illegal 

(d) illegal **a const pointer can not be changed**

(e) illegal same with d

(f) illegal ic is const

# ex2-30

top, none, none, none, low, low/top, low

# ex2-31

legal assign an int with a const int

illegal p2 is a low-level const, const can not converted to an unconst

legal  opposite of previous situation

illegal same with (2)

legal 

# ex2-35

int, int, const int*, int, int
int, const int&, const int*, const int, const int&

# ex2-36

c : int 4

d : int& 4

# ex2-27

c : int 3

d : int& 3

# ex2-28

typedef get a reference when expressions can yield object that can stand on the left-hand oprend

typedef include top-level const
