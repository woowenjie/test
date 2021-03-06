// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lm.person.proto

#ifndef PROTOBUF_lm_2eperson_2eproto__INCLUDED
#define PROTOBUF_lm_2eperson_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "lm.common.pb.h"
// @@protoc_insertion_point(includes)

namespace lm {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_lm_2eperson_2eproto();
void protobuf_AssignDesc_lm_2eperson_2eproto();
void protobuf_ShutdownFile_lm_2eperson_2eproto();

class Person;

// ===================================================================

class Person : public ::google::protobuf::Message {
 public:
  Person();
  virtual ~Person();
  
  Person(const Person& from);
  
  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Person& default_instance();
  
  void Swap(Person* other);
  
  // implements Message ----------------------------------------------
  
  Person* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Person& from);
  void MergeFrom(const Person& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // required int32 id = 2;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 2;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);
  
  // repeated .lm.PhoneNumber phone = 3;
  inline int phone_size() const;
  inline void clear_phone();
  static const int kPhoneFieldNumber = 3;
  inline const ::lm::PhoneNumber& phone(int index) const;
  inline ::lm::PhoneNumber* mutable_phone(int index);
  inline ::lm::PhoneNumber* add_phone();
  inline const ::google::protobuf::RepeatedPtrField< ::lm::PhoneNumber >&
      phone() const;
  inline ::google::protobuf::RepeatedPtrField< ::lm::PhoneNumber >*
      mutable_phone();
  
  // optional string email = 4;
  inline bool has_email() const;
  inline void clear_email();
  static const int kEmailFieldNumber = 4;
  inline const ::std::string& email() const;
  inline void set_email(const ::std::string& value);
  inline void set_email(const char* value);
  inline void set_email(const char* value, size_t size);
  inline ::std::string* mutable_email();
  inline ::std::string* release_email();
  
  // @@protoc_insertion_point(class_scope:lm.Person)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_email();
  inline void clear_has_email();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* name_;
  ::google::protobuf::RepeatedPtrField< ::lm::PhoneNumber > phone_;
  ::std::string* email_;
  ::google::protobuf::int32 id_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_lm_2eperson_2eproto();
  friend void protobuf_AssignDesc_lm_2eperson_2eproto();
  friend void protobuf_ShutdownFile_lm_2eperson_2eproto();
  
  void InitAsDefaultInstance();
  static Person* default_instance_;
};
// ===================================================================


// ===================================================================

// Person

// required string name = 1;
inline bool Person::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Person::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Person::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Person::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Person::name() const {
  return *name_;
}
inline void Person::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Person::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Person::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Person::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* Person::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required int32 id = 2;
inline bool Person::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Person::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Person::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Person::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Person::id() const {
  return id_;
}
inline void Person::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// repeated .lm.PhoneNumber phone = 3;
inline int Person::phone_size() const {
  return phone_.size();
}
inline void Person::clear_phone() {
  phone_.Clear();
}
inline const ::lm::PhoneNumber& Person::phone(int index) const {
  return phone_.Get(index);
}
inline ::lm::PhoneNumber* Person::mutable_phone(int index) {
  return phone_.Mutable(index);
}
inline ::lm::PhoneNumber* Person::add_phone() {
  return phone_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::lm::PhoneNumber >&
Person::phone() const {
  return phone_;
}
inline ::google::protobuf::RepeatedPtrField< ::lm::PhoneNumber >*
Person::mutable_phone() {
  return &phone_;
}

// optional string email = 4;
inline bool Person::has_email() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Person::set_has_email() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Person::clear_has_email() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Person::clear_email() {
  if (email_ != &::google::protobuf::internal::kEmptyString) {
    email_->clear();
  }
  clear_has_email();
}
inline const ::std::string& Person::email() const {
  return *email_;
}
inline void Person::set_email(const ::std::string& value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(value);
}
inline void Person::set_email(const char* value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(value);
}
inline void Person::set_email(const char* value, size_t size) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Person::mutable_email() {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  return email_;
}
inline ::std::string* Person::release_email() {
  clear_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = email_;
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace lm

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_lm_2eperson_2eproto__INCLUDED
