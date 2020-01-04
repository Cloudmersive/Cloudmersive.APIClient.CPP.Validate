/**
 * validateapi
 * The validation APIs help you validate data. Check if an E-mail address is real. Check if a domain is real. Check up on an IP address, and even where it is located. All this and much more is available in the validation API.
 *
 * OpenAPI spec version: v1
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.10.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "FirstNameValidationRequest.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

FirstNameValidationRequest::FirstNameValidationRequest()
{
    m_FirstName = utility::conversions::to_string_t("");
    m_FirstNameIsSet = false;
}

FirstNameValidationRequest::~FirstNameValidationRequest()
{
}

void FirstNameValidationRequest::validate()
{
    // TODO: implement validation
}

web::json::value FirstNameValidationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_FirstNameIsSet)
    {
        val[utility::conversions::to_string_t("FirstName")] = ModelBase::toJson(m_FirstName);
    }

    return val;
}

void FirstNameValidationRequest::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("FirstName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("FirstName")];
        if(!fieldValue.is_null())
        {
            setFirstName(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void FirstNameValidationRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

void FirstNameValidationRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
}

utility::string_t FirstNameValidationRequest::getFirstName() const
{
    return m_FirstName;
}


void FirstNameValidationRequest::setFirstName(utility::string_t value)
{
    m_FirstName = value;
    m_FirstNameIsSet = true;
}
bool FirstNameValidationRequest::firstNameIsSet() const
{
    return m_FirstNameIsSet;
}

void FirstNameValidationRequest::unsetFirstName()
{
    m_FirstNameIsSet = false;
}

}
}
}
}

