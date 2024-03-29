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
 * DateTimeStandardizedParseResponse.h
 *
 * Result of performing a date time parsing
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_DateTimeStandardizedParseResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_DateTimeStandardizedParseResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Result of performing a date time parsing
/// </summary>
class  DateTimeStandardizedParseResponse
    : public ModelBase
{
public:
    DateTimeStandardizedParseResponse();
    virtual ~DateTimeStandardizedParseResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DateTimeStandardizedParseResponse members

    /// <summary>
    /// True if successful, false otherwise
    /// </summary>
    bool isSuccessful() const;
    bool successfulIsSet() const;
    void unsetSuccessful();
    void setSuccessful(bool value);
    /// <summary>
    /// Result of performing a date time parsing
    /// </summary>
    utility::datetime getParsedDateResult() const;
    bool parsedDateResultIsSet() const;
    void unsetParsedDateResult();
    void setParsedDateResult(utility::datetime value);
    /// <summary>
    /// Year of the parsed date time result
    /// </summary>
    int32_t getYear() const;
    bool yearIsSet() const;
    void unsetYear();
    void setYear(int32_t value);
    /// <summary>
    /// Month of the parsed date time result
    /// </summary>
    int32_t getMonth() const;
    bool monthIsSet() const;
    void unsetMonth();
    void setMonth(int32_t value);
    /// <summary>
    /// Day of the parsed date time result
    /// </summary>
    int32_t getDay() const;
    bool dayIsSet() const;
    void unsetDay();
    void setDay(int32_t value);
    /// <summary>
    /// Hour of the parsed date time result (24-hour)
    /// </summary>
    int32_t getHour() const;
    bool hourIsSet() const;
    void unsetHour();
    void setHour(int32_t value);
    /// <summary>
    /// Minute of the parsed date time result
    /// </summary>
    int32_t getMinute() const;
    bool minuteIsSet() const;
    void unsetMinute();
    void setMinute(int32_t value);
    /// <summary>
    /// Second of the parsed date time result
    /// </summary>
    int32_t getSecond() const;
    bool secondIsSet() const;
    void unsetSecond();
    void setSecond(int32_t value);
    /// <summary>
    /// Day of week
    /// </summary>
    utility::string_t getDayOfWeek() const;
    bool dayOfWeekIsSet() const;
    void unsetDayOfWeek();
    void setDayOfWeek(utility::string_t value);

protected:
    bool m_Successful;
    bool m_SuccessfulIsSet;
    utility::datetime m_ParsedDateResult;
    bool m_ParsedDateResultIsSet;
    int32_t m_Year;
    bool m_YearIsSet;
    int32_t m_Month;
    bool m_MonthIsSet;
    int32_t m_Day;
    bool m_DayIsSet;
    int32_t m_Hour;
    bool m_HourIsSet;
    int32_t m_Minute;
    bool m_MinuteIsSet;
    int32_t m_Second;
    bool m_SecondIsSet;
    utility::string_t m_DayOfWeek;
    bool m_DayOfWeekIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_DateTimeStandardizedParseResponse_H_ */
