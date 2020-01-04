/**
 * validateapi
 * The validation APIs help you validate data. Check if an E-mail address is real. Check if a domain is real. Check up on an IP address, and even where it is located. All this and much more is available in the validation API.
 *
 * OpenAPI spec version: v1
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.10.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * ValidateUrlResponseFull.h
 *
 * Result of validating a URL with full validation
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_ValidateUrlResponseFull_H_
#define IO_SWAGGER_CLIENT_MODEL_ValidateUrlResponseFull_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Result of validating a URL with full validation
/// </summary>
class  ValidateUrlResponseFull
    : public ModelBase
{
public:
    ValidateUrlResponseFull();
    virtual ~ValidateUrlResponseFull();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ValidateUrlResponseFull members

    /// <summary>
    /// True if the URL has valid syntax, a valid domain, a valid endpoint, and passes virus scan checks; false otherwise
    /// </summary>
    bool isValidURL() const;
    bool validURLIsSet() const;
    void unsetValidURL();
    void setValidURL(bool value);
    /// <summary>
    /// True if the URL has valid syntax, false otherwise
    /// </summary>
    bool isValidSyntax() const;
    bool validSyntaxIsSet() const;
    void unsetValid_Syntax();
    void setValidSyntax(bool value);
    /// <summary>
    /// True if the domain name is valid and exists, false otherwise
    /// </summary>
    bool isValidDomain() const;
    bool validDomainIsSet() const;
    void unsetValid_Domain();
    void setValidDomain(bool value);
    /// <summary>
    /// True if the endpoint is up and responsive and passes a virus scan check, false otherwise
    /// </summary>
    bool isValidEndpoint() const;
    bool validEndpointIsSet() const;
    void unsetValid_Endpoint();
    void setValidEndpoint(bool value);
    /// <summary>
    /// Well-formed version of the URL
    /// </summary>
    utility::string_t getWellFormedURL() const;
    bool wellFormedURLIsSet() const;
    void unsetWellFormedURL();
    void setWellFormedURL(utility::string_t value);

protected:
    bool m_ValidURL;
    bool m_ValidURLIsSet;
    bool m_Valid_Syntax;
    bool m_Valid_SyntaxIsSet;
    bool m_Valid_Domain;
    bool m_Valid_DomainIsSet;
    bool m_Valid_Endpoint;
    bool m_Valid_EndpointIsSet;
    utility::string_t m_WellFormedURL;
    bool m_WellFormedURLIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_ValidateUrlResponseFull_H_ */
