/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
*/

#include "../../pcf/aws/AwsSdk.h"

#include <aws/s3/S3Client.h>
#include <gtest/gtest.h>

namespace pcf {
TEST(AwsSdk, aquire) {
  AwsSdk::aquire();
  Aws::S3::S3Client s3Client; // Expectation: no crash
}
} // namespace pcf
