/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 21:24:01 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/29 23:05:22 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	target_;

	protected:

	public:
		PresidentialPardonForm(std::string name, int gradeToSign, int gradeToExecute, std::string target);
		~PresidentialPardonForm(void);
		virtual void	execute(const Bureaucrat &executor) const;
};
