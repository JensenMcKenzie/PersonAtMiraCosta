/* Instructor.h - Header for an Instructor, child of PersonAtMCC
 * Author:     <your name>
 * Module:     7
 * Project:    Lab, Part 1
 * Description:
 *
 *    Child of PersonAtMCC
 *
 *    Instance members:
 *       department(string)
 *       is_permanent (bool)
 *       pay_rate (double)
 *       hours (double)
 *
 *    Functions:
 *       full constructor
 *       getters and setters for all instance members
 *       showInfo
 */

#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "PersonAtMCC.h"
using namespace std ;

class Instructor : public PersonAtMCC{     /*** MAKE A CHILD OF PERSONATMCC WITH PUBLIC ACCESS ***/

    private:
        string department ;
        bool is_permanent ;
        double pay_rate ;
        double hours ;

    public :
        Instructor(long, string, string, string, string, bool, double, double) ;     // full
        string getDepartment() ;                       // getters and setters
        void setDepartment(string) ;
        bool getIsPermanent() ;
        void setIsPermanent(bool) ;
        double getPayRate() ;
        void setPayRate(double) ;
        double getHours() ;
        void setHours(double) ;
        void showInfo() ;                              // show all info for this Instructor
} ;

#endif
