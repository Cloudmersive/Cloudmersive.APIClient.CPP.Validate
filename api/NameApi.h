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
 * NameApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_NameApi_H_
#define IO_SWAGGER_CLIENT_API_NameApi_H_


#include "../ApiClient.h"

#include "FirstNameValidationRequest.h"
#include "FirstNameValidationResponse.h"
#include "FullNameValidationRequest.h"
#include "FullNameValidationResponse.h"
#include "GetGenderRequest.h"
#include "GetGenderResponse.h"
#include "LastNameValidationRequest.h"
#include "LastNameValidationResponse.h"
#include "ValidateIdentifierRequest.h"
#include "ValidateIdentifierResponse.h"

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  NameApi
{
public:
    NameApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~NameApi();
    /// <summary>
    /// Get the gender of a first name
    /// </summary>
    /// <remarks>
    /// Determines the gender of a first name (given name)
    /// </remarks>
    /// <param name="input">Gender request information</param>
    pplx::task<std::shared_ptr<GetGenderResponse>> nameGetGender(
        std::shared_ptr<GetGenderRequest> input
    );
    /// <summary>
    /// Validate a code identifier
    /// </summary>
    /// <remarks>
    /// Determines if the input name is a valid technical / code identifier.  Configure input rules such as whether whitespace, hyphens, underscores, etc. are allowed.  For example, a valid identifier might be \&quot;helloWorld\&quot; but not \&quot;hello*World\&quot;.
    /// </remarks>
    /// <param name="input">Identifier validation request information</param>
    pplx::task<std::shared_ptr<ValidateIdentifierResponse>> nameIdentifier(
        std::shared_ptr<ValidateIdentifierRequest> input
    );
    /// <summary>
    /// Validate a first name
    /// </summary>
    /// <remarks>
    /// Determines if a string is a valid first name (given name)
    /// </remarks>
    /// <param name="input">Validation request information</param>
    pplx::task<std::shared_ptr<FirstNameValidationResponse>> nameValidateFirstName(
        std::shared_ptr<FirstNameValidationRequest> input
    );
    /// <summary>
    /// Parse and validate a full name
    /// </summary>
    /// <remarks>
    /// Parses a full name string (e.g. \&quot;Mr. Jon van der Waal Jr.\&quot;) into its component parts (and returns these component parts), and then validates whether it is a valid name string or not
    /// </remarks>
    /// <param name="input">Validation request information</param>
    pplx::task<std::shared_ptr<FullNameValidationResponse>> nameValidateFullName(
        std::shared_ptr<FullNameValidationRequest> input
    );
    /// <summary>
    /// Validate a last name
    /// </summary>
    /// <remarks>
    /// Determines if a string is a valid last name (surname)
    /// </remarks>
    /// <param name="input">Validation request information</param>
    pplx::task<std::shared_ptr<LastNameValidationResponse>> nameValidateLastName(
        std::shared_ptr<LastNameValidationRequest> input
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_NameApi_H_ */
