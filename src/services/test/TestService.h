/*
    Copyright (C) 2002  Miguel Guzman Miranda [Aglanor]

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef TESTSERVICE_H
#define TESTSERVICE_H

#include <framework/Service.h>
#include <string>

namespace dime {

/**
 * Basic test service for testing and debugging.
 *
 * @author Miguel Guzman Miranda [Aglanor]
 *
 * @see dime::framework::Service
 * @see dime::framework::AbstractService
 */
class TestService : public Service
{
    //======================================================================
    // Private Variables
    //======================================================================
    private:
		std::string myTestMessage;
		int myTestNumber;

		
    //----------------------------------------------------------------------
    // Constructors & Destructor

	public:
	
    /** Creates a new TestService using default values. */
    TestService();


    /** Deletes a Service instance. */
    ~TestService()
    {
    }


    //----------------------------------------------------------------------
    // Getters & Setters

    //----------------------------------------------------------------------
    // Methods
	
   Service::Status start();

   void stop(int code) ;

}; // TestService

} // namespace dime

#endif

