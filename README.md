
#  printf





![forthebadge](data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSI0MDUuODYzNTI1MzkwNjI1IiBoZWlnaHQ9IjM1IiB2aWV3Qm94PSIwIDAgNDA1Ljg2MzUyNTM5MDYyNSAzNSI+PHJlY3Qgd2lkdGg9IjIyNC43ODM1NjkzMzU5Mzc1IiBoZWlnaHQ9IjM1IiBmaWxsPSIjZjYwODA4Ii8+PHJlY3QgeD0iMjI0Ljc4MzU2OTMzNTkzNzUiIHdpZHRoPSIxODEuMDc5OTU2MDU0Njg3NSIgaGVpZ2h0PSIzNSIgZmlsbD0iIzBkOWVmNSIvPjx0ZXh0IHg9IjExMi4zOTE3ODQ2Njc5Njg3NSIgeT0iMjEuNSIgZm9udC1zaXplPSIxMiIgZm9udC1mYW1pbHk9IidSb2JvdG8nLCBzYW5zLXNlcmlmIiBmaWxsPSIjRkZGRkZGIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIiBsZXR0ZXItc3BhY2luZz0iMiI+UFJPSkVDVCBDQVJSSUVEIE9VVCBCWSA8L3RleHQ+PHRleHQgeD0iMzE1LjMyMzU0NzM2MzI4MTI1IiB5PSIyMS41IiBmb250LXNpemU9IjEyIiBmb250LWZhbWlseT0iJ01vbnRzZXJyYXQnLCBzYW5zLXNlcmlmIiBmaWxsPSIjRkZGRkZGIiB0ZXh0LWFuY2hvcj0ibWlkZGxlIiBmb250LXdlaWdodD0iOTAwIiBsZXR0ZXItc3BhY2luZz0iMiI+VEFSRUsgQU5EIEVSV0FOPC90ZXh0Pjwvc3ZnPg==)

## Description

 We will present to you a customized version of the printf function, with the most basic functionalities such as printing:
- a chain,
- of a character
- whole number.


## Requirement

 - Ubuntu 20.04.06 LTS

 - include header file "main.h"

 - compilation line




```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

```
    
## How it's working

Using a composite data type such as struct which will contain the declaration of a char pointer *specifier and a pointer to a function called *print, this will be receiving a type val_list which will be the list of arguments from format, that will be printed in case there is a match between the struct first argument (specifier) and the format.

https://lucid.app/lucidchart/21ed7607-8c9a-4448-8e6e-db516d304846/edit?viewport_loc=-27490%2C-21026%2C13687%2C6949%2C0_0&invitationId=inv_c42fb79c-b735-4541-b21b-3d5037e226d2
