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



#include "CountryDetails.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

CountryDetails::CountryDetails()
{
    m_CountryName = utility::conversions::to_string_t("");
    m_CountryNameIsSet = false;
    m_ThreeLetterCode = utility::conversions::to_string_t("");
    m_ThreeLetterCodeIsSet = false;
    m_ISOTwoLetterCode = utility::conversions::to_string_t("");
    m_ISOTwoLetterCodeIsSet = false;
    m_IsEuropeanUnionMember = false;
    m_IsEuropeanUnionMemberIsSet = false;
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

CountryDetails::~CountryDetails()
{
}

void CountryDetails::validate()
{
    // TODO: implement validation
}

web::json::value CountryDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CountryNameIsSet)
    {
        val[utility::conversions::to_string_t("CountryName")] = ModelBase::toJson(m_CountryName);
    }
    if(m_ThreeLetterCodeIsSet)
    {
        val[utility::conversions::to_string_t("ThreeLetterCode")] = ModelBase::toJson(m_ThreeLetterCode);
    }
    if(m_ISOTwoLetterCodeIsSet)
    {
        val[utility::conversions::to_string_t("ISOTwoLetterCode")] = ModelBase::toJson(m_ISOTwoLetterCode);
    }
    if(m_IsEuropeanUnionMemberIsSet)
    {
        val[utility::conversions::to_string_t("IsEuropeanUnionMember")] = ModelBase::toJson(m_IsEuropeanUnionMember);
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

void CountryDetails::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("CountryName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("CountryName")];
        if(!fieldValue.is_null())
        {
            setCountryName(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("ISOTwoLetterCode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ISOTwoLetterCode")];
        if(!fieldValue.is_null())
        {
            setISOTwoLetterCode(ModelBase::stringFromJson(fieldValue));
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

void CountryDetails::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_CountryNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("CountryName"), m_CountryName));
        
    }
    if(m_ThreeLetterCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ThreeLetterCode"), m_ThreeLetterCode));
        
    }
    if(m_ISOTwoLetterCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ISOTwoLetterCode"), m_ISOTwoLetterCode));
        
    }
    if(m_IsEuropeanUnionMemberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("IsEuropeanUnionMember"), m_IsEuropeanUnionMember));
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

void CountryDetails::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("CountryName")))
    {
        setCountryName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("CountryName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ThreeLetterCode")))
    {
        setThreeLetterCode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ThreeLetterCode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ISOTwoLetterCode")))
    {
        setISOTwoLetterCode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ISOTwoLetterCode"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("IsEuropeanUnionMember")))
    {
        setIsEuropeanUnionMember(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("IsEuropeanUnionMember"))));
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

utility::string_t CountryDetails::getCountryName() const
{
    return m_CountryName;
}


void CountryDetails::setCountryName(utility::string_t value)
{
    m_CountryName = value;
    m_CountryNameIsSet = true;
}
bool CountryDetails::countryNameIsSet() const
{
    return m_CountryNameIsSet;
}

void CountryDetails::unsetCountryName()
{
    m_CountryNameIsSet = false;
}

utility::string_t CountryDetails::getThreeLetterCode() const
{
    return m_ThreeLetterCode;
}


void CountryDetails::setThreeLetterCode(utility::string_t value)
{
    m_ThreeLetterCode = value;
    m_ThreeLetterCodeIsSet = true;
}
bool CountryDetails::threeLetterCodeIsSet() const
{
    return m_ThreeLetterCodeIsSet;
}

void CountryDetails::unsetThreeLetterCode()
{
    m_ThreeLetterCodeIsSet = false;
}

utility::string_t CountryDetails::getISOTwoLetterCode() const
{
    return m_ISOTwoLetterCode;
}


void CountryDetails::setISOTwoLetterCode(utility::string_t value)
{
    m_ISOTwoLetterCode = value;
    m_ISOTwoLetterCodeIsSet = true;
}
bool CountryDetails::iSOTwoLetterCodeIsSet() const
{
    return m_ISOTwoLetterCodeIsSet;
}

void CountryDetails::unsetISOTwoLetterCode()
{
    m_ISOTwoLetterCodeIsSet = false;
}

bool CountryDetails::isIsEuropeanUnionMember() const
{
    return m_IsEuropeanUnionMember;
}


void CountryDetails::setIsEuropeanUnionMember(bool value)
{
    m_IsEuropeanUnionMember = value;
    m_IsEuropeanUnionMemberIsSet = true;
}
bool CountryDetails::isEuropeanUnionMemberIsSet() const
{
    return m_IsEuropeanUnionMemberIsSet;
}

void CountryDetails::unsetIsEuropeanUnionMember()
{
    m_IsEuropeanUnionMemberIsSet = false;
}

utility::string_t CountryDetails::getISOCurrencyCode() const
{
    return m_ISOCurrencyCode;
}


void CountryDetails::setISOCurrencyCode(utility::string_t value)
{
    m_ISOCurrencyCode = value;
    m_ISOCurrencyCodeIsSet = true;
}
bool CountryDetails::iSOCurrencyCodeIsSet() const
{
    return m_ISOCurrencyCodeIsSet;
}

void CountryDetails::unsetISOCurrencyCode()
{
    m_ISOCurrencyCodeIsSet = false;
}

utility::string_t CountryDetails::getCurrencySymbol() const
{
    return m_CurrencySymbol;
}


void CountryDetails::setCurrencySymbol(utility::string_t value)
{
    m_CurrencySymbol = value;
    m_CurrencySymbolIsSet = true;
}
bool CountryDetails::currencySymbolIsSet() const
{
    return m_CurrencySymbolIsSet;
}

void CountryDetails::unsetCurrencySymbol()
{
    m_CurrencySymbolIsSet = false;
}

utility::string_t CountryDetails::getCurrencyEnglishName() const
{
    return m_CurrencyEnglishName;
}


void CountryDetails::setCurrencyEnglishName(utility::string_t value)
{
    m_CurrencyEnglishName = value;
    m_CurrencyEnglishNameIsSet = true;
}
bool CountryDetails::currencyEnglishNameIsSet() const
{
    return m_CurrencyEnglishNameIsSet;
}

void CountryDetails::unsetCurrencyEnglishName()
{
    m_CurrencyEnglishNameIsSet = false;
}

utility::string_t CountryDetails::getRegion() const
{
    return m_Region;
}


void CountryDetails::setRegion(utility::string_t value)
{
    m_Region = value;
    m_RegionIsSet = true;
}
bool CountryDetails::regionIsSet() const
{
    return m_RegionIsSet;
}

void CountryDetails::unsetRegion()
{
    m_RegionIsSet = false;
}

utility::string_t CountryDetails::getSubregion() const
{
    return m_Subregion;
}


void CountryDetails::setSubregion(utility::string_t value)
{
    m_Subregion = value;
    m_SubregionIsSet = true;
}
bool CountryDetails::subregionIsSet() const
{
    return m_SubregionIsSet;
}

void CountryDetails::unsetSubregion()
{
    m_SubregionIsSet = false;
}

}
}
}
}

