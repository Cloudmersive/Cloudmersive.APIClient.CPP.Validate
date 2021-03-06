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



#include "AddressVerifySyntaxOnlyResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

AddressVerifySyntaxOnlyResponse::AddressVerifySyntaxOnlyResponse()
{
    m_ValidAddress = false;
    m_ValidAddressIsSet = false;
    m_Domain = utility::conversions::to_string_t("");
    m_DomainIsSet = false;
    m_IsFreeEmailProvider = false;
    m_IsFreeEmailProviderIsSet = false;
    m_IsDisposable = false;
    m_IsDisposableIsSet = false;
}

AddressVerifySyntaxOnlyResponse::~AddressVerifySyntaxOnlyResponse()
{
}

void AddressVerifySyntaxOnlyResponse::validate()
{
    // TODO: implement validation
}

web::json::value AddressVerifySyntaxOnlyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ValidAddressIsSet)
    {
        val[utility::conversions::to_string_t("ValidAddress")] = ModelBase::toJson(m_ValidAddress);
    }
    if(m_DomainIsSet)
    {
        val[utility::conversions::to_string_t("Domain")] = ModelBase::toJson(m_Domain);
    }
    if(m_IsFreeEmailProviderIsSet)
    {
        val[utility::conversions::to_string_t("IsFreeEmailProvider")] = ModelBase::toJson(m_IsFreeEmailProvider);
    }
    if(m_IsDisposableIsSet)
    {
        val[utility::conversions::to_string_t("IsDisposable")] = ModelBase::toJson(m_IsDisposable);
    }

    return val;
}

void AddressVerifySyntaxOnlyResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("ValidAddress")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ValidAddress")];
        if(!fieldValue.is_null())
        {
            setValidAddress(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Domain")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Domain")];
        if(!fieldValue.is_null())
        {
            setDomain(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("IsFreeEmailProvider")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("IsFreeEmailProvider")];
        if(!fieldValue.is_null())
        {
            setIsFreeEmailProvider(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("IsDisposable")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("IsDisposable")];
        if(!fieldValue.is_null())
        {
            setIsDisposable(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void AddressVerifySyntaxOnlyResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_ValidAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ValidAddress"), m_ValidAddress));
    }
    if(m_DomainIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("Domain"), m_Domain));
        
    }
    if(m_IsFreeEmailProviderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("IsFreeEmailProvider"), m_IsFreeEmailProvider));
    }
    if(m_IsDisposableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("IsDisposable"), m_IsDisposable));
    }
}

void AddressVerifySyntaxOnlyResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("ValidAddress")))
    {
        setValidAddress(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ValidAddress"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("Domain")))
    {
        setDomain(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("Domain"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("IsFreeEmailProvider")))
    {
        setIsFreeEmailProvider(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("IsFreeEmailProvider"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("IsDisposable")))
    {
        setIsDisposable(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("IsDisposable"))));
    }
}

bool AddressVerifySyntaxOnlyResponse::isValidAddress() const
{
    return m_ValidAddress;
}


void AddressVerifySyntaxOnlyResponse::setValidAddress(bool value)
{
    m_ValidAddress = value;
    m_ValidAddressIsSet = true;
}
bool AddressVerifySyntaxOnlyResponse::validAddressIsSet() const
{
    return m_ValidAddressIsSet;
}

void AddressVerifySyntaxOnlyResponse::unsetValidAddress()
{
    m_ValidAddressIsSet = false;
}

utility::string_t AddressVerifySyntaxOnlyResponse::getDomain() const
{
    return m_Domain;
}


void AddressVerifySyntaxOnlyResponse::setDomain(utility::string_t value)
{
    m_Domain = value;
    m_DomainIsSet = true;
}
bool AddressVerifySyntaxOnlyResponse::domainIsSet() const
{
    return m_DomainIsSet;
}

void AddressVerifySyntaxOnlyResponse::unsetDomain()
{
    m_DomainIsSet = false;
}

bool AddressVerifySyntaxOnlyResponse::isIsFreeEmailProvider() const
{
    return m_IsFreeEmailProvider;
}


void AddressVerifySyntaxOnlyResponse::setIsFreeEmailProvider(bool value)
{
    m_IsFreeEmailProvider = value;
    m_IsFreeEmailProviderIsSet = true;
}
bool AddressVerifySyntaxOnlyResponse::isFreeEmailProviderIsSet() const
{
    return m_IsFreeEmailProviderIsSet;
}

void AddressVerifySyntaxOnlyResponse::unsetIsFreeEmailProvider()
{
    m_IsFreeEmailProviderIsSet = false;
}

bool AddressVerifySyntaxOnlyResponse::isIsDisposable() const
{
    return m_IsDisposable;
}


void AddressVerifySyntaxOnlyResponse::setIsDisposable(bool value)
{
    m_IsDisposable = value;
    m_IsDisposableIsSet = true;
}
bool AddressVerifySyntaxOnlyResponse::isDisposableIsSet() const
{
    return m_IsDisposableIsSet;
}

void AddressVerifySyntaxOnlyResponse::unsetIsDisposable()
{
    m_IsDisposableIsSet = false;
}

}
}
}
}

