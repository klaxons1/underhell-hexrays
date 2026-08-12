int *sub_10305760()
{
  if ( (dword_106E2E48 & 1) == 0 )
  {
    dword_106E2E48 |= 1u;
    dword_106E2E2C = (int)"CAntlionRepellant";
    dword_106E2E34 = 0;
    dword_106E2E38 = 0;
    dword_106E2E3C = 0;
    dword_106E2E40 = 0;
    dword_106E2E44 = 0;
    dword_106E2E30 = 17;
    atexit(sub_10477840);
  }
  dword_1066A970 = (int)&dword_1060F348;
  dword_1066A968 = 4;
  dword_1066A964 = (int)&unk_1066B5FC;
  return &dword_1066A964;
}
