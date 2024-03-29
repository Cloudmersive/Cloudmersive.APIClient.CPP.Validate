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
 * DateTimeApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_DateTimeApi_H_
#define IO_SWAGGER_CLIENT_API_DateTimeApi_H_


#include "../ApiClient.h"

#include "DateTimeNaturalLanguageParseRequest.h"
#include "DateTimeNowResult.h"
#include "DateTimeStandardizedParseRequest.h"
#include "DateTimeStandardizedParseResponse.h"
#include "GetPublicHolidaysRequest.h"
#include "PublicHolidaysResponse.h"

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  DateTimeApi
{
public:
    DateTimeApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~DateTimeApi();
    /// <summary>
    /// Get current date and time as of now
    /// </summary>
    /// <remarks>
    /// Gets the current date and time.  Response time is syncronized with atomic clocks, and represents a monotonic, centrally available, consistent clock.
    /// </remarks>
    pplx::task<std::shared_ptr<DateTimeNowResult>> dateTimeGetNowSimple(
    );
    /// <summary>
    /// Get public holidays in the specified country and year
    /// </summary>
    /// <remarks>
    /// Enumerates all public holidays in a given country for a given year.  Supports over 100 countries.
    /// </remarks>
    /// <param name="input">Input request</param>
    pplx::task<std::shared_ptr<PublicHolidaysResponse>> dateTimeGetPublicHolidays(
        std::shared_ptr<GetPublicHolidaysRequest> input
    );
    /// <summary>
    /// Parses a free-form natural language date and time string into a date and time
    /// </summary>
    /// <remarks>
    /// Parses an unstructured, free-form, natural language date and time string into a date time object.  This is intended for lightweight human-entered input, such as \&quot;tomorrow at 3pm\&quot; or \&quot;tuesday\&quot;.
    /// </remarks>
    /// <param name="input">Input request</param>
    pplx::task<std::shared_ptr<DateTimeStandardizedParseResponse>> dateTimeParseNaturalLanguageDateTime(
        std::shared_ptr<DateTimeNaturalLanguageParseRequest> input
    );
    /// <summary>
    /// Parses a standardized date and time string into a date and time
    /// </summary>
    /// <remarks>
    /// Parses a structured date and time string into a date time object.  This is intended for standardized date strings that adhere to formatting conventions, rather than natural language input.
    /// </remarks>
    /// <param name="input">Input request</param>
    pplx::task<std::shared_ptr<DateTimeStandardizedParseResponse>> dateTimeParseStandardDateTime(
        std::shared_ptr<DateTimeStandardizedParseRequest> input
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_DateTimeApi_H_ */

