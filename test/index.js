var assert = require( 'assert' )
var BlockDevice = require( '..' )

describe( 'BlockDevice', function() {
  
  it( 'open a device' )
  it( 'determine the device size' )
  it( 'determine the block size' )
  it( 'read from the device' )
  it( 'write to the device' )
  
  it( 'error non-existant device' )
  it( 'error on OOB read' )
  it( 'error on OOB write' )
  it( 'error on non-multiple of block size read' )
  it( 'error on non-multiple of block size write' )
  
})
