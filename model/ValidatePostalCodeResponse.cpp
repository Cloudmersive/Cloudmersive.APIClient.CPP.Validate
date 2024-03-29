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



#include "ValidatePostalCodeResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ValidatePostalCodeResponse::ValidatePostalCodeResponse()
{
    m_ValidPostalCode = false;
    m_ValidPostalCodeIsSet = false;
    m_City = utility::conversions::to_string_t("");
    m_CityIsSet = false;
    m_StateOrProvince = utility::conversions::to_string_t("");
    m_StateOrProvinceIsSet = false;
    m_Latitude = 0.0;
    m_LatitudeIsSet = false;
    m_Longitude = 0.0;
    m_LongitudeIsSet = false;
}

ValidatePostalCodeResponse::~ValidatePostalCodeResponse()
{
}

void ValidatePostalCodeResponse::validate()
{
    // TODO: implement validation
}

web::json::value ValidatePostalCodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ValidPostalCodeIsSet)
    {
        val[utility::conversions::to_string_t("ValidPostalCode")] = ModelBase::toJson(m_ValidPostalCode);
    }
    if(m_CityIsSet)
    {
        val[utility::conversions::to_string_t("City")] = ModelBase::toJson(m_City);
    }
    if(m_StateOrProvinceIsSet)
    {
        val[utility::conversions::to_string_t("StateOrProvince")] = ModelBase::toJson(m_StateOrProvince);
    }
    if(m_LatitudeIsSet)
    {
        val[utility::conversions::to_string_t("Latitude")] = ModelBase::toJson(m_Latitude);
    }
    if(m_LongitudeIsSet)
    {
        val[utility::conversions::to_string_t("Longitude")] = ModelBase::toJson(m_Longitude);
    }

    return val;
}

void ValidatePostalCodeResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("ValidPostalCode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ValidPostalCode")];
        if(!fieldValue.is_null())
        {
            setValidPostalCode(ModelBase::boolFromJson(fieldValue));
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("Latitude")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Latitude")];
        if(!fieldValue.is_null())
        {
            setLatitude(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Longitude")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Longitude")];
        if(!fieldValue.is_null())
        {
            setLongitude(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void ValidatePostalCodeResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_ValidPostalCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ValidPostalCode"), m_ValidPostalCode));
    }
    if(m_CityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("City"), m_City));
        
    }
    if(m_StateOrProvinceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("StateOrProvince"), m_StateOrProvince));
        
    }
    if(m_LatitudeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Latitude"), m_Latitude));
    }
    if(m_LongitudeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Longitude"), m_Longitude));
    }
}

void ValidatePostalCodeResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("ValidPostalCode")))
    {
        setValidPostalCode(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ValidPostalCode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("City")))
    {
        setCity(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("City"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("StateOrProvince")))
    {
        setStateOrProvince(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("StateOrProvince"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Latitude")))
    {
        setLatitude(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Latitude"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Longitude")))
    {
        setLongitude(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Longitude"))));
    }
}

bool ValidatePostalCodeResponse::isValidPostalCode() const
{
    return m_ValidPostalCode;
}


void ValidatePostalCodeResponse::setValidPostalCode(bool value)
{
    m_ValidPostalCode = value;
    m_ValidPostalCodeIsSet = true;
}
bool ValidatePostalCodeResponse::validPostalCodeIsSet() const
{
    return m_ValidPostalCodeIsSet;
}

void ValidatePostalCodeResponse::unsetValidPostalCode()
{
    m_ValidPostalCodeIsSet = false;
}

utility::string_t ValidatePostalCodeResponse::getCity() const
{
    return m_City;
}


void ValidatePostalCodeResponse::setCity(utility::string_t value)
{
    m_City = value;
    m_CityIsSet = true;
}
bool ValidatePostalCodeResponse::cityIsSet() const
{
    return m_CityIsSet;
}

void ValidatePostalCodeResponse::unsetCity()
{
    m_CityIsSet = false;
}

utility::string_t ValidatePostalCodeResponse::getStateOrProvince() const
{
    return m_StateOrProvince;
}


void ValidatePostalCodeResponse::setStateOrProvince(utility::string_t value)
{
    m_StateOrProvince = value;
    m_StateOrProvinceIsSet = true;
}
bool ValidatePostalCodeResponse::stateOrProvinceIsSet() const
{
    return m_StateOrProvinceIsSet;
}

void ValidatePostalCodeResponse::unsetStateOrProvince()
{
    m_StateOrProvinceIsSet = false;
}

double ValidatePostalCodeResponse::getLatitude() const
{
    return m_Latitude;
}


void ValidatePostalCodeResponse::setLatitude(double value)
{
    m_Latitude = value;
    m_LatitudeIsSet = true;
}
bool ValidatePostalCodeResponse::latitudeIsSet() const
{
    return m_LatitudeIsSet;
}

void ValidatePostalCodeResponse::unsetLatitude()
{
    m_LatitudeIsSet = false;
}

double ValidatePostalCodeResponse::getLongitude() const
{
    return m_Longitude;
}


void ValidatePostalCodeResponse::setLongitude(double value)
{
    m_Longitude = value;
    m_LongitudeIsSet = true;
}
bool ValidatePostalCodeResponse::longitudeIsSet() const
{
    return m_LongitudeIsSet;
}

void ValidatePostalCodeResponse::unsetLongitude()
{
    m_LongitudeIsSet = false;
}

}
}
}
}

