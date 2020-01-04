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



#include "ValidateUrlResponseFull.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ValidateUrlResponseFull::ValidateUrlResponseFull()
{
    m_ValidURL = false;
    m_ValidURLIsSet = false;
    m_Valid_Syntax = false;
    m_Valid_SyntaxIsSet = false;
    m_Valid_Domain = false;
    m_Valid_DomainIsSet = false;
    m_Valid_Endpoint = false;
    m_Valid_EndpointIsSet = false;
    m_WellFormedURL = utility::conversions::to_string_t("");
    m_WellFormedURLIsSet = false;
}

ValidateUrlResponseFull::~ValidateUrlResponseFull()
{
}

void ValidateUrlResponseFull::validate()
{
    // TODO: implement validation
}

web::json::value ValidateUrlResponseFull::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ValidURLIsSet)
    {
        val[utility::conversions::to_string_t("ValidURL")] = ModelBase::toJson(m_ValidURL);
    }
    if(m_Valid_SyntaxIsSet)
    {
        val[utility::conversions::to_string_t("Valid_Syntax")] = ModelBase::toJson(m_Valid_Syntax);
    }
    if(m_Valid_DomainIsSet)
    {
        val[utility::conversions::to_string_t("Valid_Domain")] = ModelBase::toJson(m_Valid_Domain);
    }
    if(m_Valid_EndpointIsSet)
    {
        val[utility::conversions::to_string_t("Valid_Endpoint")] = ModelBase::toJson(m_Valid_Endpoint);
    }
    if(m_WellFormedURLIsSet)
    {
        val[utility::conversions::to_string_t("WellFormedURL")] = ModelBase::toJson(m_WellFormedURL);
    }

    return val;
}

void ValidateUrlResponseFull::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("ValidURL")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ValidURL")];
        if(!fieldValue.is_null())
        {
            setValidURL(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Valid_Syntax")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Valid_Syntax")];
        if(!fieldValue.is_null())
        {
            setValidSyntax(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Valid_Domain")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Valid_Domain")];
        if(!fieldValue.is_null())
        {
            setValidDomain(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Valid_Endpoint")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Valid_Endpoint")];
        if(!fieldValue.is_null())
        {
            setValidEndpoint(ModelBase::boolFromJson(fieldValue));
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
}

void ValidateUrlResponseFull::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Valid_SyntaxIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Valid_Syntax"), m_Valid_Syntax));
    }
    if(m_Valid_DomainIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Valid_Domain"), m_Valid_Domain));
    }
    if(m_Valid_EndpointIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Valid_Endpoint"), m_Valid_Endpoint));
    }
    if(m_WellFormedURLIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("WellFormedURL"), m_WellFormedURL));
        
    }
}

void ValidateUrlResponseFull::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("Valid_Syntax")))
    {
        setValidSyntax(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Valid_Syntax"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Valid_Domain")))
    {
        setValidDomain(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Valid_Domain"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Valid_Endpoint")))
    {
        setValidEndpoint(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Valid_Endpoint"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("WellFormedURL")))
    {
        setWellFormedURL(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("WellFormedURL"))));
    }
}

bool ValidateUrlResponseFull::isValidURL() const
{
    return m_ValidURL;
}


void ValidateUrlResponseFull::setValidURL(bool value)
{
    m_ValidURL = value;
    m_ValidURLIsSet = true;
}
bool ValidateUrlResponseFull::validURLIsSet() const
{
    return m_ValidURLIsSet;
}

void ValidateUrlResponseFull::unsetValidURL()
{
    m_ValidURLIsSet = false;
}

bool ValidateUrlResponseFull::isValidSyntax() const
{
    return m_Valid_Syntax;
}


void ValidateUrlResponseFull::setValidSyntax(bool value)
{
    m_Valid_Syntax = value;
    m_Valid_SyntaxIsSet = true;
}
bool ValidateUrlResponseFull::validSyntaxIsSet() const
{
    return m_Valid_SyntaxIsSet;
}

void ValidateUrlResponseFull::unsetValid_Syntax()
{
    m_Valid_SyntaxIsSet = false;
}

bool ValidateUrlResponseFull::isValidDomain() const
{
    return m_Valid_Domain;
}


void ValidateUrlResponseFull::setValidDomain(bool value)
{
    m_Valid_Domain = value;
    m_Valid_DomainIsSet = true;
}
bool ValidateUrlResponseFull::validDomainIsSet() const
{
    return m_Valid_DomainIsSet;
}

void ValidateUrlResponseFull::unsetValid_Domain()
{
    m_Valid_DomainIsSet = false;
}

bool ValidateUrlResponseFull::isValidEndpoint() const
{
    return m_Valid_Endpoint;
}


void ValidateUrlResponseFull::setValidEndpoint(bool value)
{
    m_Valid_Endpoint = value;
    m_Valid_EndpointIsSet = true;
}
bool ValidateUrlResponseFull::validEndpointIsSet() const
{
    return m_Valid_EndpointIsSet;
}

void ValidateUrlResponseFull::unsetValid_Endpoint()
{
    m_Valid_EndpointIsSet = false;
}

utility::string_t ValidateUrlResponseFull::getWellFormedURL() const
{
    return m_WellFormedURL;
}


void ValidateUrlResponseFull::setWellFormedURL(utility::string_t value)
{
    m_WellFormedURL = value;
    m_WellFormedURLIsSet = true;
}
bool ValidateUrlResponseFull::wellFormedURLIsSet() const
{
    return m_WellFormedURLIsSet;
}

void ValidateUrlResponseFull::unsetWellFormedURL()
{
    m_WellFormedURLIsSet = false;
}

}
}
}
}

