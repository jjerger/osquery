/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed in accordance with the terms specified in
 *  the LICENSE file found in the root directory of this source tree.
 */

// Sanity check integration test for wifi_survey
// Spec file: specs/darwin/wifi_scan.table

#include <osquery/tests/integration/tables/helper.h>

namespace osquery {
namespace table_tests {

class wifiSurvey : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};

TEST_F(wifiSurvey, test_sanity) {
  // 1. Query data
  auto const data = execute_query("select * from wifi_survey");
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidationMap row_map = {
  //      {"interface", NormalType}
  //      {"ssid", NormalType}
  //      {"bssid", NormalType}
  //      {"network_name", NormalType}
  //      {"country_code", NormalType}
  //      {"rssi", IntType}
  //      {"noise", IntType}
  //      {"channel", IntType}
  //      {"channel_width", IntType}
  //      {"channel_band", IntType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}

} // namespace table_tests
} // namespace osquery
