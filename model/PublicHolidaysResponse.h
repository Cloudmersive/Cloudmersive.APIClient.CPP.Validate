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
 * PublicHolidaysResponse.h
 *
 * Result of performing a get public holidays request operation
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_PublicHolidaysResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_PublicHolidaysResponse_H_


#include "../ModelBase.h"

#include "PublicHolidayOccurrence.h"
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Result of performing a get public holidays request operation
/// </summary>
class  PublicHolidaysResponse
    : public ModelBase
{
public:
    PublicHolidaysResponse();
    virtual ~PublicHolidaysResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PublicHolidaysResponse members

    /// <summary>
    /// True if successful, false otherwise
    /// </summary>
    bool isSuccessful() const;
    bool successfulIsSet() const;
    void unsetSuccessful();
    void setSuccessful(bool value);
    /// <summary>
    /// Public holidays in the requested country and year
    /// </summary>
    std::vector<std::shared_ptr<PublicHolidayOccurrence>>& getPublicHolidays();
    bool publicHolidaysIsSet() const;
    void unsetPublicHolidays();
    void setPublicHolidays(std::vector<std::shared_ptr<PublicHolidayOccurrence>> value);

protected:
    bool m_Successful;
    bool m_SuccessfulIsSet;
    std::vector<std::shared_ptr<PublicHolidayOccurrence>> m_PublicHolidays;
    bool m_PublicHolidaysIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_PublicHolidaysResponse_H_ */