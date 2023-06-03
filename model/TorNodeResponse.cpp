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



#include "TorNodeResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

TorNodeResponse::TorNodeResponse()
{
    m_IsTorNode = false;
    m_IsTorNodeIsSet = false;
}

TorNodeResponse::~TorNodeResponse()
{
}

void TorNodeResponse::validate()
{
    // TODO: implement validation
}

web::json::value TorNodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IsTorNodeIsSet)
    {
        val[utility::conversions::to_string_t("IsTorNode")] = ModelBase::toJson(m_IsTorNode);
    }

    return val;
}

void TorNodeResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("IsTorNode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("IsTorNode")];
        if(!fieldValue.is_null())
        {
            setIsTorNode(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void TorNodeResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_IsTorNodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("IsTorNode"), m_IsTorNode));
    }
}

void TorNodeResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("IsTorNode")))
    {
        setIsTorNode(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("IsTorNode"))));
    }
}

bool TorNodeResponse::isIsTorNode() const
{
    return m_IsTorNode;
}


void TorNodeResponse::setIsTorNode(bool value)
{
    m_IsTorNode = value;
    m_IsTorNodeIsSet = true;
}
bool TorNodeResponse::isTorNodeIsSet() const
{
    return m_IsTorNodeIsSet;
}

void TorNodeResponse::unsetIsTorNode()
{
    m_IsTorNodeIsSet = false;
}

}
}
}
}
