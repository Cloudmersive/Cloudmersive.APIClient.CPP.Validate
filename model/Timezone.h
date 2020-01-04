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
 * Timezone.h
 *
 * IANA/Olsen time zone
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_Timezone_H_
#define IO_SWAGGER_CLIENT_MODEL_Timezone_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// IANA/Olsen time zone
/// </summary>
class  Timezone
    : public ModelBase
{
public:
    Timezone();
    virtual ~Timezone();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Timezone members

    /// <summary>
    /// Name of the Time Zone
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();
    void setName(utility::string_t value);
    /// <summary>
    /// UTC offset for this time zone
    /// </summary>
    utility::string_t getBaseUTCOffset() const;
    bool baseUTCOffsetIsSet() const;
    void unsetBaseUTCOffset();
    void setBaseUTCOffset(utility::string_t value);
    /// <summary>
    /// The current time (Now) in this time zone
    /// </summary>
    utility::datetime getNow() const;
    bool nowIsSet() const;
    void unsetNow();
    void setNow(utility::datetime value);

protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_BaseUTCOffset;
    bool m_BaseUTCOffsetIsSet;
    utility::datetime m_Now;
    bool m_NowIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Timezone_H_ */
