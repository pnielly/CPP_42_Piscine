

 
// Default Constructor
Cure::Cure()
{
std::cout << " Constructor of Cure called " << std::endl;
}

// Destructor
Cure::~Cure()
{
std::cout << " Destructor of Cure called " << std::endl;
}
 
// Copy
Cure::Cure(const Cure& op)
{
	// add copy stuff
	std::cout << Cure copied << std::endl;
	}
// Assignment operator overload

{
	if (this != &op)
	{
		this->_ = op._;
	// add copy stuff
	}
	return (*this);
}
 
// Default Constructor
Ice::Ice()
{
std::cout << " Constructor of Ice called " << std::endl;
}

// Destructor
Ice::~Ice()
{
std::cout << " Destructor of Ice called " << std::endl;
}
 
// Copy
Ice::Ice(const Ice& op)
{
	// add copy stuff
	std::cout << Ice copied << std::endl;
	}
// Assignment operator overload
