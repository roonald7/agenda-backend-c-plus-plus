#ifndef AGENDA_H
#define AGENDA_H

#include "contact.h"
#include <stdint.h>
#include <map>

class Agenda
{
public:
    Agenda();
    void add_new_contact(std::string first_name, std::string last_name);
    
    template<typename T>
    void edit_contact(ContactEditOptions option, int contact_id, T new_value)
    {
        switch (option)
        {
            case ContactEditOptions::FIRST_NAME:
                agenda[contact_id].first_name = new_value;
                break;
            case ContactEditOptions::LAST_NAME:
                agenda[contact_id].last_name = new_value;
                break;
            case ContactEditOptions::NICK_NAME:
                agenda[contact_id].nick_name = new_value;
                break;
            case ContactEditOptions::AGE:
                agenda[contact_id].age = new_value;
                break;
            case ContactEditOptions::CONTACT_INFO:
                break;
            case ContactEditOptions::ADDRESS:
                break;
        }
    }

private:
    std::map<uint8_t, Contact> agenda;
    int contact_id;
};

#endif