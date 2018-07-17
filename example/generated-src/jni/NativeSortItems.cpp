// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#include "NativeSortItems.hpp"  // my header
#include "NativeItemList.hpp"
#include "NativeSortOrder.hpp"
#include "NativeTextboxListener.hpp"

namespace djinni_generated {

NativeSortItems::NativeSortItems() : ::djinni::JniInterface<::textsort::SortItems, NativeSortItems>("com/dropbox/textsort/SortItems$CppProxy") {}

NativeSortItems::~NativeSortItems() = default;


CJNIEXPORT void JNICALL Java_com_dropbox_textsort_SortItems_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::textsort::SortItems>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_dropbox_textsort_SortItems_00024CppProxy_native_1sort(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_order, jobject j_items)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::textsort::SortItems>(nativeRef);
        ref->sort(::djinni_generated::NativeSortOrder::toCpp(jniEnv, j_order),
                  ::djinni_generated::NativeItemList::toCpp(jniEnv, j_items));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_textsort_SortItems_00024CppProxy_createWithListener(JNIEnv* jniEnv, jobject /*this*/, jobject j_listener)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::textsort::SortItems::create_with_listener(::djinni_generated::NativeTextboxListener::toCpp(jniEnv, j_listener));
        return ::djinni::release(::djinni_generated::NativeSortItems::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_textsort_SortItems_00024CppProxy_runSort(JNIEnv* jniEnv, jobject /*this*/, jobject j_items)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::textsort::SortItems::run_sort(::djinni_generated::NativeItemList::toCpp(jniEnv, j_items));
        return ::djinni::release(::djinni_generated::NativeItemList::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
