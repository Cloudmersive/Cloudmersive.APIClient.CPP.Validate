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



#include "FirstNameValidationResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

FirstNameValidationResponse::FirstNameValidationResponse()
{
    m_Successful = false;
    m_SuccessfulIsSet = false;
    m_ValidationResult = utility::conversions::to_string_t("");
    m_ValidationResultIsSet = false;
}

FirstNameValidationResponse::~FirstNameValidationResponse()
{
}

void FirstNameValidationResponse::validate()
{
    // TODO: implement validation
}

web::json::value FirstNameValidationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_SuccessfulIsSet)
    {
        val[utility::conversions::to_string_t("Successful")] = ModelBase::toJson(m_Successful);
    }
    if(m_ValidationResultIsSet)
    {
        val[utility::conversions::to_string_t("ValidationResult")] = ModelBase::toJson(m_ValidationResult);
    }

    return val;
}

void FirstNameValidationResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("Successful")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("Successful")];
        if(!fieldValue.is_null())
        {
            setSuccessful(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ValidationResult")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ValidationResult")];
        if(!fieldValue.is_null())
        {
            setValidationResult(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void FirstNameValidationResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ValidationResultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ValidationResult"), m_ValidationResult));
        
    }
}

void FirstNameValidationResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("ValidationResult")))
    {
        setValidationResult(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ValidationResult"))));
    }
}

bool FirstNameValidationResponse::isSuccessful() const
{
    return m_Successful;
}


void FirstNameValidationResponse::setSuccessful(bool value)
{
    m_Successful = value;
    m_SuccessfulIsSet = true;
}
bool FirstNameValidationResponse::successfulIsSet() const
{
    return m_SuccessfulIsSet;
}

void FirstNameValidationResponse::unsetSuccessful()
{
    m_SuccessfulIsSet = false;
}

utility::string_t FirstNameValidationResponse::getValidationResult() const
{
    return m_ValidationResult;
}


void FirstNameValidationResponse::setValidationResult(utility::string_t value)
{
    m_ValidationResult = value;
    m_ValidationResultIsSet = true;
}
bool FirstNameValidationResponse::validationResultIsSet() const
{
    return m_ValidationResultIsSet;
}

void FirstNameValidationResponse::unsetValidationResult()
{
    m_ValidationResultIsSet = false;
}

}
}
}
}

