//
// Created by Jason Brown on 2/7/16.
//

#ifndef LAB5_DEPARTMENT_H
#define LAB5_DEPARTMENT_H

using namespace std;

enum department{EECS, CHEM_ENG, MATH, MECH_ENG};

string get_dept_name(department d) {
    string dept_name;

    switch (d) {
        case EECS:
            dept_name = "EECS";
            break;
        case CHEM_ENG:
            dept_name = "CHEM_ENG";
            break;
        case MATH:
            dept_name = "MATH";
            break;
        case MECH_ENG:
            dept_name = "MECH_ENG";
            break;
        default:
            dept_name = "[unrecognized dept name]";
    }

    return dept_name;
}

#endif //LAB5_DEPARTMENT_H
