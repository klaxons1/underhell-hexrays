int *sub_101AAB40()
{
  if ( (dword_106B9438 & 1) == 0 )
  {
    dword_106B9438 |= 1u;
    dword_106B941C = (int)"CNPC_VehicleDriver";
    dword_106B9424 = 0;
    dword_106B9428 = 0;
    dword_106B942C = 0;
    dword_106B9430 = 0;
    dword_106B9434 = 0;
    dword_106B9420 = 18;
    atexit(sub_10472B00);
  }
  dword_10633878 = (int)&dword_105FE114;
  dword_10633870 = 21;
  dword_1063386C = (int)&unk_1063392C;
  return &dword_1063386C;
}
