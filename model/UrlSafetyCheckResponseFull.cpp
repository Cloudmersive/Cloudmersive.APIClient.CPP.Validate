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



#include "UrlSafetyCheckResponseFull.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

UrlSafetyCheckResponseFull::UrlSafetyCheckResponseFull()
{
    m_CleanURL = false;
    m_CleanURLIsSet = false;
    m_ThreatType = utility::conversions::to_string_t("");
    m_ThreatTypeIsSet = false;
}

UrlSafetyCheckResponseFull::~UrlSafetyCheckResponseFull()
{
}

void UrlSafetyCheckResponseFull::validate()
{
    // TODO: implement validation
}

web::json::value UrlSafetyCheckResponseFull::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CleanURLIsSet)
    {
        val[utility::conversions::to_string_t("CleanURL")] = ModelBase::toJson(m_CleanURL);
    }
    if(m_ThreatTypeIsSet)
    {
        val[utility::conversions::to_string_t("ThreatType")] = ModelBase::toJson(m_ThreatType);
    }

    return val;
}

void UrlSafetyCheckResponseFull::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("CleanURL")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("CleanURL")];
        if(!fieldValue.is_null())
        {
            setCleanURL(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ThreatType")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ThreatType")];
        if(!fieldValue.is_null())
        {
            setThreatType(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void UrlSafetyCheckResponseFull::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ThreatTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ThreatType"), m_ThreatType));
        
    }
}

void UrlSafetyCheckResponseFull::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("ThreatType")))
    {
        setThreatType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ThreatType"))));
    }
}

bool UrlSafetyCheckResponseFull::isCleanURL() const
{
    return m_CleanURL;
}


void UrlSafetyCheckResponseFull::setCleanURL(bool value)
{
    m_CleanURL = value;
    m_CleanURLIsSet = true;
}
bool UrlSafetyCheckResponseFull::cleanURLIsSet() const
{
    return m_CleanURLIsSet;
}

void UrlSafetyCheckResponseFull::unsetCleanURL()
{
    m_CleanURLIsSet = false;
}

utility::string_t UrlSafetyCheckResponseFull::getThreatType() const
{
    return m_ThreatType;
}


void UrlSafetyCheckResponseFull::setThreatType(utility::string_t value)
{
    m_ThreatType = value;
    m_ThreatTypeIsSet = true;
}
bool UrlSafetyCheckResponseFull::threatTypeIsSet() const
{
    return m_ThreatTypeIsSet;
}

void UrlSafetyCheckResponseFull::unsetThreatType()
{
    m_ThreatTypeIsSet = false;
}

}
}
}
}

