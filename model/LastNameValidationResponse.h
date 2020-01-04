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

/*
 * LastNameValidationResponse.h
 *
 * Result of a last name validation operation
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_LastNameValidationResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_LastNameValidationResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Result of a last name validation operation
/// </summary>
class  LastNameValidationResponse
    : public ModelBase
{
public:
    LastNameValidationResponse();
    virtual ~LastNameValidationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// LastNameValidationResponse members

    /// <summary>
    /// True if the validation operation was successful, false otherwise
    /// </summary>
    bool isSuccessful() const;
    bool successfulIsSet() const;
    void unsetSuccessful();
    void setSuccessful(bool value);
    /// <summary>
    /// Possible values are: ValidLastName, ValidUnknownLastName, InvalidSpamInput, InvalidCharacters, InvalidEmpty
    /// </summary>
    utility::string_t getValidationResult() const;
    bool validationResultIsSet() const;
    void unsetValidationResult();
    void setValidationResult(utility::string_t value);

protected:
    bool m_Successful;
    bool m_SuccessfulIsSet;
    utility::string_t m_ValidationResult;
    bool m_ValidationResultIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_LastNameValidationResponse_H_ */
