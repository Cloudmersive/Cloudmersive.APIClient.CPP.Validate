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
 * DateTimeStandardizedParseRequest.h
 *
 * Input parameter to a date time parsing request
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_DateTimeStandardizedParseRequest_H_
#define IO_SWAGGER_CLIENT_MODEL_DateTimeStandardizedParseRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Input parameter to a date time parsing request
/// </summary>
class  DateTimeStandardizedParseRequest
    : public ModelBase
{
public:
    DateTimeStandardizedParseRequest();
    virtual ~DateTimeStandardizedParseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DateTimeStandardizedParseRequest members

    /// <summary>
    /// Raw string input of a standard-formatted date and time for parsing
    /// </summary>
    utility::string_t getRawDateTimeInput() const;
    bool rawDateTimeInputIsSet() const;
    void unsetRawDateTimeInput();
    void setRawDateTimeInput(utility::string_t value);
    /// <summary>
    /// Optional: specify the two-letter country code to optimzie date formatting; default is US
    /// </summary>
    utility::string_t getCountryCode() const;
    bool countryCodeIsSet() const;
    void unsetCountryCode();
    void setCountryCode(utility::string_t value);

protected:
    utility::string_t m_RawDateTimeInput;
    bool m_RawDateTimeInputIsSet;
    utility::string_t m_CountryCode;
    bool m_CountryCodeIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_DateTimeStandardizedParseRequest_H_ */
