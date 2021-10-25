#include "../includes/Phonebook.hpp"

void	addCmd(Phonebook &pbk)
{
	Contact contact;

	if (pbk.getCountContacts() >= 8)
	{
		std::cerr << "Phonebook is full." << std::endl;
		return ;
	}
	contact.setContactData(contact);
	pbk.update(contact);
	return ;
}

void Contact::setContactData(Contact &contact)
{
	std::cout << "Please provide following information :";
	std::cout << std::endl;
	std::cout << "first name: ";
	std::getline(std::cin, contact._first_name);
	std::cout << "last name: ";
	std::getline(std::cin, contact._last_name);
	std::cout << "nickname: ";
	std::getline(std::cin, contact._nickname);
	std::cout << "phone number: ";
	std::getline(std::cin, contact._phone_number);
	std::cout << "darkest secret: ";
	std::getline(std::cin, contact._darkest_secret);

	if (std::cin.eof())
		return ;

	std::cout << "Contact created." << std::endl;
	return ;
}

void	searchCmd(Phonebook &pbk)
{
	int		count = pbk.getCountContacts();
	int		my_index;
	std::string	input;

	if (!count)
	{
		std::cout << "Phonebook is empty..." << std::endl;
		return ;
	}
	for (int i = 0; i < count; i++)
		pbk.getContact(i).display_table(i, count);
	std::cout << "Enter the index of the contact you would like to display: " << std::endl;
	std::getline(std::cin, input);
	try {
		my_index = std::stoi(input);
	}
	catch (std::invalid_argument)
	{
		std::cerr << "Invalid index !" << std::endl;
		return ;
	}
	if (my_index < 0 || my_index >= count)
		std::cout << "The index should belong to [0;" << count - 1 << "]... Try again." << std::endl;
	else
		pbk.getContact(my_index).displayContact();
	return ;
}

void	welcome()
{
	std::cout << " ------------------------- " << std::endl;
	std::cout << "| WELCOME TO MY PHONEBOOK |" << std::endl;
	std::cout << " ------------------------- " << std::endl;
	std::cout << "                           " << std::endl;
	std::cout << " Please enter a command : ADD, SEARCH or EXIT" << std::endl;
	return ;
}

int	main()
{
	Phonebook pbk;
	std::string input;

	welcome();
	while (true)
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cerr << "Unexpected end of file. But it's fine." << std::endl;
			break ;
		}
		else if (input == EXIT)
			break ;
		else if (input == ADD)
			addCmd(pbk);
		else if (input == SEARCH)
			searchCmd(pbk);
		else
			std::cout << "Wrong input. Only \"ADD\", \"SEARCH\" and \"EXIT\" tolerated." << std::endl;
	}
	return 0;
}
