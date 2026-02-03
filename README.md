*Este proyecto ha sido creado como parte del currículo de 42 por ervillca.*

# Proyecto Libft

## Descripción
`Libft` es un proyecto fundamental del currículo de 42 que consiste en crear una **librería personal en C** replicando varias funciones estándar de las bibliotecas `stdlib.h`, `string.h` y `ctype.h`, además de implementar funciones para manipulación de listas enlazadas.  

El objetivo del proyecto es:

- Replicar funciones estándar de C sin depender de la biblioteca original.  
- Profundizar en el manejo de memoria dinámica, punteros y estructuras de datos.  
- Construir una base sólida para proyectos futuros donde el control de memoria y manipulación de datos sea crítico.  

La librería creada (`libft.a`) incluye funciones para:

- **Control de caracteres:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.  
- **Manipulación de strings:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strdup`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_itoa`, `ft_strmapi`.  
- **Gestión de memoria:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.  
- **Conversión y utilidades:** `ft_atoi`, `ft_split`.  
- **Funciones de salida en file descriptors:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.  
- **Listas enlazadas:** `t_list` y funciones asociadas (`ft_lstnew`, etc.) para manejar estructuras dinámicas.  

Esta librería sirve como **herramienta base para otros proyectos de 42**, facilitando la reutilización de código seguro y probado.

---

## Instrucciones

### Compilación
Para compilar tu librería:

```bash
gcc -Wall -Wextra -Werror -c *.c
ar rcs libft.a *.o
