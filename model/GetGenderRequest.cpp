/**
 * validateapi
 * The validation APIs help you validate data. Check if an E-mail address is real. Check if a domain is real. Check up on an IP address, and even where it is located. All this and much more is available in the validation API.
 *
 * OpenAPI spec version: v1
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.11.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "GetGenderRequest.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

GetGenderRequest::GetGenderRequest()
{
    m_FirstName = utility::conversions::to_string_t("");
    m_FirstNameIsSet = false;
    m_CountryCode = utility::conversions::to_string_t("");
    m_CountryCodeIsSet = false;
}

GetGenderRequest::~GetGenderRequest()
{
}

void GetGenderRequest::validate()
{
    // TODO: implement validation
}

web::json::value GetGenderRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_FirstNameIsSet)
    {
        val[utility::conversions::to_string_t("FirstName")] = ModelBase::toJson(m_FirstName);
    }
    if(m_CountryCodeIsSet)
    {
        val[utility::conversions::to_string_t("CountryCode")] = ModelBase::toJson(m_CountryCode);
    }

    return val;
}

void GetGenderRequest::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("FirstName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("FirstName")];
        if(!fieldValue.is_null())
        {
            setFirstName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("CountryCode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("CountryCode")];
        if(!fieldValue.is_null())
        {
            setCountryCode(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void GetGenderRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_FirstNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("FirstName"), m_FirstName));
        
    }
    if(m_CountryCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CountryCode"), m_CountryCode));
        
    }
}

void GetGenderRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("FirstName")))
    {
        setFirstName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("FirstName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("CountryCode")))
    {
        setCountryCode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CountryCode"))));
    }
}

utility::string_t GetGenderRequest::getFirstName() const
{
    return m_FirstName;
}


void GetGenderRequest::setFirstName(utility::string_t value)
{
    m_FirstName = value;
    m_FirstNameIsSet = true;
}
bool GetGenderRequest::firstNameIsSet() const
{
    return m_FirstNameIsSet;
}

void GetGenderRequest::unsetFirstName()
{
    m_FirstNameIsSet = false;
}

utility::string_t GetGenderRequest::getCountryCode() const
{
    return m_CountryCode;
}


void GetGenderRequest::setCountryCode(utility::string_t value)
{
    m_CountryCode = value;
    m_CountryCodeIsSet = true;
}
bool GetGenderRequest::countryCodeIsSet() const
{
    return m_CountryCodeIsSet;
}

void GetGenderRequest::unsetCountryCode()
{
    m_CountryCodeIsSet = false;
}

}
}
}
}

