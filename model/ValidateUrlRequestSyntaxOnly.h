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
 * ValidateUrlRequestSyntaxOnly.h
 *
 * Request to determine if a URL is valid
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_ValidateUrlRequestSyntaxOnly_H_
#define IO_SWAGGER_CLIENT_MODEL_ValidateUrlRequestSyntaxOnly_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Request to determine if a URL is valid
/// </summary>
class  ValidateUrlRequestSyntaxOnly
    : public ModelBase
{
public:
    ValidateUrlRequestSyntaxOnly();
    virtual ~ValidateUrlRequestSyntaxOnly();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ValidateUrlRequestSyntaxOnly members

    /// <summary>
    /// URL to validate
    /// </summary>
    utility::string_t getURL() const;
    bool uRLIsSet() const;
    void unsetURL();
    void setURL(utility::string_t value);

protected:
    utility::string_t m_URL;
    bool m_URLIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_ValidateUrlRequestSyntaxOnly_H_ */
