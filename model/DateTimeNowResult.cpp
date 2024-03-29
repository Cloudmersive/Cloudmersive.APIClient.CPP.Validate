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



#include "DateTimeNowResult.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

DateTimeNowResult::DateTimeNowResult()
{
    m_Successful = false;
    m_SuccessfulIsSet = false;
    m_Now = utility::datetime();
    m_NowIsSet = false;
    m_NowGmt = utility::datetime();
    m_NowGmtIsSet = false;
}

DateTimeNowResult::~DateTimeNowResult()
{
}

void DateTimeNowResult::validate()
{
    // TODO: implement validation
}

web::json::value DateTimeNowResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_SuccessfulIsSet)
    {
        val[utility::conversions::to_string_t("Successful")] = ModelBase::toJson(m_Successful);
    }
    if(m_NowIsSet)
    {
        val[utility::conversions::to_string_t("Now")] = ModelBase::toJson(m_Now);
    }
    if(m_NowGmtIsSet)
    {
        val[utility::conversions::to_string_t("NowGmt")] = ModelBase::toJson(m_NowGmt);
    }

    return val;
}

void DateTimeNowResult::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("Successful")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Successful")];
        if(!fieldValue.is_null())
        {
            setSuccessful(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Now")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Now")];
        if(!fieldValue.is_null())
        {
            setNow(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("NowGmt")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("NowGmt")];
        if(!fieldValue.is_null())
        {
            setNowGmt(ModelBase::dateFromJson(fieldValue));
        }
    }
}

void DateTimeNowResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_NowIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Now"), m_Now));
        
    }
    if(m_NowGmtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("NowGmt"), m_NowGmt));
        
    }
}

void DateTimeNowResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("Now")))
    {
        setNow(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Now"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("NowGmt")))
    {
        setNowGmt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("NowGmt"))));
    }
}

bool DateTimeNowResult::isSuccessful() const
{
    return m_Successful;
}


void DateTimeNowResult::setSuccessful(bool value)
{
    m_Successful = value;
    m_SuccessfulIsSet = true;
}
bool DateTimeNowResult::successfulIsSet() const
{
    return m_SuccessfulIsSet;
}

void DateTimeNowResult::unsetSuccessful()
{
    m_SuccessfulIsSet = false;
}

utility::datetime DateTimeNowResult::getNow() const
{
    return m_Now;
}


void DateTimeNowResult::setNow(utility::datetime value)
{
    m_Now = value;
    m_NowIsSet = true;
}
bool DateTimeNowResult::nowIsSet() const
{
    return m_NowIsSet;
}

void DateTimeNowResult::unsetNow()
{
    m_NowIsSet = false;
}

utility::datetime DateTimeNowResult::getNowGmt() const
{
    return m_NowGmt;
}


void DateTimeNowResult::setNowGmt(utility::datetime value)
{
    m_NowGmt = value;
    m_NowGmtIsSet = true;
}
bool DateTimeNowResult::nowGmtIsSet() const
{
    return m_NowGmtIsSet;
}

void DateTimeNowResult::unsetNowGmt()
{
    m_NowGmtIsSet = false;
}

}
}
}
}

