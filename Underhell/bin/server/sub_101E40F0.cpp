bool __thiscall sub_101E40F0(void *this, _DWORD *a2)
{
  bool result; // al
  int v4; // edx
  unsigned int v5; // eax
  int v6; // edx
  int v7; // eax
  unsigned int v8; // eax
  _DWORD *v9; // eax

  if ( !sub_10117A00() )
    return 1;
  if ( a2[10] == -1 || off_1061BE18[4 * (a2[10] & 0xFFF) + 2] != a2[10] >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (a2[10] & 0xFFF) + 1];
  result = 1;
  if ( (void *)v4 != this
    || ((v5 = a2[11], v5 == -1) || off_1061BE18[4 * (a2[11] & 0xFFF) + 2] != v5 >> 12
      ? (v6 = 0)
      : (v6 = off_1061BE18[4 * (a2[11] & 0xFFF) + 1]),
        (void *)v6 != this) )
  {
    v7 = a2[16];
    if ( (v7 & 0x1000029) == 0 )
    {
      if ( v7 )
        return 0;
    }
    if ( (v7 & 1) != 0 )
    {
      v8 = a2[11];
      if ( v8 == -1 )
        return 0;
      if ( off_1061BE18[4 * (a2[11] & 0xFFF) + 2] != v8 >> 12 )
        return 0;
      if ( !off_1061BE18[4 * (a2[11] & 0xFFF) + 1] )
        return 0;
      v9 = (_DWORD *)sub_1001E870(a2);
      if ( !sub_100E8AC0(v9) )
        return 0;
    }
  }
  return result;
}
