// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CHAT_MOD_PROTO_H_
#define FLATBUFFERS_GENERATED_CHAT_MOD_PROTO_H_

#include "flatbuffers/flatbuffers.h"

namespace Mod {
namespace proto {

struct Chat;
struct ChatBuilder;
struct ChatT;

struct ChatT : public flatbuffers::NativeTable {
  typedef Chat TableType;
  std::string displayName;
  std::string content;
  ChatT() {
  }
};

struct Chat FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ChatT NativeTableType;
  typedef ChatBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_DISPLAYNAME = 4,
    VT_CONTENT = 6
  };
  const flatbuffers::String *displayName() const {
    return GetPointer<const flatbuffers::String *>(VT_DISPLAYNAME);
  }
  const flatbuffers::String *content() const {
    return GetPointer<const flatbuffers::String *>(VT_CONTENT);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_DISPLAYNAME) &&
           verifier.VerifyString(displayName()) &&
           VerifyOffset(verifier, VT_CONTENT) &&
           verifier.VerifyString(content()) &&
           verifier.EndTable();
  }
  ChatT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ChatT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Chat> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ChatT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ChatBuilder {
  typedef Chat Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_displayName(flatbuffers::Offset<flatbuffers::String> displayName) {
    fbb_.AddOffset(Chat::VT_DISPLAYNAME, displayName);
  }
  void add_content(flatbuffers::Offset<flatbuffers::String> content) {
    fbb_.AddOffset(Chat::VT_CONTENT, content);
  }
  explicit ChatBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ChatBuilder &operator=(const ChatBuilder &);
  flatbuffers::Offset<Chat> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Chat>(end);
    return o;
  }
};

inline flatbuffers::Offset<Chat> CreateChat(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> displayName = 0,
    flatbuffers::Offset<flatbuffers::String> content = 0) {
  ChatBuilder builder_(_fbb);
  builder_.add_content(content);
  builder_.add_displayName(displayName);
  return builder_.Finish();
}

inline flatbuffers::Offset<Chat> CreateChatDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *displayName = nullptr,
    const char *content = nullptr) {
  auto displayName__ = displayName ? _fbb.CreateString(displayName) : 0;
  auto content__ = content ? _fbb.CreateString(content) : 0;
  return Mod::proto::CreateChat(
      _fbb,
      displayName__,
      content__);
}

flatbuffers::Offset<Chat> CreateChat(flatbuffers::FlatBufferBuilder &_fbb, const ChatT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline ChatT *Chat::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<Mod::proto::ChatT> _o = std::unique_ptr<Mod::proto::ChatT>(new ChatT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Chat::UnPackTo(ChatT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = displayName(); if (_e) _o->displayName = _e->str(); }
  { auto _e = content(); if (_e) _o->content = _e->str(); }
}

inline flatbuffers::Offset<Chat> Chat::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ChatT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateChat(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Chat> CreateChat(flatbuffers::FlatBufferBuilder &_fbb, const ChatT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ChatT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _displayName = _o->displayName.empty() ? 0 : _fbb.CreateString(_o->displayName);
  auto _content = _o->content.empty() ? 0 : _fbb.CreateString(_o->content);
  return Mod::proto::CreateChat(
      _fbb,
      _displayName,
      _content);
}

inline const Mod::proto::Chat *GetChat(const void *buf) {
  return flatbuffers::GetRoot<Mod::proto::Chat>(buf);
}

inline const Mod::proto::Chat *GetSizePrefixedChat(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<Mod::proto::Chat>(buf);
}

inline bool VerifyChatBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Mod::proto::Chat>(nullptr);
}

inline bool VerifySizePrefixedChatBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Mod::proto::Chat>(nullptr);
}

inline void FinishChatBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Mod::proto::Chat> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedChatBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Mod::proto::Chat> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<Mod::proto::ChatT> UnPackChat(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<Mod::proto::ChatT>(GetChat(buf)->UnPack(res));
}

inline std::unique_ptr<Mod::proto::ChatT> UnPackSizePrefixedChat(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<Mod::proto::ChatT>(GetSizePrefixedChat(buf)->UnPack(res));
}

}  // namespace proto
}  // namespace Mod

#endif  // FLATBUFFERS_GENERATED_CHAT_MOD_PROTO_H_
