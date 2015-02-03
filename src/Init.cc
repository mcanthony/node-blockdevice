#include <node.h>
#include <v8.h>
#include <nan.h>

#include "BlockDevice.h"

using namespace node;
using namespace v8;

void BlockDevice::Init( Handle<Object> exports ) {
  
  Local<FunctionTemplate> tpl = NanNew<FunctionTemplate>( BlockDevice::New );
  
  tpl->SetClassName( NanNew<String>( "BlockDevice" ) );
  
  // Create constructor function from template
  NanAssignPersistent( BlockDevice::constructor, tpl->GetFunction() );
  // Set module.exports to constructor
  exports->Set( NanNew<String>( "BlockDevice" ), NanNew( BlockDevice::constructor ) );
  
}
