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



#include "XssProtectionBatchRequest.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

XssProtectionBatchRequest::XssProtectionBatchRequest()
{
    m_RequestItemsIsSet = false;
}

XssProtectionBatchRequest::~XssProtectionBatchRequest()
{
}

void XssProtectionBatchRequest::validate()
{
    // TODO: implement validation
}

web::json::value XssProtectionBatchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_RequestItems )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("RequestItems")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void XssProtectionBatchRequest::fromJson(web::json::value& val)
{
    {
        m_RequestItems.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("RequestItems")))
        {
        for( auto& item : val[utility::conversions::to_string_t("RequestItems")].as_array() )
        {
            if(item.is_null())
            {
                m_RequestItems.push_back( std::shared_ptr<XssProtectionRequestItem>(nullptr) );
            }
            else
            {
                std::shared_ptr<XssProtectionRequestItem> newItem(new XssProtectionRequestItem());
                newItem->fromJson(item);
                m_RequestItems.push_back( newItem );
            }
        }
        }
    }
}

void XssProtectionBatchRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_RequestItems )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("RequestItems"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void XssProtectionBatchRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_RequestItems.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("RequestItems")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("RequestItems"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_RequestItems.push_back( std::shared_ptr<XssProtectionRequestItem>(nullptr) );
            }
            else
            {
                std::shared_ptr<XssProtectionRequestItem> newItem(new XssProtectionRequestItem());
                newItem->fromJson(item);
                m_RequestItems.push_back( newItem );
            }
        }
        }
    }
}

std::vector<std::shared_ptr<XssProtectionRequestItem>>& XssProtectionBatchRequest::getRequestItems()
{
    return m_RequestItems;
}

void XssProtectionBatchRequest::setRequestItems(std::vector<std::shared_ptr<XssProtectionRequestItem>> value)
{
    m_RequestItems = value;
    m_RequestItemsIsSet = true;
}
bool XssProtectionBatchRequest::requestItemsIsSet() const
{
    return m_RequestItemsIsSet;
}

void XssProtectionBatchRequest::unsetRequestItems()
{
    m_RequestItemsIsSet = false;
}

}
}
}
}
