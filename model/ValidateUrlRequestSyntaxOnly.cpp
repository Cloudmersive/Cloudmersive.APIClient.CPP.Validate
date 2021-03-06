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



#include "ValidateUrlRequestSyntaxOnly.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ValidateUrlRequestSyntaxOnly::ValidateUrlRequestSyntaxOnly()
{
    m_URL = utility::conversions::to_string_t("");
    m_URLIsSet = false;
}

ValidateUrlRequestSyntaxOnly::~ValidateUrlRequestSyntaxOnly()
{
}

void ValidateUrlRequestSyntaxOnly::validate()
{
    // TODO: implement validation
}

web::json::value ValidateUrlRequestSyntaxOnly::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_URLIsSet)
    {
        val[utility::conversions::to_string_t("URL")] = ModelBase::toJson(m_URL);
    }

    return val;
}

void ValidateUrlRequestSyntaxOnly::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("URL")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("URL")];
        if(!fieldValue.is_null())
        {
            setURL(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void ValidateUrlRequestSyntaxOnly::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_URLIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("URL"), m_URL));
        
    }
}

void ValidateUrlRequestSyntaxOnly::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("URL")))
    {
        setURL(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("URL"))));
    }
}

utility::string_t ValidateUrlRequestSyntaxOnly::getURL() const
{
    return m_URL;
}


void ValidateUrlRequestSyntaxOnly::setURL(utility::string_t value)
{
    m_URL = value;
    m_URLIsSet = true;
}
bool ValidateUrlRequestSyntaxOnly::uRLIsSet() const
{
    return m_URLIsSet;
}

void ValidateUrlRequestSyntaxOnly::unsetURL()
{
    m_URLIsSet = false;
}

}
}
}
}

