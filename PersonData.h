#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>
using namespace std;

class PersonData
{

private:

	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	string zip;
	string phone;

public:

//**********************************************
//               Constructor                   *
//**********************************************

	PersonData() : lastName("unknown"), firstName("unknown"), address("unknown"), city("unknown"), state("unknown"), zip("unknown"), phone("unknown")
	{}


//**********************************************
//                  Mutator                    *
//**********************************************

	//precondition: lastName is not NULL
    //postcondition: set  lastName
	void setLastName(string s)
	{
		lastName = s;
	}

	
	//precondition: firstName is not NULL
	//postcondition: set  firstName
	void setFirstName(string s)
	{
		firstName = s;
	}
	

	//precondition: address is not NULL
	//postcondition: set  address
	void setAddress(string s)
	{
		address = s;
	}

	
	//precondition: city is not NULL
	//postcondition: set  city
	void setCity(string s)
	{
		city = s;
	}


	//precondition: state is not NULL
	//postcondition: set  state
	void setState(string s)
	{
		state = s;
	}


	//precondition: zip is not NULL
	//postcondition: set  zip
	void setZip(string s)
	{
		zip = s;
	}


	//precondition: phone is not NULL
	//postcondition: set  phone
	void setPhone(string s)
	{
		phone = s;
	}

	//precondition: N/A
	//postcondition:get lastName
	string getLastName() const
	{
		return lastName;
	}

	//precondition: N/A
	//postcondition:get firstName
	string getFirstName() const
	{
		return firstName;
	}

	//precondition: N/A
	//postcondition:get address
	string getAddress() const
	{
		return address;
	}

	//precondition: N/A
	//postcondition:get city
	string getCity() const
	{
		return city;
	}

	//precondition: N/A
	//postcondition:get zip
	string getZip() const
	{
		return zip;
	}

	//precondition: N/A
	//postcondition:get state	
	string getState() const
	{
		return state;
	}

	//precondition: N/A
	//postcondition:get phone
	string getPhone() const
	{
		return phone;
	}

};


#endif
