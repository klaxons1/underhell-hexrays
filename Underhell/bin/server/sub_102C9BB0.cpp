BOOL __thiscall sub_102C9BB0(_DWORD *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  BOOL result; // eax

  v2 = this[230];
  result = 0;
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        v5 = v3[1] == v4 ? *v3 : 0;
        if ( sub_100D7680(v5) && (this[62] & 0x200) != 0 )
          return 1;
      }
    }
  }
  return result;
}
