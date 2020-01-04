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

/*
 * LastNameValidationRequest.h
 *
 * Request to validate a last name
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_LastNameValidationRequest_H_
#define IO_SWAGGER_CLIENT_MODEL_LastNameValidationRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Request to validate a last name
/// </summary>
class  LastNameValidationRequest
    : public ModelBase
{
public:
    LastNameValidationRequest();
    virtual ~LastNameValidationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// LastNameValidationRequest members

    /// <summary>
    /// Last name to process
    /// </summary>
    utility::string_t getLastName() const;
    bool lastNameIsSet() const;
    void unsetLastName();
    void setLastName(utility::string_t value);

protected:
    utility::string_t m_LastName;
    bool m_LastNameIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_LastNameValidationRequest_H_ */
