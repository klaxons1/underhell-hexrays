BOOL __thiscall sub_10053130(_DWORD *this)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx
  int v4; // eax
  BOOL result; // eax

  v1 = this[5];
  result = 0;
  if ( v1 != -1 )
  {
    v2 = &off_1061BE18[4 * (v1 & 0xFFF) + 1];
    v3 = v1 >> 12;
    if ( v2[1] == v3 )
    {
      if ( *v2 )
      {
        v4 = v2[1] == v3 ? *v2 : 0;
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
          return 1;
      }
    }
  }
  return result;
}
