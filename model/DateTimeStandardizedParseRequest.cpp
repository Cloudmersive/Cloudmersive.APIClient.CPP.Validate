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



#include "DateTimeStandardizedParseRequest.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

DateTimeStandardizedParseRequest::DateTimeStandardizedParseRequest()
{
    m_RawDateTimeInput = utility::conversions::to_string_t("");
    m_RawDateTimeInputIsSet = false;
    m_CountryCode = utility::conversions::to_string_t("");
    m_CountryCodeIsSet = false;
}

DateTimeStandardizedParseRequest::~DateTimeStandardizedParseRequest()
{
}

void DateTimeStandardizedParseRequest::validate()
{
    // TODO: implement validation
}

web::json::value DateTimeStandardizedParseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_RawDateTimeInputIsSet)
    {
        val[utility::conversions::to_string_t("RawDateTimeInput")] = ModelBase::toJson(m_RawDateTimeInput);
    }
    if(m_CountryCodeIsSet)
    {
        val[utility::conversions::to_string_t("CountryCode")] = ModelBase::toJson(m_CountryCode);
    }

    return val;
}

void DateTimeStandardizedParseRequest::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("RawDateTimeInput")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("RawDateTimeInput")];
        if(!fieldValue.is_null())
        {
            setRawDateTimeInput(ModelBase::stringFromJson(fieldValue));
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

void DateTimeStandardizedParseRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_RawDateTimeInputIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("RawDateTimeInput"), m_RawDateTimeInput));
        
    }
    if(m_CountryCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CountryCode"), m_CountryCode));
        
    }
}

void DateTimeStandardizedParseRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("RawDateTimeInput")))
    {
        setRawDateTimeInput(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("RawDateTimeInput"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("CountryCode")))
    {
        setCountryCode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CountryCode"))));
    }
}

utility::string_t DateTimeStandardizedParseRequest::getRawDateTimeInput() const
{
    return m_RawDateTimeInput;
}


void DateTimeStandardizedParseRequest::setRawDateTimeInput(utility::string_t value)
{
    m_RawDateTimeInput = value;
    m_RawDateTimeInputIsSet = true;
}
bool DateTimeStandardizedParseRequest::rawDateTimeInputIsSet() const
{
    return m_RawDateTimeInputIsSet;
}

void DateTimeStandardizedParseRequest::unsetRawDateTimeInput()
{
    m_RawDateTimeInputIsSet = false;
}

utility::string_t DateTimeStandardizedParseRequest::getCountryCode() const
{
    return m_CountryCode;
}


void DateTimeStandardizedParseRequest::setCountryCode(utility::string_t value)
{
    m_CountryCode = value;
    m_CountryCodeIsSet = true;
}
bool DateTimeStandardizedParseRequest::countryCodeIsSet() const
{
    return m_CountryCodeIsSet;
}

void DateTimeStandardizedParseRequest::unsetCountryCode()
{
    m_CountryCodeIsSet = false;
}

}
}
}
}
