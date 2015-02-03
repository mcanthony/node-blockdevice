#include <node.h>
#include <v8.h>

#include "BlockDevice.h"

using namespace node;
using namespace v8;

void InitAll( Handle<Object> exports ) {
  BlockDevice::Init( exports );
}

NODE_MODULE( BlockDevice, InitAll )
