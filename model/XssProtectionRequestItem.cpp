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



#include "XssProtectionRequestItem.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

XssProtectionRequestItem::XssProtectionRequestItem()
{
    m_InputText = utility::conversions::to_string_t("");
    m_InputTextIsSet = false;
}

XssProtectionRequestItem::~XssProtectionRequestItem()
{
}

void XssProtectionRequestItem::validate()
{
    // TODO: implement validation
}

web::json::value XssProtectionRequestItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_InputTextIsSet)
    {
        val[utility::conversions::to_string_t("InputText")] = ModelBase::toJson(m_InputText);
    }

    return val;
}

void XssProtectionRequestItem::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("InputText")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("InputText")];
        if(!fieldValue.is_null())
        {
            setInputText(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void XssProtectionRequestItem::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

void XssProtectionRequestItem::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
}

utility::string_t XssProtectionRequestItem::getInputText() const
{
    return m_InputText;
}


void XssProtectionRequestItem::setInputText(utility::string_t value)
{
    m_InputText = value;
    m_InputTextIsSet = true;
}
bool XssProtectionRequestItem::inputTextIsSet() const
{
    return m_InputTextIsSet;
}

void XssProtectionRequestItem::unsetInputText()
{
    m_InputTextIsSet = false;
}

}
}
}
}

