int __thiscall sub_102703F0(_DWORD *this, const char *Src)
{
  void *v3; // ecx
  int v4; // eax
  int result; // eax

  v3 = (void *)this[112];
  if ( v3 )
    sub_1022AF00(v3);
  v4 = sub_10229D00(32);
  if ( v4 )
  {
    result = sub_1022B0E0(v4, (int)"Command", "command", Src);
    this[112] = result;
  }
  else
  {
    result = 0;
    this[112] = 0;
  }
  return result;
}
