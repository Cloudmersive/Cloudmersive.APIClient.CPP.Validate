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



#include "ValidateUrlResponseSyntaxOnly.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ValidateUrlResponseSyntaxOnly::ValidateUrlResponseSyntaxOnly()
{
    m_ValidURL = false;
    m_ValidURLIsSet = false;
    m_WellFormedURL = utility::conversions::to_string_t("");
    m_WellFormedURLIsSet = false;
    m_TopLevelDomainName = utility::conversions::to_string_t("");
    m_TopLevelDomainNameIsSet = false;
}

ValidateUrlResponseSyntaxOnly::~ValidateUrlResponseSyntaxOnly()
{
}

void ValidateUrlResponseSyntaxOnly::validate()
{
    // TODO: implement validation
}

web::json::value ValidateUrlResponseSyntaxOnly::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ValidURLIsSet)
    {
        val[utility::conversions::to_string_t("ValidURL")] = ModelBase::toJson(m_ValidURL);
    }
    if(m_WellFormedURLIsSet)
    {
        val[utility::conversions::to_string_t("WellFormedURL")] = ModelBase::toJson(m_WellFormedURL);
    }
    if(m_TopLevelDomainNameIsSet)
    {
        val[utility::conversions::to_string_t("TopLevelDomainName")] = ModelBase::toJson(m_TopLevelDomainName);
    }

    return val;
}

void ValidateUrlResponseSyntaxOnly::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("ValidURL")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ValidURL")];
        if(!fieldValue.is_null())
        {
            setValidURL(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("WellFormedURL")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("WellFormedURL")];
        if(!fieldValue.is_null())
        {
            setWellFormedURL(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("TopLevelDomainName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TopLevelDomainName")];
        if(!fieldValue.is_null())
        {
            setTopLevelDomainName(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void ValidateUrlResponseSyntaxOnly::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_ValidURLIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ValidURL"), m_ValidURL));
    }
    if(m_WellFormedURLIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("WellFormedURL"), m_WellFormedURL));
        
    }
    if(m_TopLevelDomainNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TopLevelDomainName"), m_TopLevelDomainName));
        
    }
}

void ValidateUrlResponseSyntaxOnly::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("ValidURL")))
    {
        setValidURL(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ValidURL"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("WellFormedURL")))
    {
        setWellFormedURL(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("WellFormedURL"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("TopLevelDomainName")))
    {
        setTopLevelDomainName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TopLevelDomainName"))));
    }
}

bool ValidateUrlResponseSyntaxOnly::isValidURL() const
{
    return m_ValidURL;
}


void ValidateUrlResponseSyntaxOnly::setValidURL(bool value)
{
    m_ValidURL = value;
    m_ValidURLIsSet = true;
}
bool ValidateUrlResponseSyntaxOnly::validURLIsSet() const
{
    return m_ValidURLIsSet;
}

void ValidateUrlResponseSyntaxOnly::unsetValidURL()
{
    m_ValidURLIsSet = false;
}

utility::string_t ValidateUrlResponseSyntaxOnly::getWellFormedURL() const
{
    return m_WellFormedURL;
}


void ValidateUrlResponseSyntaxOnly::setWellFormedURL(utility::string_t value)
{
    m_WellFormedURL = value;
    m_WellFormedURLIsSet = true;
}
bool ValidateUrlResponseSyntaxOnly::wellFormedURLIsSet() const
{
    return m_WellFormedURLIsSet;
}

void ValidateUrlResponseSyntaxOnly::unsetWellFormedURL()
{
    m_WellFormedURLIsSet = false;
}

utility::string_t ValidateUrlResponseSyntaxOnly::getTopLevelDomainName() const
{
    return m_TopLevelDomainName;
}


void ValidateUrlResponseSyntaxOnly::setTopLevelDomainName(utility::string_t value)
{
    m_TopLevelDomainName = value;
    m_TopLevelDomainNameIsSet = true;
}
bool ValidateUrlResponseSyntaxOnly::topLevelDomainNameIsSet() const
{
    return m_TopLevelDomainNameIsSet;
}

void ValidateUrlResponseSyntaxOnly::unsetTopLevelDomainName()
{
    m_TopLevelDomainNameIsSet = false;
}

}
}
}
}

