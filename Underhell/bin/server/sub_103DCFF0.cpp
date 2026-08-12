int *sub_103DCFF0()
{
  if ( (dword_106ED400 & 1) == 0 )
  {
    dword_106ED400 |= 1u;
    dword_106ED3E4 = (int)"CProtoSniper";
    dword_106ED3EC = 0;
    dword_106ED3F0 = 0;
    dword_106ED3F4 = 0;
    dword_106ED3F8 = 0;
    dword_106ED3FC = 0;
    dword_106ED3E8 = 12;
    atexit(sub_104790F0);
  }
  dword_1067FA1C = (int)&dword_105FE114;
  if ( (dword_106ED400 & 2) == 0 )
  {
    dword_106ED400 |= 2u;
    dword_10680450 = (int)off_10614A2C;
    dword_10680454 = 0;
    dword_10680458 = 0;
    dword_1068045C = 0;
    dword_10680460 = 0;
    dword_10680464 = 0;
    dword_10680468 = 0;
  }
  dword_1067FA14 = 42;
  dword_1067FA10 = (int)&unk_1067FBE4;
  return &dword_1067FA10;
}
