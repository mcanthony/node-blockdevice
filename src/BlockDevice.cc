#include <node.h>
#include <v8.h>
#include <nan.h>

#include "BlockDevice.h"

using namespace node;
using namespace std;
using namespace v8;

BlockDevice::BlockDevice() {}
BlockDevice::~BlockDevice() {}

NAN_METHOD( BlockDevice::New ) {
  
  NanScope();
  Int64* obj = NULL;
  
  // TODO
  
  obj->Wrap( args.This() );
  NanReturnThis();
  
}
