#include "agenda.h"

Agenda::Agenda()
{
    contact_id = 1;
}

void Agenda::add_new_contact(std::string first_name, std::string last_name)
{
    agenda[contact_id] = Contact(first_name, last_name);

    contact_id++;
}