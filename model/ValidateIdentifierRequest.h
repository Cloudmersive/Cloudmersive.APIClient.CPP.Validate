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
 * ValidateIdentifierRequest.h
 *
 * Identifier validation request, including the input identifier as well as various identifier rules
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_ValidateIdentifierRequest_H_
#define IO_SWAGGER_CLIENT_MODEL_ValidateIdentifierRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Identifier validation request, including the input identifier as well as various identifier rules
/// </summary>
class  ValidateIdentifierRequest
    : public ModelBase
{
public:
    ValidateIdentifierRequest();
    virtual ~ValidateIdentifierRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ValidateIdentifierRequest members

    /// <summary>
    /// Text string identifier input
    /// </summary>
    utility::string_t getInput() const;
    bool inputIsSet() const;
    void unsetInput();
    void setInput(utility::string_t value);
    /// <summary>
    /// True if whitespace is allowed in the identifier, false otherwise
    /// </summary>
    bool isAllowWhitespace() const;
    bool allowWhitespaceIsSet() const;
    void unsetAllowWhitespace();
    void setAllowWhitespace(bool value);
    /// <summary>
    /// True if hyphens are allowd in the identifier, false otherwise
    /// </summary>
    bool isAllowHyphens() const;
    bool allowHyphensIsSet() const;
    void unsetAllowHyphens();
    void setAllowHyphens(bool value);
    /// <summary>
    /// True if underscores are allowed in the identifier, false otherwise
    /// </summary>
    bool isAllowUnderscore() const;
    bool allowUnderscoreIsSet() const;
    void unsetAllowUnderscore();
    void setAllowUnderscore(bool value);
    /// <summary>
    /// True if numbers are allowed in the identifier, false otherwise
    /// </summary>
    bool isAllowNumbers() const;
    bool allowNumbersIsSet() const;
    void unsetAllowNumbers();
    void setAllowNumbers(bool value);
    /// <summary>
    /// True if periods are allowed in the identifier, false otherwise
    /// </summary>
    bool isAllowPeriods() const;
    bool allowPeriodsIsSet() const;
    void unsetAllowPeriods();
    void setAllowPeriods(bool value);
    /// <summary>
    /// Optional; maximum length, if any, of the identifier
    /// </summary>
    int32_t getMaxLength() const;
    bool maxLengthIsSet() const;
    void unsetMaxLength();
    void setMaxLength(int32_t value);
    /// <summary>
    /// Optional; minimum length, if any, of the identifier
    /// </summary>
    int32_t getMinLength() const;
    bool minLengthIsSet() const;
    void unsetMinLength();
    void setMinLength(int32_t value);

protected:
    utility::string_t m_Input;
    bool m_InputIsSet;
    bool m_AllowWhitespace;
    bool m_AllowWhitespaceIsSet;
    bool m_AllowHyphens;
    bool m_AllowHyphensIsSet;
    bool m_AllowUnderscore;
    bool m_AllowUnderscoreIsSet;
    bool m_AllowNumbers;
    bool m_AllowNumbersIsSet;
    bool m_AllowPeriods;
    bool m_AllowPeriodsIsSet;
    int32_t m_MaxLength;
    bool m_MaxLengthIsSet;
    int32_t m_MinLength;
    bool m_MinLengthIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_ValidateIdentifierRequest_H_ */
