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
 * GetPublicHolidaysRequest.h
 *
 * Input parameter to a country validation request
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_GetPublicHolidaysRequest_H_
#define IO_SWAGGER_CLIENT_MODEL_GetPublicHolidaysRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Input parameter to a country validation request
/// </summary>
class  GetPublicHolidaysRequest
    : public ModelBase
{
public:
    GetPublicHolidaysRequest();
    virtual ~GetPublicHolidaysRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetPublicHolidaysRequest members

    /// <summary>
    /// Two-letter code (FIPS 10-4 or ISO 3166-1) of the country; if not specified, defaults to United States
    /// </summary>
    utility::string_t getRawCountryInput() const;
    bool rawCountryInputIsSet() const;
    void unsetRawCountryInput();
    void setRawCountryInput(utility::string_t value);
    /// <summary>
    /// Optional - the year in which to retrieve the holidays; if left blank (0) it will default to the current year
    /// </summary>
    int32_t getYear() const;
    bool yearIsSet() const;
    void unsetYear();
    void setYear(int32_t value);

protected:
    utility::string_t m_RawCountryInput;
    bool m_RawCountryInputIsSet;
    int32_t m_Year;
    bool m_YearIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_GetPublicHolidaysRequest_H_ */
