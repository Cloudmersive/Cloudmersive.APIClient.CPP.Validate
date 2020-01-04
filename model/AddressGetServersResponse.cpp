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



#include "AddressGetServersResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

AddressGetServersResponse::AddressGetServersResponse()
{
    m_Success = false;
    m_SuccessIsSet = false;
    m_ServersIsSet = false;
}

AddressGetServersResponse::~AddressGetServersResponse()
{
}

void AddressGetServersResponse::validate()
{
    // TODO: implement validation
}

web::json::value AddressGetServersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_SuccessIsSet)
    {
        val[utility::conversions::to_string_t("Success")] = ModelBase::toJson(m_Success);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Servers )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("Servers")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void AddressGetServersResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("Success")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Success")];
        if(!fieldValue.is_null())
        {
            setSuccess(ModelBase::boolFromJson(fieldValue));
        }
    }
    {
        m_Servers.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("Servers")))
        {
        for( auto& item : val[utility::conversions::to_string_t("Servers")].as_array() )
        {
            m_Servers.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

void AddressGetServersResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_SuccessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Success"), m_Success));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Servers )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Servers"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void AddressGetServersResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("Success")))
    {
        setSuccess(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Success"))));
    }
    {
        m_Servers.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("Servers")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Servers"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Servers.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

bool AddressGetServersResponse::isSuccess() const
{
    return m_Success;
}


void AddressGetServersResponse::setSuccess(bool value)
{
    m_Success = value;
    m_SuccessIsSet = true;
}
bool AddressGetServersResponse::successIsSet() const
{
    return m_SuccessIsSet;
}

void AddressGetServersResponse::unsetSuccess()
{
    m_SuccessIsSet = false;
}

std::vector<utility::string_t>& AddressGetServersResponse::getServers()
{
    return m_Servers;
}

void AddressGetServersResponse::setServers(std::vector<utility::string_t> value)
{
    m_Servers = value;
    m_ServersIsSet = true;
}
bool AddressGetServersResponse::serversIsSet() const
{
    return m_ServersIsSet;
}

void AddressGetServersResponse::unsetServers()
{
    m_ServersIsSet = false;
}

}
}
}
}
