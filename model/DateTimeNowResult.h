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
 * DateTimeNowResult.h
 *
 * Current date and time response
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_DateTimeNowResult_H_
#define IO_SWAGGER_CLIENT_MODEL_DateTimeNowResult_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Current date and time response
/// </summary>
class  DateTimeNowResult
    : public ModelBase
{
public:
    DateTimeNowResult();
    virtual ~DateTimeNowResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DateTimeNowResult members

    /// <summary>
    /// True if successful, false otherwise
    /// </summary>
    bool isSuccessful() const;
    bool successfulIsSet() const;
    void unsetSuccessful();
    void setSuccessful(bool value);
    /// <summary>
    /// Current date, time, and time zone in standard JSON date format
    /// </summary>
    utility::datetime getNow() const;
    bool nowIsSet() const;
    void unsetNow();
    void setNow(utility::datetime value);
    /// <summary>
    /// Current GMT-time-zone date, time, and time zone in standard JSON date format
    /// </summary>
    utility::datetime getNowGmt() const;
    bool nowGmtIsSet() const;
    void unsetNowGmt();
    void setNowGmt(utility::datetime value);

protected:
    bool m_Successful;
    bool m_SuccessfulIsSet;
    utility::datetime m_Now;
    bool m_NowIsSet;
    utility::datetime m_NowGmt;
    bool m_NowGmtIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_DateTimeNowResult_H_ */
