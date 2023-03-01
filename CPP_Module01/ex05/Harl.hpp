/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:34:09 by hdony             #+#    #+#             */
/*   Updated: 2022/11/04 14:54:11 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HARL_CLASS
# define HARL_CLASS

# include <iostream>
# include <string>

class Harl
{
public:
    Harl();
    ~Harl();

    void complain(std::string level);
private:
    void _debug(void);
    void _info(void);
    void _warning(void);
    void _error(void);
};

#endif