/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed in accordance with the terms specified in
 *  the LICENSE file found in the root directory of this source tree.
 */

#pragma once

 #include <string>
 #include <CoreFoundation/CoreFoundation.h>

namespace osquery {

/**
 * @brief Convert a CFAbsoluteTime to a std::string.
 */
std::string stringFromCFAbsoluteTime(const CFDataRef& cf_abstime);


}
