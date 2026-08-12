int *sub_102B52D0()
{
  if ( (dword_106DC18C & 1) == 0 )
  {
    dword_106DC18C |= 1u;
    dword_106DC170 = (int)"washentity_t";
    dword_106DC178 = 0;
    dword_106DC17C = 0;
    dword_106DC180 = 0;
    dword_106DC184 = 0;
    dword_106DC188 = 0;
    dword_106DC174 = 12;
    atexit(sub_10476930);
  }
  dword_10660BD0 = 0;
  dword_10660BC8 = 2;
  dword_10660BC4 = (int)asc_10660CFC;
  return &dword_10660BC4;
}
