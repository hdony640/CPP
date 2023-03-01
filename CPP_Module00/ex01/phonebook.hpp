/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:56:58 by hdony             #+#    #+#             */
/*   Updated: 2022/11/07 15:33:32 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include "contact.hpp"

class   Phonebook
{
public:
    Phonebook(void);
    ~Phonebook(void);
    
    void    add_contact(void);
    void    search_contact(void) const;
    void    searching(void) const;
    void    display_specific_info(void) const;
    void    display_info(int index) const;
    
private:
    Contact _array[8];
    int     _index;
};

#endif