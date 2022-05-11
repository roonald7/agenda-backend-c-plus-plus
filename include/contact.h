#ifndef CONTACT_H
#define CONTACT_H

#include <string>

enum class ContactEditOptions
{
    FIRST_NAME,
    LAST_NAME,
    NICK_NAME,
    AGE,
    ADDRESS,
    CONTACT_INFO
};

struct AddressCtx
{
    std::string street_name;
    std::string house_number;
    std::string city;
    std::string zip_code;
    std::string district;
    std::string complement;
};

struct ContactInfoCtx
{
    std::string email;
    std::string residencial_telephone;
    std::string personal_telephone;
    std::string comercial_telephone;
};

struct Contact
{
    Contact();
    Contact(std::string new_first_name, std::string new_last_name);
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    uint8_t age;
    AddressCtx address;
    ContactInfoCtx contact_info;
};

#endif