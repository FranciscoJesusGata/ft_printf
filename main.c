/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 13:35:47 by fgata-va          #+#    #+#             */
/*   Updated: 2020/02/12 18:15:44 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int mine;
	int native;
	char *hidden_s;

	printf("Tester simple de printf:\n(El primer resultado es de ft_printf y el segundo es el de printf)\n");
	printf("====================TEST 1====================\n");
	printf("Test con format sin variables: \n");
	mine = ft_printf("Hola mundo. \n");
	native = printf("Hola mundo. \n");
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 2====================\n");
	printf("Test con carácteres simples\n");
	mine = ft_printf("Hola %c.\n", 'a');
	native = printf("Hola %c.\n", 'a');
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 3====================\n");
	printf("Test con un string simple\n");
	mine = ft_printf("Hola %s. \n", "mundo");
	native = printf("Hola %s. \n", "mundo");
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 4====================\n");
	printf("Test con varios strings\n");
	mine = ft_printf("Hola %s, %s, %s. \n", "Curro", "Alberto", "Jaime");
	native = printf("Hola %s, %s, %s. \n", "Curro", "Alberto", "Jaime");
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 5====================\n");
	printf("Test con varios strings con diferente precisión\n");
	mine = ft_printf("Hola %.10s, %.4s, %.0s. \n", "Curro", "Alberto", "Jaime");
	native = printf("Hola %.10s, %.4s, %.0s. \n", "Curro", "Alberto", "Jaime");
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 6====================\n");
	printf("Test con varios strings con width\n");
	mine = ft_printf("Width de 10: |%10s|\n", "Curro");
	native = printf("Width de 10: |%10s|\n", "Curro");
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 7====================\n");
	printf("Test con varios chars con width\n");
	mine = ft_printf("Width de 10: |%10c|\n", 'm');
	native = printf("Width de 10: |%10c|\n", 'm');
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 8====================\n");
	printf("Test con varios chars con width justificado a la izquierda\n");
	mine = ft_printf("Width de 10: |%-10c|\n", 'm');
	native = printf("Width de 10: |%-10c|\n", 'm');
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 9====================\n");
	printf("Test con varios strings con width justificado a la izquierda\n");
	mine = ft_printf("Width de 10: |%-10s|\n", "Curro");
	native = printf("Width de 10: |%-10s|\n", "Curro");
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 10====================\n");
	printf("Test con strings con precisión sin especificar\n");
	mine = ft_printf("Hola %.s. \n", "Mundo");
	native = printf("Hola %.s. \n", "Mundo");
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 11====================\n");
	printf("Test básico de números enteros\n");
	mine = ft_printf("Tengo una playlist de %d canciones\n", 20);
	native = printf("Tengo una playlist de %d canciones\n", 20);
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 12====================\n");
	printf("Test básico de números enteros con el flag 0\n");
	mine = ft_printf("Dos en binario es %04d\n", 10);
	native = printf("Dos en binario es %04d\n", 10);
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 13====================\n");
	printf("Test básico de números enteros con width\n");
	mine = ft_printf("Width de 10: |%10d|\n", 42);
	native = printf("Width de 10: |%10d|\n", 42);
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 14====================\n");
	printf("Test básico de números enteros con width y justificado a la izq.\n");
	mine = ft_printf("Width de 10: |%-10d|\n", 42);
	native = printf("Width de 10: |%-10d|\n", 42);
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 15====================\n");
	printf("Test básico de números enteros con width con estrella.\n");
	mine = ft_printf("Width de 10: |%*d|\n", 10, 42);
	native = printf("Width de 10: |%*d|\n", 10, 42);
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 16====================\n");
	printf("Test básico de números enteros con width y justificado a la izq con estrella.\n");
	mine = ft_printf("Width de 10: |%-*d|\n", 10, 42);
	native = printf("Width de 10: |%-*d|\n", 10, 42);
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 17====================\n");
	printf("Test básico con porcentaje.\n");
	mine = ft_printf("La cpu funciona al %d%%\n", 5);
	native = printf("La cpu funciona al %d%%\n", 5);
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 18====================\n");
	printf("Holbi\n");
	mine = ft_printf("%.3s%.2s\n", "holla", "bitch");
	native = printf("%.3s%.2s\n", "holla", "bitch");
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 19====================\n");
	printf("bomba\n");
	mine = ft_printf("%7.5s\n", "bombastic");
	native = printf("%7.5s\n", "bombastic");
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 20====================\n");
	printf("tubul\n");
	mine = ft_printf("|%-7.5s|\n", "tubular");
	native = printf("|%-7.5s|\n", "tubular");
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 21====================\n");
	printf("Flag punto y cero\n");
	mine = ft_printf("%.03s\n", "tictac");
	native = printf("%.03s\n", "tictac");
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 22====================\n");
	printf("Flag punto y cero\n");
	hidden_s = "hi low\0don't print me lol\0";
	mine = ft_printf("|%3.s|\n", hidden_s);
	native = printf("|%3.s|\n", hidden_s);
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 23====================\n");
	printf("Null with width\n");
	mine = ft_printf("|%9.s", "\0");
	printf("|\n");
	printf("|");
	native = printf("%9.s", "\0");
	printf("|\n");
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 24====================\n");
	printf("Integer con precisión\n");
	mine = ft_printf("%.5d\n", 2);
	native = printf("%.5d\n", 2);
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 25====================\n");
	printf("Integer negativo con precisión\n");
	mine = ft_printf("%.5d\n", -3);
	native = printf("%.5d\n", -3);
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 26====================\n");
	printf("Integer negativo con width\n");
	mine = ft_printf("|%5d|\n", -42);
	native = printf("|%5d|\n", -42);
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	printf("====================TEST 26====================\n");
	printf("Test hexadecimal\n");
	mine = ft_printf("%x\n", 52625);
	native = printf("%x\n", 52625);
	printf("Mi función escribió %d y printf escribió %d \n", mine, native);
	return (0);
}
