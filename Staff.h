/* Staff.h - Header for staff members at MCC
 * Author:     <your name>
 * Module:     7
 * Project:    Lab
 * Description:
 *
 *    Child of PersonAtMCC
 *
 *    Instance members:
 *       extension (string)
 *       hire_date (string)
 *       pay_rate (double)
 *
 *    Functions:
 *       full constructor
 *       getters and setters for extension, hire_date, and pay_rate
 *       showInfo
 */

#ifndef STAFF_H
#define STAFF_H

#include "PersonAtMCC.h"
using namespace std ;

class Staff : public PersonAtMCC{          /*** MAKE A CHILD OF PERSONATMCC WITH PUBLIC ACCESS ***/
    private :
        string extension ;
        string hire_date ;
        double pay_rate ;

    public :
        Staff(long, string, string, string, string, string, double) ;         // full constructor

        string getExtension() ;                       // all getters and setters
        void setExtension(string) ;
        string getHireDate() ;
        void setHireDate(string) ;
        double getPayRate() ;
        void setPayRate(double) ;

        void showInfo() ;
} ;

#endif
