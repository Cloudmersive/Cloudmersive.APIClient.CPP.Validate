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



#include "ValidateCityRequest.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ValidateCityRequest::ValidateCityRequest()
{
    m_City = utility::conversions::to_string_t("");
    m_CityIsSet = false;
    m_StateOrProvince = utility::conversions::to_string_t("");
    m_StateOrProvinceIsSet = false;
    m_CountryFullName = utility::conversions::to_string_t("");
    m_CountryFullNameIsSet = false;
    m_CountryCode = utility::conversions::to_string_t("");
    m_CountryCodeIsSet = false;
}

ValidateCityRequest::~ValidateCityRequest()
{
}

void ValidateCityRequest::validate()
{
    // TODO: implement validation
}

web::json::value ValidateCityRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CityIsSet)
    {
        val[utility::conversions::to_string_t("City")] = ModelBase::toJson(m_City);
    }
    if(m_StateOrProvinceIsSet)
    {
        val[utility::conversions::to_string_t("StateOrProvince")] = ModelBase::toJson(m_StateOrProvince);
    }
    if(m_CountryFullNameIsSet)
    {
        val[utility::conversions::to_string_t("CountryFullName")] = ModelBase::toJson(m_CountryFullName);
    }
    if(m_CountryCodeIsSet)
    {
        val[utility::conversions::to_string_t("CountryCode")] = ModelBase::toJson(m_CountryCode);
    }

    return val;
}

void ValidateCityRequest::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("City")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("City")];
        if(!fieldValue.is_null())
        {
            setCity(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("StateOrProvince")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("StateOrProvince")];
        if(!fieldValue.is_null())
        {
            setStateOrProvince(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("CountryFullName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("CountryFullName")];
        if(!fieldValue.is_null())
        {
            setCountryFullName(ModelBase::stringFromJson(fieldValue));
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

void ValidateCityRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_CityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("City"), m_City));
        
    }
    if(m_StateOrProvinceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("StateOrProvince"), m_StateOrProvince));
        
    }
    if(m_CountryFullNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CountryFullName"), m_CountryFullName));
        
    }
    if(m_CountryCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CountryCode"), m_CountryCode));
        
    }
}

void ValidateCityRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("City")))
    {
        setCity(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("City"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("StateOrProvince")))
    {
        setStateOrProvince(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("StateOrProvince"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("CountryFullName")))
    {
        setCountryFullName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CountryFullName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("CountryCode")))
    {
        setCountryCode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CountryCode"))));
    }
}

utility::string_t ValidateCityRequest::getCity() const
{
    return m_City;
}


void ValidateCityRequest::setCity(utility::string_t value)
{
    m_City = value;
    m_CityIsSet = true;
}
bool ValidateCityRequest::cityIsSet() const
{
    return m_CityIsSet;
}

void ValidateCityRequest::unsetCity()
{
    m_CityIsSet = false;
}

utility::string_t ValidateCityRequest::getStateOrProvince() const
{
    return m_StateOrProvince;
}


void ValidateCityRequest::setStateOrProvince(utility::string_t value)
{
    m_StateOrProvince = value;
    m_StateOrProvinceIsSet = true;
}
bool ValidateCityRequest::stateOrProvinceIsSet() const
{
    return m_StateOrProvinceIsSet;
}

void ValidateCityRequest::unsetStateOrProvince()
{
    m_StateOrProvinceIsSet = false;
}

utility::string_t ValidateCityRequest::getCountryFullName() const
{
    return m_CountryFullName;
}


void ValidateCityRequest::setCountryFullName(utility::string_t value)
{
    m_CountryFullName = value;
    m_CountryFullNameIsSet = true;
}
bool ValidateCityRequest::countryFullNameIsSet() const
{
    return m_CountryFullNameIsSet;
}

void ValidateCityRequest::unsetCountryFullName()
{
    m_CountryFullNameIsSet = false;
}

utility::string_t ValidateCityRequest::getCountryCode() const
{
    return m_CountryCode;
}


void ValidateCityRequest::setCountryCode(utility::string_t value)
{
    m_CountryCode = value;
    m_CountryCodeIsSet = true;
}
bool ValidateCityRequest::countryCodeIsSet() const
{
    return m_CountryCodeIsSet;
}

void ValidateCityRequest::unsetCountryCode()
{
    m_CountryCodeIsSet = false;
}

}
}
}
}

