// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MFN_Common/MFNCharsetNew.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* MFNCharsetNewProtobuf_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MFNCharsetNewProtobuf_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MFNCharsetNew_2eproto() {
  protobuf_AddDesc_MFNCharsetNew_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MFNCharsetNew.proto");
  GOOGLE_CHECK(file != NULL);
  MFNCharsetNewProtobuf_descriptor_ = file->message_type(0);
  static const int MFNCharsetNewProtobuf_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MFNCharsetNewProtobuf, charset_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MFNCharsetNewProtobuf, charset_position_data_),
  };
  MFNCharsetNewProtobuf_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MFNCharsetNewProtobuf_descriptor_,
      MFNCharsetNewProtobuf::default_instance_,
      MFNCharsetNewProtobuf_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MFNCharsetNewProtobuf, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MFNCharsetNewProtobuf, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MFNCharsetNewProtobuf));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MFNCharsetNew_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MFNCharsetNewProtobuf_descriptor_, &MFNCharsetNewProtobuf::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MFNCharsetNew_2eproto() {
  delete MFNCharsetNewProtobuf::default_instance_;
  delete MFNCharsetNewProtobuf_reflection_;
}

void protobuf_AddDesc_MFNCharsetNew_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023MFNCharsetNew.proto\"L\n\025MFNCharsetNewPr"
    "otobuf\022\024\n\014charset_size\030\001 \001(\r\022\035\n\025charset_"
    "position_data\030\002 \003(\014", 99);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MFNCharsetNew.proto", &protobuf_RegisterTypes);
  MFNCharsetNewProtobuf::default_instance_ = new MFNCharsetNewProtobuf();
  MFNCharsetNewProtobuf::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MFNCharsetNew_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MFNCharsetNew_2eproto {
  StaticDescriptorInitializer_MFNCharsetNew_2eproto() {
    protobuf_AddDesc_MFNCharsetNew_2eproto();
  }
} static_descriptor_initializer_MFNCharsetNew_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int MFNCharsetNewProtobuf::kCharsetSizeFieldNumber;
const int MFNCharsetNewProtobuf::kCharsetPositionDataFieldNumber;
#endif  // !_MSC_VER

MFNCharsetNewProtobuf::MFNCharsetNewProtobuf()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MFNCharsetNewProtobuf::InitAsDefaultInstance() {
}

MFNCharsetNewProtobuf::MFNCharsetNewProtobuf(const MFNCharsetNewProtobuf& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MFNCharsetNewProtobuf::SharedCtor() {
  _cached_size_ = 0;
  charset_size_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MFNCharsetNewProtobuf::~MFNCharsetNewProtobuf() {
  SharedDtor();
}

void MFNCharsetNewProtobuf::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MFNCharsetNewProtobuf::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MFNCharsetNewProtobuf::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MFNCharsetNewProtobuf_descriptor_;
}

const MFNCharsetNewProtobuf& MFNCharsetNewProtobuf::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MFNCharsetNew_2eproto();  return *default_instance_;
}

MFNCharsetNewProtobuf* MFNCharsetNewProtobuf::default_instance_ = NULL;

MFNCharsetNewProtobuf* MFNCharsetNewProtobuf::New() const {
  return new MFNCharsetNewProtobuf;
}

void MFNCharsetNewProtobuf::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    charset_size_ = 0u;
  }
  charset_position_data_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MFNCharsetNewProtobuf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 charset_size = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &charset_size_)));
          set_has_charset_size();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_charset_position_data;
        break;
      }
      
      // repeated bytes charset_position_data = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_charset_position_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_charset_position_data()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_charset_position_data;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void MFNCharsetNewProtobuf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 charset_size = 1;
  if (has_charset_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->charset_size(), output);
  }
  
  // repeated bytes charset_position_data = 2;
  for (int i = 0; i < this->charset_position_data_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->charset_position_data(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MFNCharsetNewProtobuf::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 charset_size = 1;
  if (has_charset_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->charset_size(), target);
  }
  
  // repeated bytes charset_position_data = 2;
  for (int i = 0; i < this->charset_position_data_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBytesToArray(2, this->charset_position_data(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MFNCharsetNewProtobuf::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 charset_size = 1;
    if (has_charset_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->charset_size());
    }
    
  }
  // repeated bytes charset_position_data = 2;
  total_size += 1 * this->charset_position_data_size();
  for (int i = 0; i < this->charset_position_data_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->charset_position_data(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MFNCharsetNewProtobuf::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MFNCharsetNewProtobuf* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MFNCharsetNewProtobuf*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MFNCharsetNewProtobuf::MergeFrom(const MFNCharsetNewProtobuf& from) {
  GOOGLE_CHECK_NE(&from, this);
  charset_position_data_.MergeFrom(from.charset_position_data_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_charset_size()) {
      set_charset_size(from.charset_size());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MFNCharsetNewProtobuf::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MFNCharsetNewProtobuf::CopyFrom(const MFNCharsetNewProtobuf& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MFNCharsetNewProtobuf::IsInitialized() const {
  
  return true;
}

void MFNCharsetNewProtobuf::Swap(MFNCharsetNewProtobuf* other) {
  if (other != this) {
    std::swap(charset_size_, other->charset_size_);
    charset_position_data_.Swap(&other->charset_position_data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MFNCharsetNewProtobuf::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MFNCharsetNewProtobuf_descriptor_;
  metadata.reflection = MFNCharsetNewProtobuf_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)