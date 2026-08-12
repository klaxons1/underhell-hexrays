int *sub_1026D350()
{
  if ( (dword_106CEE64 & 1) == 0 )
  {
    dword_106CEE64 |= 1u;
    dword_106CEE48 = (int)"vehicle_gear_t";
    dword_106CEE50 = 0;
    dword_106CEE54 = 0;
    dword_106CEE58 = 0;
    dword_106CEE5C = 0;
    dword_106CEE60 = 0;
    dword_106CEE4C = 14;
    atexit(sub_10474AB0);
  }
  dword_10654944 = 0;
  dword_1065493C = 3;
  dword_10654938 = (int)&unk_10654BEC;
  return &dword_10654938;
}
