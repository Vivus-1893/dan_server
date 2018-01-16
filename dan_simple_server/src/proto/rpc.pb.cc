// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc.proto

#include "rpc.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace rpc {
class helloDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<hello>
      _instance;
} _hello_default_instance_;
class hello_rDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<hello_r>
      _instance;
} _hello_r_default_instance_;
}  // namespace rpc
namespace protobuf_rpc_2eproto {
void InitDefaultshelloImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::rpc::_hello_default_instance_;
    new (ptr) ::rpc::hello();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::rpc::hello::InitAsDefaultInstance();
}

void InitDefaultshello() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultshelloImpl);
}

void InitDefaultshello_rImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::rpc::_hello_r_default_instance_;
    new (ptr) ::rpc::hello_r();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::rpc::hello_r::InitAsDefaultInstance();
}

void InitDefaultshello_r() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultshello_rImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::rpc::hello, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::rpc::hello_r, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::rpc::hello_r, ret_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::rpc::hello_r, result_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::rpc::hello)},
  { 5, -1, sizeof(::rpc::hello_r)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::rpc::_hello_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::rpc::_hello_r_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "rpc.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\trpc.proto\022\003rpc\"\007\n\005hello\"&\n\007hello_r\022\013\n\003"
      "ret\030\001 \001(\005\022\016\n\006result\030\002 \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 73);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rpc.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_rpc_2eproto
namespace rpc {

// ===================================================================

void hello::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

hello::hello()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_rpc_2eproto::InitDefaultshello();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:rpc.hello)
}
hello::hello(const hello& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:rpc.hello)
}

void hello::SharedCtor() {
  _cached_size_ = 0;
}

hello::~hello() {
  // @@protoc_insertion_point(destructor:rpc.hello)
  SharedDtor();
}

void hello::SharedDtor() {
}

void hello::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* hello::descriptor() {
  ::protobuf_rpc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_rpc_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const hello& hello::default_instance() {
  ::protobuf_rpc_2eproto::InitDefaultshello();
  return *internal_default_instance();
}

hello* hello::New(::google::protobuf::Arena* arena) const {
  hello* n = new hello;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void hello::Clear() {
// @@protoc_insertion_point(message_clear_start:rpc.hello)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

bool hello::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:rpc.hello)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:rpc.hello)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:rpc.hello)
  return false;
#undef DO_
}

void hello::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:rpc.hello)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:rpc.hello)
}

::google::protobuf::uint8* hello::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:rpc.hello)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:rpc.hello)
  return target;
}

size_t hello::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:rpc.hello)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void hello::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:rpc.hello)
  GOOGLE_DCHECK_NE(&from, this);
  const hello* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const hello>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:rpc.hello)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:rpc.hello)
    MergeFrom(*source);
  }
}

void hello::MergeFrom(const hello& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:rpc.hello)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void hello::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:rpc.hello)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void hello::CopyFrom(const hello& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:rpc.hello)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool hello::IsInitialized() const {
  return true;
}

void hello::Swap(hello* other) {
  if (other == this) return;
  InternalSwap(other);
}
void hello::InternalSwap(hello* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata hello::GetMetadata() const {
  protobuf_rpc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_rpc_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void hello_r::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int hello_r::kRetFieldNumber;
const int hello_r::kResultFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

hello_r::hello_r()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_rpc_2eproto::InitDefaultshello_r();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:rpc.hello_r)
}
hello_r::hello_r(const hello_r& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  result_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.result().size() > 0) {
    result_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.result_);
  }
  ret_ = from.ret_;
  // @@protoc_insertion_point(copy_constructor:rpc.hello_r)
}

void hello_r::SharedCtor() {
  result_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ret_ = 0;
  _cached_size_ = 0;
}

hello_r::~hello_r() {
  // @@protoc_insertion_point(destructor:rpc.hello_r)
  SharedDtor();
}

void hello_r::SharedDtor() {
  result_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void hello_r::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* hello_r::descriptor() {
  ::protobuf_rpc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_rpc_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const hello_r& hello_r::default_instance() {
  ::protobuf_rpc_2eproto::InitDefaultshello_r();
  return *internal_default_instance();
}

hello_r* hello_r::New(::google::protobuf::Arena* arena) const {
  hello_r* n = new hello_r;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void hello_r::Clear() {
// @@protoc_insertion_point(message_clear_start:rpc.hello_r)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  result_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ret_ = 0;
  _internal_metadata_.Clear();
}

bool hello_r::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:rpc.hello_r)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 ret = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ret_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string result = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_result()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->result().data(), static_cast<int>(this->result().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "rpc.hello_r.result"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:rpc.hello_r)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:rpc.hello_r)
  return false;
#undef DO_
}

void hello_r::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:rpc.hello_r)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 ret = 1;
  if (this->ret() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->ret(), output);
  }

  // string result = 2;
  if (this->result().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->result().data(), static_cast<int>(this->result().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "rpc.hello_r.result");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->result(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:rpc.hello_r)
}

::google::protobuf::uint8* hello_r::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:rpc.hello_r)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 ret = 1;
  if (this->ret() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->ret(), target);
  }

  // string result = 2;
  if (this->result().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->result().data(), static_cast<int>(this->result().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "rpc.hello_r.result");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->result(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:rpc.hello_r)
  return target;
}

size_t hello_r::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:rpc.hello_r)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string result = 2;
  if (this->result().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->result());
  }

  // int32 ret = 1;
  if (this->ret() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->ret());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void hello_r::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:rpc.hello_r)
  GOOGLE_DCHECK_NE(&from, this);
  const hello_r* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const hello_r>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:rpc.hello_r)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:rpc.hello_r)
    MergeFrom(*source);
  }
}

void hello_r::MergeFrom(const hello_r& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:rpc.hello_r)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.result().size() > 0) {

    result_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.result_);
  }
  if (from.ret() != 0) {
    set_ret(from.ret());
  }
}

void hello_r::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:rpc.hello_r)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void hello_r::CopyFrom(const hello_r& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:rpc.hello_r)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool hello_r::IsInitialized() const {
  return true;
}

void hello_r::Swap(hello_r* other) {
  if (other == this) return;
  InternalSwap(other);
}
void hello_r::InternalSwap(hello_r* other) {
  using std::swap;
  result_.Swap(&other->result_);
  swap(ret_, other->ret_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata hello_r::GetMetadata() const {
  protobuf_rpc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_rpc_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace rpc

// @@protoc_insertion_point(global_scope)