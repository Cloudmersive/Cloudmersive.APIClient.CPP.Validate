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



#include "ValidateCountryResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ValidateCountryResponse::ValidateCountryResponse()
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
    m_IsEuropeanUnionMember = false;
    m_IsEuropeanUnionMemberIsSet = false;
    m_TimezonesIsSet = false;
    m_ISOCurrencyCode = utility::conversions::to_string_t("");
    m_ISOCurrencyCodeIsSet = false;
    m_CurrencySymbol = utility::conversions::to_string_t("");
    m_CurrencySymbolIsSet = false;
    m_CurrencyEnglishName = utility::conversions::to_string_t("");
    m_CurrencyEnglishNameIsSet = false;
    m_Region = utility::conversions::to_string_t("");
    m_RegionIsSet = false;
    m_Subregion = utility::conversions::to_string_t("");
    m_SubregionIsSet = false;
}

ValidateCountryResponse::~ValidateCountryResponse()
{
}

void ValidateCountryResponse::validate()
{
    // TODO: implement validation
}

web::json::value ValidateCountryResponse::toJson() const
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
    if(m_IsEuropeanUnionMemberIsSet)
    {
        val[utility::conversions::to_string_t("IsEuropeanUnionMember")] = ModelBase::toJson(m_IsEuropeanUnionMember);
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
    if(m_ISOCurrencyCodeIsSet)
    {
        val[utility::conversions::to_string_t("ISOCurrencyCode")] = ModelBase::toJson(m_ISOCurrencyCode);
    }
    if(m_CurrencySymbolIsSet)
    {
        val[utility::conversions::to_string_t("CurrencySymbol")] = ModelBase::toJson(m_CurrencySymbol);
    }
    if(m_CurrencyEnglishNameIsSet)
    {
        val[utility::conversions::to_string_t("CurrencyEnglishName")] = ModelBase::toJson(m_CurrencyEnglishName);
    }
    if(m_RegionIsSet)
    {
        val[utility::conversions::to_string_t("Region")] = ModelBase::toJson(m_Region);
    }
    if(m_SubregionIsSet)
    {
        val[utility::conversions::to_string_t("Subregion")] = ModelBase::toJson(m_Subregion);
    }

    return val;
}

