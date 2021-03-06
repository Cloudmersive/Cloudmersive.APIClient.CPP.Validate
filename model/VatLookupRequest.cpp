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



#include "VatLookupRequest.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

VatLookupRequest::VatLookupRequest()
{
    m_VatCode = utility::conversions::to_string_t("");
    m_VatCodeIsSet = false;
}

VatLookupRequest::~VatLookupRequest()
{
}

void VatLookupRequest::validate()
{
    // TODO: implement validation
}

web::json::value VatLookupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_VatCodeIsSet)
    {
        val[utility::conversions::to_string_t("VatCode")] = ModelBase::toJson(m_VatCode);
    }

    return val;
}

void VatLookupRequest::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("VatCode")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("VatCode")];
        if(!fieldValue.is_null())
        {
            setVatCode(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void VatLookupRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_VatCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("VatCode"), m_VatCode));
        
    }
}

void VatLookupRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("VatCode")))
    {
        setVatCode(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("VatCode"))));
    }
}

utility::string_t VatLookupRequest::getVatCode() const
{
    return m_VatCode;
}


void VatLookupRequest::setVatCode(utility::string_t value)
{
    m_VatCode = value;
    m_VatCodeIsSet = true;
}
bool VatLookupRequest::vatCodeIsSet() const
{
    return m_VatCodeIsSet;
}

void VatLookupRequest::unsetVatCode()
{
    m_VatCodeIsSet = false;
}

}
}
}
}

