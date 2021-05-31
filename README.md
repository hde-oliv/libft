
# Libft


## Table of Contents

1.  [Libft](#org7a9c75a)
    1.  [What it is](#orge444dbf)
    2.  [Skills](#orgd443b80)
    3.  [Functions](#orgef45313)
    4.  [How to use](#org44c4196)
    5.  [Found any bug?](#org2bfb47d)



<a id="org7a9c75a"></a>



<a id="orge444dbf"></a>

## What it is

Libft is the first project at École 42 consisting on re-coding basic Libc
(BSD) functions and some additional ones. This library is an important
part of the whole cursus, as it will be used in subsequent projects.
The &ldquo;ft&rdquo; means forty-two.


<a id="orgd443b80"></a>

## Skills

-   Unix logic
-   Rigor
-   Algorithms & AI
-   Imperative programming


<a id="orgef45313"></a>

## Functions

<table border="2" cellspacing="0" cellpadding="6" rules="groups" frame="hsides">


<colgroup>
<col  class="org-left" />

<col  class="org-left" />

<col  class="org-left" />

<col  class="org-left" />
</colgroup>
<tbody>
<tr>
<td class="org-left">Libc (BSD)</td>
<td class="org-left">Additional</td>
<td class="org-left">Bonus</td>
<td class="org-left">Personal</td>
</tr>


<tr>
<td class="org-left">ft_atoi</></td>
<td class="org-left">ft_itoa</></td>
<td class="org-left">ft_lstadd</>_back</></td>
<td class="org-left">ft_dfree</></td>
</tr>


<tr>
<td class="org-left">ft_bzero</></td>
<td class="org-left">ft_putchar</>_fd</></td>
<td class="org-left">ft_lstadd</>_front</></td>
<td class="org-left">ft_intlen</></td>
</tr>


<tr>
<td class="org-left">ft_calloc</></td>
<td class="org-left">ft_putendl</>_fd</></td>
<td class="org-left">ft_lstclear</></td>
<td class="org-left">ft_isspace</></td>
</tr>


<tr>
<td class="org-left">ft_isalnum</></td>
<td class="org-left">ft_putnbr</>_fd</></td>
<td class="org-left">ft_lstdelone</></td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft\_isalpha</></td>
<td class="org-left">ft_putstr</>_fd</></td>
<td class="org-left">ft_lstiter</></td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft_memccpy</></td>
<td class="org-left">ft_split</></td>
<td class="org-left">ft_lstlast</></td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft_memchr</></td>
<td class="org-left">ft_strjoin</></td>
<td class="org-left">ft_lstmap</></td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft_memcmp</></td>
<td class="org-left">ft_strmapi</></td>
<td class="org-left">ft_lstnew</></td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft_memcpy</></td>
<td class="org-left">ft_substr</></td>
<td class="org-left">ft_lstsize</></td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft_memmove</></td>
<td class="org-left">ft_strtrim</></td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft_memset</></td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft_strchr</></td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft_strdup</></td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft_strlcat</></td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft_strlcpy</></td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft_strlen</></td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft_strncmp</></td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft_strnstr</></td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft_strrchr</></td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft_tolower</></td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
</tr>


<tr>
<td class="org-left">ft_toupper</></td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
<td class="org-left">&#xa0;</td>
</tr>
</tbody>
</table>

OBS: I know that isspace is a Libc function, but it wasn&rsquo;t part of the Libft project


<a id="org44c4196"></a>

## How to use

Prerequisites:

    clang

Just clone the repository and run:

    make

The library will be generated in .a.


<a id="org2bfb47d"></a>

## Found any bug?

Feel free to send a pull request!

######  Licensed under GPLv3

