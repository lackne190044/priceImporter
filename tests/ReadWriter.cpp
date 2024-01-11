#include "../src/FileReaderWriter.hpp"
#include <gtest/gtest.h>

TEST(ReaderWriterTest, DummyTest) {
    ASSERT_EQ(1, 1);
}

TEST(ReaderWriterTest, Initialize) {
    FileReaderWriter readerWriter = new FileReaderWriter("foo.txt");
    EXPECT_TRUE(readerWriter& != nullptr);
}

TEST(ReaderWriterTest, ReadFile) {
    FileReaderWriter readerWriter = new FileReaderWriter("foo.txt");
    ASSERT_EQ(readerWriter.readFile(), "bar!\n")
}
