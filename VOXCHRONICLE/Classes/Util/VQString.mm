//
//  VQString.cpp
//  VOXCHRONICLE
//
//  Created by giginet on 2013/2/6.
//
//

#include "VQString.h"

struct VQString::NSStringWrapper {
  NSString* nsstring;
};

VQString* VQString::create() {
  VQString* string = new VQString("");
  string->autorelease();
  return string;
}

VQString* VQString::create(const char *str) {
  VQString* string = new VQString(str);
  string->autorelease();
  return string;
}

VQString::VQString(const char* str) : _string(new NSStringWrapper) {
  _string->nsstring = [NSString stringWithCString:str encoding:NSUTF8StringEncoding];
  [_string->nsstring retain];
}

VQString::~VQString() {
  [_string->nsstring release];
}

VQString* VQString::substringWithRange(unsigned int loc, unsigned int len) {
  NSRange range = NSMakeRange(loc, len);
  NSString* substr = [_string->nsstring substringWithRange:range];
  return VQString::create([substr cStringUsingEncoding:NSUTF8StringEncoding]);
}

unsigned int VQString::length() {
  return [_string->nsstring length];
}

string VQString::getString() {
  return [_string->nsstring cStringUsingEncoding:NSUTF8StringEncoding];
}

const char* VQString::getCString() {
  return this->getString().c_str();
}