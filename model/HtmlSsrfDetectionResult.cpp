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



#include "HtmlSsrfDetectionResult.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

HtmlSsrfDetectionResult::HtmlSsrfDetectionResult()
{
    m_Successful = false;
    m_SuccessfulIsSet = false;
    m_ContainedThreats = false;
    m_ContainedThreatsIsSet = false;
}

HtmlSsrfDetectionResult::~HtmlSsrfDetectionResult()
{
}

void HtmlSsrfDetectionResult::validate()
{
    // TODO: implement validation
}

web::json::value HtmlSsrfDetectionResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_SuccessfulIsSet)
    {
        val[utility::conversions::to_string_t("Successful")] = ModelBase::toJson(m_Successful);
    }
    if(m_ContainedThreatsIsSet)
    {
        val[utility::conversions::to_string_t("ContainedThreats")] = ModelBase::toJson(m_ContainedThreats);
    }

    return val;
}

void HtmlSsrfDetectionResult::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("Successful")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Successful")];
        if(!fieldValue.is_null())
        {
            setSuccessful(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ContainedThreats")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ContainedThreats")];
        if(!fieldValue.is_null())
        {
            setContainedThreats(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void HtmlSsrfDetectionResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_SuccessfulIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Successful"), m_Successful));
    }
    if(m_ContainedThreatsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ContainedThreats"), m_ContainedThreats));
    }
}

void HtmlSsrfDetectionResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("Successful")))
    {
        setSuccessful(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Successful"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ContainedThreats")))
    {
        setContainedThreats(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ContainedThreats"))));
    }
}

bool HtmlSsrfDetectionResult::isSuccessful() const
{
    return m_Successful;
}


void HtmlSsrfDetectionResult::setSuccessful(bool value)
{
    m_Successful = value;
    m_SuccessfulIsSet = true;
}
bool HtmlSsrfDetectionResult::successfulIsSet() const
{
    return m_SuccessfulIsSet;
}

void HtmlSsrfDetectionResult::unsetSuccessful()
{
    m_SuccessfulIsSet = false;
}

bool HtmlSsrfDetectionResult::isContainedThreats() const
{
    return m_ContainedThreats;
}


void HtmlSsrfDetectionResult::setContainedThreats(bool value)
{
    m_ContainedThreats = value;
    m_ContainedThreatsIsSet = true;
}
bool HtmlSsrfDetectionResult::containedThreatsIsSet() const
{
    return m_ContainedThreatsIsSet;
}

void HtmlSsrfDetectionResult::unsetContainedThreats()
{
    m_ContainedThreatsIsSet = false;
}

}
}
}
}

