/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed in accordance with the terms specified in
 *  the LICENSE file found in the root directory of this source tree.
 */

// Sanity check integration test for device_file
// Spec file: specs/sleuthkit/device_file.table

#include <osquery/tests/integration/tables/helper.h>

namespace osquery {
namespace table_tests {

class deviceFile : public testing::Test {
  protected:
    void SetUp() override {
      setUpEnvironment();
    }
};

TEST_F(deviceFile, test_sanity) {
  // 1. Query data
  auto const data = execute_query(
      "select * from device_file where device = '' and partition = ''");
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidationMap row_map = {
  //      {"device", NormalType}
  //      {"partition", NormalType}
  //      {"path", NormalType}
  //      {"filename", NormalType}
  //      {"inode", IntType}
  //      {"uid", IntType}
  //      {"gid", IntType}
  //      {"mode", NormalType}
  //      {"size", IntType}
  //      {"block_size", IntType}
  //      {"atime", IntType}
  //      {"mtime", IntType}
  //      {"ctime", IntType}
  //      {"hard_links", IntType}
  //      {"type", NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}

} // namespace table_tests
} // namespace osquery
