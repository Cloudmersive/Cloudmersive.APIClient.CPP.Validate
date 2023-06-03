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



#include "XxeDetectionRequestItem.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

XxeDetectionRequestItem::XxeDetectionRequestItem()
{
    m_InputText = utility::conversions::to_string_t("");
    m_InputTextIsSet = false;
    m_AllowInternetUrls = false;
    m_AllowInternetUrlsIsSet = false;
    m_KnownSafeUrlsIsSet = false;
    m_KnownUnsafeUrlsIsSet = false;
}

XxeDetectionRequestItem::~XxeDetectionRequestItem()
{
}

void XxeDetectionRequestItem::validate()
{
    // TODO: implement validation
}

web::json::value XxeDetectionRequestItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_InputTextIsSet)
    {
        val[utility::conversions::to_string_t("InputText")] = ModelBase::toJson(m_InputText);
    }
    if(m_AllowInternetUrlsIsSet)
    {
        val[utility::conversions::to_string_t("AllowInternetUrls")] = ModelBase::toJson(m_AllowInternetUrls);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_KnownSafeUrls )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("KnownSafeUrls")] = web::json::value::array(jsonArray);
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_KnownUnsafeUrls )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("KnownUnsafeUrls")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void XxeDetectionRequestItem::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("InputText")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("InputText")];
        if(!fieldValue.is_null())
        {
            setInputText(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("AllowInternetUrls")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("AllowInternetUrls")];
        if(!fieldValue.is_null())
        {
            setAllowInternetUrls(ModelBase::boolFromJson(fieldValue));
        }
    }
    {
        m_KnownSafeUrls.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("KnownSafeUrls")))
        {
        for( auto& item : val[utility::conversions::to_string_t("KnownSafeUrls")].as_array() )
        {
            m_KnownSafeUrls.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    {
        m_KnownUnsafeUrls.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("KnownUnsafeUrls")))
        {
        for( auto& item : val[utility::conversions::to_string_t("KnownUnsafeUrls")].as_array() )
        {
            m_KnownUnsafeUrls.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

void XxeDetectionRequestItem::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_InputTextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("InputText"), m_InputText));
        
    }
    if(m_AllowInternetUrlsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("AllowInternetUrls"), m_AllowInternetUrls));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_KnownSafeUrls )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("KnownSafeUrls"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_KnownUnsafeUrls )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("KnownUnsafeUrls"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void XxeDetectionRequestItem::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("InputText")))
    {
        setInputText(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("InputText"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("AllowInternetUrls")))
    {
        setAllowInternetUrls(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("AllowInternetUrls"))));
    }
    {
        m_KnownSafeUrls.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("KnownSafeUrls")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("KnownSafeUrls"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_KnownSafeUrls.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    {
        m_KnownUnsafeUrls.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("KnownUnsafeUrls")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("KnownUnsafeUrls"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_KnownUnsafeUrls.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

utility::string_t XxeDetectionRequestItem::getInputText() const
{
    return m_InputText;
}


void XxeDetectionRequestItem::setInputText(utility::string_t value)
{
    m_InputText = value;
    m_InputTextIsSet = true;
}
bool XxeDetectionRequestItem::inputTextIsSet() const
{
    return m_InputTextIsSet;
}

void XxeDetectionRequestItem::unsetInputText()
{
    m_InputTextIsSet = false;
}

bool XxeDetectionRequestItem::isAllowInternetUrls() const
{
    return m_AllowInternetUrls;
}


void XxeDetectionRequestItem::setAllowInternetUrls(bool value)
{
    m_AllowInternetUrls = value;
    m_AllowInternetUrlsIsSet = true;
}
bool XxeDetectionRequestItem::allowInternetUrlsIsSet() const
{
    return m_AllowInternetUrlsIsSet;
}

void XxeDetectionRequestItem::unsetAllowInternetUrls()
{
    m_AllowInternetUrlsIsSet = false;
}

std::vector<utility::string_t>& XxeDetectionRequestItem::getKnownSafeUrls()
{
    return m_KnownSafeUrls;
}

void XxeDetectionRequestItem::setKnownSafeUrls(std::vector<utility::string_t> value)
{
    m_KnownSafeUrls = value;
    m_KnownSafeUrlsIsSet = true;
}
bool XxeDetectionRequestItem::knownSafeUrlsIsSet() const
{
    return m_KnownSafeUrlsIsSet;
}

void XxeDetectionRequestItem::unsetKnownSafeUrls()
{
    m_KnownSafeUrlsIsSet = false;
}

std::vector<utility::string_t>& XxeDetectionRequestItem::getKnownUnsafeUrls()
{
    return m_KnownUnsafeUrls;
}

void XxeDetectionRequestItem::setKnownUnsafeUrls(std::vector<utility::string_t> value)
{
    m_KnownUnsafeUrls = value;
    m_KnownUnsafeUrlsIsSet = true;
}
bool XxeDetectionRequestItem::knownUnsafeUrlsIsSet() const
{
    return m_KnownUnsafeUrlsIsSet;
}

void XxeDetectionRequestItem::unsetKnownUnsafeUrls()
{
    m_KnownUnsafeUrlsIsSet = false;
}

}
}
}
}

