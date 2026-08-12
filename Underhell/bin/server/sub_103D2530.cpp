bool __thiscall sub_103D2530(_DWORD *this)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // eax
  bool result; // al

  v1 = this[103];
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
        v5 = sub_100D7680(v4);
        if ( v5 )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 1528))(v5, 0) )
            return 1;
        }
      }
    }
  }
  return result;
}
