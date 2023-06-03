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



#include "PublicHolidaysResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

PublicHolidaysResponse::PublicHolidaysResponse()
{
    m_Successful = false;
    m_SuccessfulIsSet = false;
    m_PublicHolidaysIsSet = false;
}

PublicHolidaysResponse::~PublicHolidaysResponse()
{
}

void PublicHolidaysResponse::validate()
{
    // TODO: implement validation
}

web::json::value PublicHolidaysResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_SuccessfulIsSet)
    {
        val[utility::conversions::to_string_t("Successful")] = ModelBase::toJson(m_Successful);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_PublicHolidays )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("PublicHolidays")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void PublicHolidaysResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("Successful")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Successful")];
        if(!fieldValue.is_null())
        {
            setSuccessful(ModelBase::boolFromJson(fieldValue));
        }
    }
    {
        m_PublicHolidays.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("PublicHolidays")))
        {
        for( auto& item : val[utility::conversions::to_string_t("PublicHolidays")].as_array() )
        {
            if(item.is_null())
            {
                m_PublicHolidays.push_back( std::shared_ptr<PublicHolidayOccurrence>(nullptr) );
            }
            else
            {
                std::shared_ptr<PublicHolidayOccurrence> newItem(new PublicHolidayOccurrence());
                newItem->fromJson(item);
                m_PublicHolidays.push_back( newItem );
            }
        }
        }
    }
}

void PublicHolidaysResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_PublicHolidays )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("PublicHolidays"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void PublicHolidaysResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    {
        m_PublicHolidays.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("PublicHolidays")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("PublicHolidays"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_PublicHolidays.push_back( std::shared_ptr<PublicHolidayOccurrence>(nullptr) );
            }
            else
            {
                std::shared_ptr<PublicHolidayOccurrence> newItem(new PublicHolidayOccurrence());
                newItem->fromJson(item);
                m_PublicHolidays.push_back( newItem );
            }
        }
        }
    }
}

bool PublicHolidaysResponse::isSuccessful() const
{
    return m_Successful;
}


void PublicHolidaysResponse::setSuccessful(bool value)
{
    m_Successful = value;
    m_SuccessfulIsSet = true;
}
bool PublicHolidaysResponse::successfulIsSet() const
{
    return m_SuccessfulIsSet;
}

void PublicHolidaysResponse::unsetSuccessful()
{
    m_SuccessfulIsSet = false;
}

std::vector<std::shared_ptr<PublicHolidayOccurrence>>& PublicHolidaysResponse::getPublicHolidays()
{
    return m_PublicHolidays;
}

void PublicHolidaysResponse::setPublicHolidays(std::vector<std::shared_ptr<PublicHolidayOccurrence>> value)
{
    m_PublicHolidays = value;
    m_PublicHolidaysIsSet = true;
}
bool PublicHolidaysResponse::publicHolidaysIsSet() const
{
    return m_PublicHolidaysIsSet;
}

void PublicHolidaysResponse::unsetPublicHolidays()
{
    m_PublicHolidaysIsSet = false;
}

}
}
}
}

