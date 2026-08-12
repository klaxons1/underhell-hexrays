BOOL __thiscall sub_102CA2D0(_DWORD *this)
{
  BOOL result; // eax
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // eax

  result = sub_102C9BB0(this);
  if ( result )
  {
    v3 = this[230];
    if ( v3 == -1 || off_1061BE18[4 * (this[230] & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (this[230] & 0xFFF) + 1];
    v5 = sub_100D7680(v4);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 368))(v5) != 0;
  }
  return result;
}
