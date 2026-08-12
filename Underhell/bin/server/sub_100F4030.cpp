int __thiscall sub_100F4030(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  int result; // eax
  unsigned int v6; // edx
  int *v7; // ecx
  unsigned int v8; // edx
  int v9; // ecx

  v2 = this[534];
  if ( v2 != -1 && (v3 = &off_1061BE18[4 * (this[534] & 0xFFF) + 1], v3[1] == v2 >> 12) && (v4 = *v3) != 0 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 288))(v4);
    if ( result )
      return result;
  }
  else
  {
    result = 0;
  }
  v6 = this[103];
  if ( v6 != -1 )
  {
    v7 = &off_1061BE18[4 * (this[103] & 0xFFF) + 1];
    v8 = v6 >> 12;
    if ( off_1061BE18[4 * (this[103] & 0xFFF) + 2] == v8 )
    {
      if ( *v7 )
      {
        if ( off_1061BE18[4 * (this[103] & 0xFFF) + 2] == v8 && (v9 = *v7) != 0 )
          return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 288))(v9);
        else
          return 0;
      }
    }
  }
  return result;
}
