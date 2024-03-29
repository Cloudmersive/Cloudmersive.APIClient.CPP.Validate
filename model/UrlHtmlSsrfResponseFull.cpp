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



#include "UrlHtmlSsrfResponseFull.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

UrlHtmlSsrfResponseFull::UrlHtmlSsrfResponseFull()
{
    m_CleanURL = false;
    m_CleanURLIsSet = false;
    m_HttpResponseCode = 0;
    m_HttpResponseCodeIsSet = false;
}

UrlHtmlSsrfResponseFull::~UrlHtmlSsrfResponseFull()
{
}

void UrlHtmlSsrfResponseFull::validate()
{
    // TODO: implement validation
}

web::json::value UrlHtmlSsrfResponseFull::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CleanURLIsSet)
    {
        val[utility::conversions::to_string_t("CleanURL")] = ModelBase::toJson(m_CleanURL);
    }
    if(m_HttpResponseCodeIsSet)
    {
        val[utility::conversions::to_string_t("HttpResponseCode")] = ModelBase::toJson(m_HttpResponseCode);
    }

    return val;
}

void UrlHtmlSsrfResponseFull::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("CleanURL")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("CleanURL")];
        if(!fieldValue.is_null())
        {
            setCleanURL(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("HttpResponseCode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("HttpResponseCode")];
        if(!fieldValue.is_null())
        {
            setHttpResponseCode(ModelBase::int32_tFromJson(fieldValue));
        }
    }
}

void UrlHtmlSsrfResponseFull::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_HttpResponseCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("HttpResponseCode"), m_HttpResponseCode));
    }
}

void UrlHtmlSsrfResponseFull::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("HttpResponseCode")))
    {
        setHttpResponseCode(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("HttpResponseCode"))));
    }
}

bool UrlHtmlSsrfResponseFull::isCleanURL() const
{
    return m_CleanURL;
}


void UrlHtmlSsrfResponseFull::setCleanURL(bool value)
{
    m_CleanURL = value;
    m_CleanURLIsSet = true;
}
bool UrlHtmlSsrfResponseFull::cleanURLIsSet() const
{
    return m_CleanURLIsSet;
}

void UrlHtmlSsrfResponseFull::unsetCleanURL()
{
    m_CleanURLIsSet = false;
}

int32_t UrlHtmlSsrfResponseFull::getHttpResponseCode() const
{
    return m_HttpResponseCode;
}


void UrlHtmlSsrfResponseFull::setHttpResponseCode(int32_t value)
{
    m_HttpResponseCode = value;
    m_HttpResponseCodeIsSet = true;
}
bool UrlHtmlSsrfResponseFull::httpResponseCodeIsSet() const
{
    return m_HttpResponseCodeIsSet;
}

void UrlHtmlSsrfResponseFull::unsetHttpResponseCode()
{
    m_HttpResponseCodeIsSet = false;
}

}
}
}
}

