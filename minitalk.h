/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:45:04 by mrechuli          #+#    #+#             */
/*   Updated: 2024/05/13 17:32:13 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h> // biblioteka, ktora definiuje rozne typy danych uzywanych w UNIXie, np. pid_t (identyfikator procesu - process identifier)

typedef struct s_state
{
	int	character;
	int	index;
}		t_state

#endif