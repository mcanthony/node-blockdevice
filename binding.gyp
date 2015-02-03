{
  "targets": [
    {
      "target_name": "BlockDevice",
      "include_dirs" : [
        "<!(node -e \"require('nan')\")"
      ],
      "sources": [
        "src/Main.cc",
        "src/Init.cc",
        "src/BlockDevice.cc"
      ]
    }
  ]
}
