/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed in accordance with the terms specified in
 *  the LICENSE file found in the root directory of this source tree.
 */

// Sanity check integration test for memory_device_mapped_addresses
// Spec file: specs/posix/memory_device_mapped_addresses.table

#include <osquery/tests/integration/tables/helper.h>

namespace osquery {
namespace table_tests {

class memoryDeviceMappedAddresses : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};

TEST_F(memoryDeviceMappedAddresses, test_sanity) {
  // 1. Query data
  auto const data = execute_query("select * from memory_device_mapped_addresses");
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidationMap row_map = {
  //      {"handle", NormalType}
  //      {"memory_device_handle", NormalType}
  //      {"memory_array_mapped_address_handle", NormalType}
  //      {"starting_address", NormalType}
  //      {"ending_address", NormalType}
  //      {"partition_row_position", IntType}
  //      {"interleave_position", IntType}
  //      {"interleave_data_depth", IntType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}

} // namespace table_tests
} // namespace osquery
