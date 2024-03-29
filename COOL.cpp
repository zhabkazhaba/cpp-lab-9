#include<iostream>
template
<
typename
sourceType
,
typename
destType>
destType
*
convert_array
(
const
sourceType
*
source
,
int
length
)
{
auto
*
result
=
new
destType
[
length
]
;
for
(
unsigned
int
i
=
0
;
i

<

length
;
++i
)
result
[
i
]
=
static_cast
<
destType>
(
source
[
i
]
)
;
return
result
;
}
template

<
>
long
int
*
convert_array
<
int
,
long
int>
(
const
int
*
source
,
int
length
)
{
auto
*
result
=
new
long
int
[
length
]
;
for
(
int
i
=
0
;
i

<

length
;
++i
)
result
[
i
]
=
static_cast
<
long
int>
(
source
[
i
]
)
;
std::cout
<<
"Privet!"
<<
std::endl
;
return
result
;
}
int
main
(
)
{
int
arr1_s
[
]
=
{
60
,
61
,
62
,
63
,
64
,
65
}
;
int
arr1_l
=
sizeof
(
arr1_s
)
/
sizeof
(
arr1_s
[
0
]
)
;
long
int
*
arr1_d
=
convert_array
<
int
,
long
int>
(
arr1_s
,
arr1_l
)
;
for
(
unsigned
int
i
=
0
;
i
<
arr1_l
;
++i
)
{
std::cout
<<
arr1_d
[
i
]
<<
std::endl
;
}
float
arr2_s
[
]
=
{
3.34
,
3.67
,
6.12
,
9.1234
}
;
int
arr2_l
=
sizeof
(
arr2_s
)
/
sizeof
(
arr2_s
[
0
]
)
;
long
*
arr2_d
=
convert_array
<
float
,
long>
(
arr2_s
,
arr2_l
)
;
for
(
unsigned
int
i
=
0
;
i

<

arr2_l
;
++i
)
{
std::cout
<<
arr2_d
[
i
]
<<
std::endl
;
}
return
0
;
}
