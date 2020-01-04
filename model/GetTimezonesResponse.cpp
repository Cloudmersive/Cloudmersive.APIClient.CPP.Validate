/**
 * validateapi
 * The validation APIs help you validate data. Check if an E-mail address is real. Check if a domain is real. Check up on an IP address, and even where it is located. All this and much more is available in the validation API.
 *
 * OpenAPI spec version: v1
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.5.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "GetTimezonesResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

GetTimezonesResponse::GetTimezonesResponse()
{
    m_Successful = false;
    m_SuccessfulIsSet = false;
    m_CountryFullName = utility::conversions::to_string_t("");
    m_CountryFullNameIsSet = false;
    m_ISOTwoLetterCode = utility::conversions::to_string_t("");
    m_ISOTwoLetterCodeIsSet = false;
    m_FIPSTwoLetterCode = utility::conversions::to_string_t("");
    m_FIPSTwoLetterCodeIsSet = false;
    m_ThreeLetterCode = utility::conversions::to_string_t("");
    m_ThreeLetterCodeIsSet = false;
    m_TimezonesIsSet = false;
}

GetTimezonesResponse::~GetTimezonesResponse()
{
}

void GetTimezonesResponse::validate()
{
    // TODO: implement validation
}

web::json::value GetTimezonesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_SuccessfulIsSet)
    {
        val[utility::conversions::to_string_t("Successful")] = ModelBase::toJson(m_Successful);
    }
    if(m_CountryFullNameIsSet)
    {
        val[utility::conversions::to_string_t("CountryFullName")] = ModelBase::toJson(m_CountryFullName);
    }
    if(m_ISOTwoLetterCodeIsSet)
    {
        val[utility::conversions::to_string_t("ISOTwoLetterCode")] = ModelBase::toJson(m_ISOTwoLetterCode);
    }
    if(m_FIPSTwoLetterCodeIsSet)
    {
        val[utility::conversions::to_string_t("FIPSTwoLetterCode")] = ModelBase::toJson(m_FIPSTwoLetterCode);
    }
    if(m_ThreeLetterCodeIsSet)
    {
        val[utility::conversions::to_string_t("ThreeLetterCode")] = ModelBase::toJson(m_ThreeLetterCode);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Timezones )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("Timezones")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void GetTimezonesResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("Successful")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Successful")];
        if(!fieldValue.is_null())
        {
            setSuccessful(ModelBase::boolFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("ISOTwoLetterCode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ISOTwoLetterCode")];
        if(!fieldValue.is_null())
        {
            setISOTwoLetterCode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("FIPSTwoLetterCode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("FIPSTwoLetterCode")];
        if(!fieldValue.is_null())
        {
            setFIPSTwoLetterCode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ThreeLetterCode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ThreeLetterCode")];
        if(!fieldValue.is_null())
        {
            setThreeLetterCode(ModelBase::stringFromJson(fieldValue));
        }
    }
    {
        m_Timezones.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("Timezones")))
        {
        for( auto& item : val[utility::conversions::to_string_t("Timezones")].as_array() )
        {
            if(item.is_null())
            {
                m_Timezones.push_back( std::shared_ptr<Timezone>(nullptr) );
            }
            else
            {
                std::shared_ptr<Timezone> newItem(new Timezone());
                newItem->fromJson(item);
                m_Timezones.push_back( newItem );
            }
        }
        }
    }
}

void GetTimezonesResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_CountryFullNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CountryFullName"), m_CountryFullName));
        
    }
    if(m_ISOTwoLetterCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ISOTwoLetterCode"), m_ISOTwoLetterCode));
        
    }
    if(m_FIPSTwoLetterCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("FIPSTwoLetterCode"), m_FIPSTwoLetterCode));
        
    }
    if(m_ThreeLetterCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ThreeLetterCode"), m_ThreeLetterCode));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Timezones )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Timezones"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void GetTimezonesResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("CountryFullName")))
    {
        setCountryFullName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CountryFullName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ISOTwoLetterCode")))
    {
        setISOTwoLetterCode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ISOTwoLetterCode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("FIPSTwoLetterCode")))
    {
        setFIPSTwoLetterCode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("FIPSTwoLetterCode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ThreeLetterCode")))
    {
        setThreeLetterCode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ThreeLetterCode"))));
    }
    {
        m_Timezones.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("Timezones")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Timezones"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Timezones.push_back( std::shared_ptr<Timezone>(nullptr) );
            }
            else
            {
                std::shared_ptr<Timezone> newItem(new Timezone());
                newItem->fromJson(item);
                m_Timezones.push_back( newItem );
            }
        }
        }
    }
}

bool GetTimezonesResponse::isSuccessful() const
{
    return m_Successful;
}


void GetTimezonesResponse::setSuccessful(bool value)
{
    m_Successful = value;
    m_SuccessfulIsSet = true;
}
bool GetTimezonesResponse::successfulIsSet() const
{
    return m_SuccessfulIsSet;
}

void GetTimezonesResponse::unsetSuccessful()
{
    m_SuccessfulIsSet = false;
}

utility::string_t GetTimezonesResponse::getCountryFullName() const
{
    return m_CountryFullName;
}


void GetTimezonesResponse::setCountryFullName(utility::string_t value)
{
    m_CountryFullName = value;
    m_CountryFullNameIsSet = true;
}
bool GetTimezonesResponse::countryFullNameIsSet() const
{
    return m_CountryFullNameIsSet;
}

void GetTimezonesResponse::unsetCountryFullName()
{
    m_CountryFullNameIsSet = false;
}

utility::string_t GetTimezonesResponse::getISOTwoLetterCode() const
{
    return m_ISOTwoLetterCode;
}


void GetTimezonesResponse::setISOTwoLetterCode(utility::string_t value)
{
    m_ISOTwoLetterCode = value;
    m_ISOTwoLetterCodeIsSet = true;
}
bool GetTimezonesResponse::iSOTwoLetterCodeIsSet() const
{
    return m_ISOTwoLetterCodeIsSet;
}

void GetTimezonesResponse::unsetISOTwoLetterCode()
{
    m_ISOTwoLetterCodeIsSet = false;
}

utility::string_t GetTimezonesResponse::getFIPSTwoLetterCode() const
{
    return m_FIPSTwoLetterCode;
}


void GetTimezonesResponse::setFIPSTwoLetterCode(utility::string_t value)
{
    m_FIPSTwoLetterCode = value;
    m_FIPSTwoLetterCodeIsSet = true;
}
bool GetTimezonesResponse::fIPSTwoLetterCodeIsSet() const
{
    return m_FIPSTwoLetterCodeIsSet;
}

void GetTimezonesResponse::unsetFIPSTwoLetterCode()
{
    m_FIPSTwoLetterCodeIsSet = false;
}

utility::string_t GetTimezonesResponse::getThreeLetterCode() const
{
    return m_ThreeLetterCode;
}


void GetTimezonesResponse::setThreeLetterCode(utility::string_t value)
{
    m_ThreeLetterCode = value;
    m_ThreeLetterCodeIsSet = true;
}
bool GetTimezonesResponse::threeLetterCodeIsSet() const
{
    return m_ThreeLetterCodeIsSet;
}

void GetTimezonesResponse::unsetThreeLetterCode()
{
    m_ThreeLetterCodeIsSet = false;
}

std::vector<std::shared_ptr<Timezone>>& GetTimezonesResponse::getTimezones()
{
    return m_Timezones;
}

void GetTimezonesResponse::setTimezones(std::vector<std::shared_ptr<Timezone>> value)
{
    m_Timezones = value;
    m_TimezonesIsSet = true;
}
bool GetTimezonesResponse::timezonesIsSet() const
{
    return m_TimezonesIsSet;
}

void GetTimezonesResponse::unsetTimezones()
{
    m_TimezonesIsSet = false;
}

}
}
}
}
