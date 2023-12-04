/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:35:21 by xriera-c          #+#    #+#             */
/*   Updated: 2023/12/04 11:35:38 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>
#include <limits.h>

int    main (void)
{
    ft_printf("** Definitely Not Tim's ft_printf Tester**\n\n");
    ft_printf("Weird Characters Test\n\n");
    ft_printf("\001\002\007\v\010\f\r\n");
    printf("\001\002\007\v\010\f\r\n\n");
    ft_printf("Characters Test\n\n");
    ft_printf("FT = %c%c%c\n", '\0', 'a', 'a');
    printf("OG = %c%c%c\n\n", '\0', 'a', 'a');
    ft_printf(" String Test\n\n");
    ft_printf("FT = %s %s\n", "", "World");
    printf("OG = %s %s\n\n", "", "World");
    ft_printf("Decimal Tests\n\n");
    ft_printf("FT = %d %d\n", 42, -42);
    printf("OG = %d %d\n\n", 42, -42);
    ft_printf("Hexadecimal Lowercase Test\n\n");
    ft_printf("FT = %x %x\n", 15, -2);
    printf("OG = %x %x\n\n", 15, -2);
    ft_printf(" Hexadecimal Upppercase Test\n\n");
    ft_printf("FT = %X %X\n", 15, -2);
    printf("OG = %X %X\n\n", 15, -2);
    ft_printf(" %% Test\n\n");
    ft_printf("FT = %% %%\n\n", '%', '%');
    printf("OG = %% %%\n");
    ft_printf(" Integer Test\n\n");
    ft_printf("FT = %i %i\n", 2147483647, -2147483648);
    printf("OG = %i %li\n\n", 2147483647, -2147483648);
    ft_printf(" Unsigned Int Test\n\n");
    ft_printf("FT = %u %u\n\n", 42, -3);
    printf("OG = %u %u\n\n", 42, -3);
    printf("Invalid conversions\n");
    printf("\n%d", ft_printf("FT = Hola_%m_hola"));
    printf("\n");
    printf("\n%d", printf("OG = Hola_%m_hola"));
    printf("\n");
    printf("\n%d", ft_printf("FT = Hola_%m_hola%"));
    printf("\n");
    printf("\n%d", printf("OG = Hola_%m_hola%"));
    printf("\n");

}
