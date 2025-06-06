/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   welcome.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zm <zm@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 22:04:11 by zoentifi          #+#    #+#             */
/*   Updated: 2025/05/21 01:52:45 by zm               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	print_welcome1(void)
{
	printf("\n%s%s%s\n", RED,
		"███████╗███████╗ ██████╗ ███████╗ █████╗ ██╗   ██╗██╗  ████████╗    \
███████╗██╗   ██╗██████╗ ███████╗███████╗██████╗ ███████╗",
		RESET);
	printf("%s%s%s\n", RED,
		"██╔════╝██╔════╝██╔════╝ ██╔════╝██╔══██╗██║   ██║██║  ╚══██╔══╝    \
██╔════╝██║   ██║██╔══██╗██╔════╝██╔════╝██╔══██╗██╔════╝",
		RESET);
	printf("%s%s%s\n", RED,
		"███████╗█████╗  ██║  ███╗█████╗  ███████║██║   ██║██║     ██║       \
███████╗██║   ██║██████╔╝█████╗  █████╗  ██████╔╝███████╗",
		RESET);
}

void	print_welcome(void)
{
	print_welcome1();
	printf("%s%s%s\n", RED,
		"╚════██║██╔══╝  ██║   ██║██╔══╝  ██╔══██║██║   ██║██║     ██║       \
╚════██║██║   ██║██╔══██╗██╔══╝  ██╔══╝  ██╔══██╗╚════██║",
		RESET);
	printf("%s%s%s\n", RED,
		"███████║███████╗╚██████╔╝██║     ██║  ██║╚██████╔╝███████╗██║       \
███████║╚██████╔╝██║  ██║██║     ███████╗██║  ██║███████║",
		RESET);
	printf("%s%s%s\n", RED,
		"╚══════╝╚══════╝ ╚═════╝ ╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚══════╝╚═╝       \
╚══════╝ ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚══════╝╚═╝  ╚═╝╚══════╝",
		RESET);
	printf("\n%s%s%s\n", GREEN, "This project was done by abenba & zoentifi\n",
		RESET);
}
