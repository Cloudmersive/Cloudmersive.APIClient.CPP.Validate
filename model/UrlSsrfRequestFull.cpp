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



#include "UrlSsrfRequestFull.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

UrlSsrfRequestFull::UrlSsrfRequestFull()
{
    m_URL = utility::conversions::to_string_t("");
    m_URLIsSet = false;
    m_BlockedDomainsIsSet = false;
}

UrlSsrfRequestFull::~UrlSsrfRequestFull()
{
}

void UrlSsrfRequestFull::validate()
{
    // TODO: implement validation
}

web::json::value UrlSsrfRequestFull::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_URLIsSet)
    {
        val[utility::conversions::to_string_t("URL")] = ModelBase::toJson(m_URL);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_BlockedDomains )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("BlockedDomains")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void UrlSsrfRequestFull::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("URL")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("URL")];
        if(!fieldValue.is_null())
        {
            setURL(ModelBase::stringFromJson(fieldValue));
        }
    }
    {
        m_BlockedDomains.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("BlockedDomains")))
        {
        for( auto& item : val[utility::conversions::to_string_t("BlockedDomains")].as_array() )
        {
            m_BlockedDomains.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

void UrlSsrfRequestFull::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_BlockedDomains )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("BlockedDomains"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void UrlSsrfRequestFull::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    {
        m_BlockedDomains.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("BlockedDomains")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("BlockedDomains"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_BlockedDomains.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

utility::string_t UrlSsrfRequestFull::getURL() const
{
    return m_URL;
}


void UrlSsrfRequestFull::setURL(utility::string_t value)
{
    m_URL = value;
    m_URLIsSet = true;
}
bool UrlSsrfRequestFull::uRLIsSet() const
{
    return m_URLIsSet;
}

void UrlSsrfRequestFull::unsetURL()
{
    m_URLIsSet = false;
}

std::vector<utility::string_t>& UrlSsrfRequestFull::getBlockedDomains()
{
    return m_BlockedDomains;
}

void UrlSsrfRequestFull::setBlockedDomains(std::vector<utility::string_t> value)
{
    m_BlockedDomains = value;
    m_BlockedDomainsIsSet = true;
}
bool UrlSsrfRequestFull::blockedDomainsIsSet() const
{
    return m_BlockedDomainsIsSet;
}

void UrlSsrfRequestFull::unsetBlockedDomains()
{
    m_BlockedDomainsIsSet = false;
}

}
}
}
}
