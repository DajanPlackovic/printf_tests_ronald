#include "ft_printf.h"
#include <stdio.h>

int    main(void)
{
    char    *ptr;

    ptr = "Hello world!";

    printf("%d\n", printf("%c\n", ptr[2]));
    printf("%d\n", ft_printf("%c\n", ptr[2]));

    printf("%d\n", printf("%s\n", ptr));
    printf("%d\n", ft_printf("%s\n", ptr));

    printf("%d\n", printf("%d\n", -214748364));
    printf("%d\n", ft_printf("%d\n", -214748364));

    printf("%d\n", printf("%i\n", -214748364));
    printf("%d\n", ft_printf("%i\n", -214748364));

    printf("%d\n", printf("%u\n", -214748364));
    printf("%d\n", ft_printf("%u\n", -214748364));

    printf("%d\n", printf("%%\n"));
    printf("%d\n", ft_printf("%%\n"));

    printf("%d\n", printf("%x %x %x %x %x\n", -42, 42, -452, 4242, NULL));
    printf("%d\n", ft_printf("%x %x %x %x %x\n", -42, 42, -452, 4242, NULL));

    printf("%d\n", printf("%X\n", -42));
    printf("%d\n", ft_printf("%X\n", -42));

    printf("%d\n", printf("%p\n", &ptr));
    printf("%d\n", ft_printf("%p\n", &ptr));

    printf("%d\n", printf("%p\n", NULL));
    printf("%d\n", ft_printf("%p\n", NULL));

    printf("%d\n", printf("Hello world!\n"));
    printf("%d\n", ft_printf("Hello world!\n"));

    printf("%d\n", printf("Hello wo%%rld!\n"));
    printf("%d\n", ft_printf("Hello wo%%rld!\n"));

    printf("%d\n", printf("ハロ\n"));
    printf("%d\n", ft_printf("ハロ\n"));

    printf("%d\n", printf("%s\n", NULL));
    printf("%d\n", ft_printf("%s\n", NULL));
}
