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



#include "UrlSsrfResponseFull.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

UrlSsrfResponseFull::UrlSsrfResponseFull()
{
    m_CleanURL = false;
    m_CleanURLIsSet = false;
    m_ThreatLevel = utility::conversions::to_string_t("");
    m_ThreatLevelIsSet = false;
}

UrlSsrfResponseFull::~UrlSsrfResponseFull()
{
}

void UrlSsrfResponseFull::validate()
{
    // TODO: implement validation
}

web::json::value UrlSsrfResponseFull::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CleanURLIsSet)
    {
        val[utility::conversions::to_string_t("CleanURL")] = ModelBase::toJson(m_CleanURL);
    }
    if(m_ThreatLevelIsSet)
    {
        val[utility::conversions::to_string_t("ThreatLevel")] = ModelBase::toJson(m_ThreatLevel);
    }

    return val;
}

void UrlSsrfResponseFull::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("CleanURL")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("CleanURL")];
        if(!fieldValue.is_null())
        {
            setCleanURL(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ThreatLevel")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ThreatLevel")];
        if(!fieldValue.is_null())
        {
            setThreatLevel(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void UrlSsrfResponseFull::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_CleanURLIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CleanURL"), m_CleanURL));
    }
    if(m_ThreatLevelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ThreatLevel"), m_ThreatLevel));
        
    }
}

void UrlSsrfResponseFull::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("CleanURL")))
    {
        setCleanURL(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CleanURL"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ThreatLevel")))
    {
        setThreatLevel(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ThreatLevel"))));
    }
}

bool UrlSsrfResponseFull::isCleanURL() const
{
    return m_CleanURL;
}


void UrlSsrfResponseFull::setCleanURL(bool value)
{
    m_CleanURL = value;
    m_CleanURLIsSet = true;
}
bool UrlSsrfResponseFull::cleanURLIsSet() const
{
    return m_CleanURLIsSet;
}

void UrlSsrfResponseFull::unsetCleanURL()
{
    m_CleanURLIsSet = false;
}

utility::string_t UrlSsrfResponseFull::getThreatLevel() const
{
    return m_ThreatLevel;
}


void UrlSsrfResponseFull::setThreatLevel(utility::string_t value)
{
    m_ThreatLevel = value;
    m_ThreatLevelIsSet = true;
}
bool UrlSsrfResponseFull::threatLevelIsSet() const
{
    return m_ThreatLevelIsSet;
}

void UrlSsrfResponseFull::unsetThreatLevel()
{
    m_ThreatLevelIsSet = false;
}

}
}
}
}

