/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <blino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:07:37 by blino             #+#    #+#             */
/*   Updated: 2022/10/29 17:59:31 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>
# define SEARCH_HEADER "\
---------------------------------------------\n\
|     Index|First name| Last name|  Nickname|\n\
---------------------------------------------"
# define SEARCH_FOOTER "\
---------------------------------------------\n"


class Phonebook{

private:

	Contact contact[8];
	int		count;

public:

	Phonebook(void);
	~Phonebook(void);

	void	Add(std::string *data);
	void	Search(void);
	void	DisplayContact(void);
};

#endif