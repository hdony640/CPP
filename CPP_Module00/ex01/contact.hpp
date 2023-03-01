/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdony <hdony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:53:46 by hdony             #+#    #+#             */
/*   Updated: 2022/11/07 15:36:21 by hdony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string>
# include <cstring>
# include <locale>

class   Contact
{
public:
    Contact(void);
    ~Contact(void);
    void        add_info();   
    void        display_info(int index) const;
    void        display_specific_info(void) const;
    std::string check_field(std::string field) const;
    std::string check_phone(std::string phone) const;
  
  private:
    static const std::string _field_names[5];
    std::string _contact_info[5];
    
    enum Field {
		first_name = 0,
		last_name = 1,
		nickname = 2,
		phone_number = 2,
		darkest_secret = 4
	};
};

#endif