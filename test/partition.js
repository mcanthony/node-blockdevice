var assert = require( 'assert' )
var BlockDevice = require( '..' )

describe( 'BlockDevice::Partition', function() {
  
  it( 'segment a device into partitions' )
  it( 'only allow partitioning along blocks' )
  it( 'read from a partition' )
  it( 'write to a partition' )
  it( 'only read within partition bounds' )
  it( 'only write within partition bounds' )
  
  it( 'error on OOB partition' )
  it( 'error on OOB read' )
  it( 'error on OOB write' )
  it( 'error on non-multiple of block size read' )
  it( 'error on non-multiple of block size write' )
  
})