void ValidateCountryResponse::fromJson(web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("IsEuropeanUnionMember")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("IsEuropeanUnionMember")];
        if(!fieldValue.is_null())
        {
            setIsEuropeanUnionMember(ModelBase::boolFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("ISOCurrencyCode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ISOCurrencyCode")];
        if(!fieldValue.is_null())
        {
            setISOCurrencyCode(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("CurrencySymbol")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("CurrencySymbol")];
        if(!fieldValue.is_null())
        {
            setCurrencySymbol(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("CurrencyEnglishName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("CurrencyEnglishName")];
        if(!fieldValue.is_null())
        {
            setCurrencyEnglishName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Region")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Region")];
        if(!fieldValue.is_null())
        {
            setRegion(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Subregion")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Subregion")];
        if(!fieldValue.is_null())
        {
            setSubregion(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void ValidateCountryResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_IsEuropeanUnionMemberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("IsEuropeanUnionMember"), m_IsEuropeanUnionMember));
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
    if(m_ISOCurrencyCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ISOCurrencyCode"), m_ISOCurrencyCode));
        
    }
    if(m_CurrencySymbolIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CurrencySymbol"), m_CurrencySymbol));
        
    }
    if(m_CurrencyEnglishNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CurrencyEnglishName"), m_CurrencyEnglishName));
        
    }
    if(m_RegionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Region"), m_Region));
        
    }
    if(m_SubregionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Subregion"), m_Subregion));
        
    }
}

void ValidateCountryResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("IsEuropeanUnionMember")))
    {
        setIsEuropeanUnionMember(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("IsEuropeanUnionMember"))));
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
    if(multipart->hasContent(utility::conversions::to_string_t("ISOCurrencyCode")))
    {
        setISOCurrencyCode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ISOCurrencyCode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("CurrencySymbol")))
    {
        setCurrencySymbol(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CurrencySymbol"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("CurrencyEnglishName")))
    {
        setCurrencyEnglishName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CurrencyEnglishName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Region")))
    {
        setRegion(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Region"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Subregion")))
    {
        setSubregion(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Subregion"))));
    }
}

bool ValidateCountryResponse::isSuccessful() const
{
    return m_Successful;
}


void ValidateCountryResponse::setSuccessful(bool value)
{
    m_Successful = value;
    m_SuccessfulIsSet = true;
}
bool ValidateCountryResponse::successfulIsSet() const
{
    return m_SuccessfulIsSet;
}

void ValidateCountryResponse::unsetSuccessful()
{
    m_SuccessfulIsSet = false;
}

utility::string_t ValidateCountryResponse::getCountryFullName() const
{
    return m_CountryFullName;
}


void ValidateCountryResponse::setCountryFullName(utility::string_t value)
{
    m_CountryFullName = value;
    m_CountryFullNameIsSet = true;
}
bool ValidateCountryResponse::countryFullNameIsSet() const
{
    return m_CountryFullNameIsSet;
}

void ValidateCountryResponse::unsetCountryFullName()
{
    m_CountryFullNameIsSet = false;
}

utility::string_t ValidateCountryResponse::getISOTwoLetterCode() const
{
    return m_ISOTwoLetterCode;
}


void ValidateCountryResponse::setISOTwoLetterCode(utility::string_t value)
{
    m_ISOTwoLetterCode = value;
    m_ISOTwoLetterCodeIsSet = true;
}
bool ValidateCountryResponse::iSOTwoLetterCodeIsSet() const
{
    return m_ISOTwoLetterCodeIsSet;
}

void ValidateCountryResponse::unsetISOTwoLetterCode()
{
    m_ISOTwoLetterCodeIsSet = false;
}

utility::string_t ValidateCountryResponse::getFIPSTwoLetterCode() const
{
    return m_FIPSTwoLetterCode;
}


void ValidateCountryResponse::setFIPSTwoLetterCode(utility::string_t value)
{
    m_FIPSTwoLetterCode = value;
    m_FIPSTwoLetterCodeIsSet = true;
}
bool ValidateCountryResponse::fIPSTwoLetterCodeIsSet() const
{
    return m_FIPSTwoLetterCodeIsSet;
}

void ValidateCountryResponse::unsetFIPSTwoLetterCode()
{
    m_FIPSTwoLetterCodeIsSet = false;
}

utility::string_t ValidateCountryResponse::getThreeLetterCode() const
{
    return m_ThreeLetterCode;
}


void ValidateCountryResponse::setThreeLetterCode(utility::string_t value)
{
    m_ThreeLetterCode = value;
    m_ThreeLetterCodeIsSet = true;
}
bool ValidateCountryResponse::threeLetterCodeIsSet() const
{
    return m_ThreeLetterCodeIsSet;
}

void ValidateCountryResponse::unsetThreeLetterCode()
{
    m_ThreeLetterCodeIsSet = false;
}

bool ValidateCountryResponse::isIsEuropeanUnionMember() const
{
    return m_IsEuropeanUnionMember;
}


void ValidateCountryResponse::setIsEuropeanUnionMember(bool value)
{
    m_IsEuropeanUnionMember = value;
    m_IsEuropeanUnionMemberIsSet = true;
}
bool ValidateCountryResponse::isEuropeanUnionMemberIsSet() const
{
    return m_IsEuropeanUnionMemberIsSet;
}

void ValidateCountryResponse::unsetIsEuropeanUnionMember()
{
    m_IsEuropeanUnionMemberIsSet = false;
}

std::vector<std::shared_ptr<Timezone>>& ValidateCountryResponse::getTimezones()
{
    return m_Timezones;
}

void ValidateCountryResponse::setTimezones(std::vector<std::shared_ptr<Timezone>> value)
{
    m_Timezones = value;
    m_TimezonesIsSet = true;
}
bool ValidateCountryResponse::timezonesIsSet() const
{
    return m_TimezonesIsSet;
}

void ValidateCountryResponse::unsetTimezones()
{
    m_TimezonesIsSet = false;
}

utility::string_t ValidateCountryResponse::getISOCurrencyCode() const
{
    return m_ISOCurrencyCode;
}


void ValidateCountryResponse::setISOCurrencyCode(utility::string_t value)
{
    m_ISOCurrencyCode = value;
    m_ISOCurrencyCodeIsSet = true;
}
bool ValidateCountryResponse::iSOCurrencyCodeIsSet() const
{
    return m_ISOCurrencyCodeIsSet;
}

void ValidateCountryResponse::unsetISOCurrencyCode()
{
    m_ISOCurrencyCodeIsSet = false;
}

utility::string_t ValidateCountryResponse::getCurrencySymbol() const
{
    return m_CurrencySymbol;
}


void ValidateCountryResponse::setCurrencySymbol(utility::string_t value)
{
    m_CurrencySymbol = value;
    m_CurrencySymbolIsSet = true;
}
bool ValidateCountryResponse::currencySymbolIsSet() const
{
    return m_CurrencySymbolIsSet;
}

void ValidateCountryResponse::unsetCurrencySymbol()
{
    m_CurrencySymbolIsSet = false;
}

utility::string_t ValidateCountryResponse::getCurrencyEnglishName() const
{
    return m_CurrencyEnglishName;
}


void ValidateCountryResponse::setCurrencyEnglishName(utility::string_t value)
{
    m_CurrencyEnglishName = value;
    m_CurrencyEnglishNameIsSet = true;
}
bool ValidateCountryResponse::currencyEnglishNameIsSet() const
{
    return m_CurrencyEnglishNameIsSet;
}

void ValidateCountryResponse::unsetCurrencyEnglishName()
{
    m_CurrencyEnglishNameIsSet = false;
}

utility::string_t ValidateCountryResponse::getRegion() const
{
    return m_Region;
}


void ValidateCountryResponse::setRegion(utility::string_t value)
{
    m_Region = value;
    m_RegionIsSet = true;
}
bool ValidateCountryResponse::regionIsSet() const
{
    return m_RegionIsSet;
}

void ValidateCountryResponse::unsetRegion()
{
    m_RegionIsSet = false;
}

utility::string_t ValidateCountryResponse::getSubregion() const
{
    return m_Subregion;
}


void ValidateCountryResponse::setSubregion(utility::string_t value)
{
    m_Subregion = value;
    m_SubregionIsSet = true;
}
bool ValidateCountryResponse::subregionIsSet() const
{
    return m_SubregionIsSet;
}

void ValidateCountryResponse::unsetSubregion()
{
    m_SubregionIsSet = false;
}

}
}
}
}

