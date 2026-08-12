void sub_1002FE90()
{
  int v0; // ecx
  __int32 v1; // eax
  _DWORD v2[3]; // [esp+4h] [ebp-14h] BYREF
  __int32 v3[2]; // [esp+10h] [ebp-8h] BYREF

  byte_10403660 = *(_DWORD *)(dword_10403914 + 48) != 0;
  if ( byte_10403660 )
  {
    v0 = dword_104037F8;
    if ( dword_104037F8 > 1 )
    {
      v1 = dword_104037EC;
      byte_10403661 = 1;
      v3[0] = 0;
      v3[1] = 0;
      _InterlockedExchange(v3, 0);
      v2[0] = sub_100287B0;
      v2[1] = sub_1007CE40;
      v2[2] = sub_1007CE20;
      sub_1002EF50((int)v2, v1, v0, 0x7FFFFFFF, 0);
      byte_10403661 = 0;
    }
  }
  ++dword_103D7BC0;
  dword_104037F8 = 0;
}
