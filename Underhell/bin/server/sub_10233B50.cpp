int *__thiscall sub_10233B50(_DWORD *this)
{
  int *result; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  int v5; // eax

  result = (int *)sub_100EC3F0(this, 0, 0.0, 0);
  this[908] = 1;
  v3 = this[605];
  if ( v3 != -1 )
  {
    result = &off_1061BE18[4 * (this[605] & 0xFFF) + 1];
    v4 = v3 >> 12;
    if ( off_1061BE18[4 * (this[605] & 0xFFF) + 2] == v4 )
    {
      if ( *result )
      {
        if ( off_1061BE18[4 * (this[605] & 0xFFF) + 2] == v4 )
          v5 = *result;
        else
          v5 = 0;
        result = (int *)sub_100D7680(v5);
        if ( dword_106C4714 > 0 )
          return (int *)(*(int (__thiscall **)(int *, int, _DWORD, _DWORD))(*result + 896))(
                          result,
                          dword_106C4714,
                          0,
                          0);
      }
    }
  }
  return result;
}
