_DWORD *__thiscall sub_1023CC80(_DWORD *this)
{
  int v2; // edx
  int v3; // esi
  bool v4; // zf
  _DWORD *v5; // eax
  int *v7; // eax
  int v8; // ecx

  v2 = this[4];
  if ( v2 == 16 || v2 == 1024 )
  {
    if ( *this != -1 )
    {
      v7 = &off_1061BE18[4 * (*this & 0xFFF) + 1];
      v8 = *this >> 12;
      if ( off_1061BE18[4 * (*this & 0xFFF) + 2] == v8 )
      {
        if ( *v7 )
        {
          if ( off_1061BE18[4 * (*this & 0xFFF) + 2] == v8 )
            v3 = *v7;
          else
            v3 = 0;
          v4 = (*(_DWORD *)(v3 + 252) & 0x800) == 0;
          goto LABEL_19;
        }
      }
    }
    return this + 9;
  }
  if ( (v2 & 0x1000000) == 0
    || *this == -1
    || off_1061BE18[4 * (*this & 0xFFF) + 2] != *this >> 12
    || !off_1061BE18[4 * (*this & 0xFFF) + 1] )
  {
    if ( (v2 & 8) != 0 && (v2 & 0x100000) != 0 && sub_1026A890(this) )
    {
      v5 = (_DWORD *)sub_1026A890(this);
      return sub_10019640(v5);
    }
    return this + 9;
  }
  v3 = sub_1026A890(this);
  v4 = (*(_DWORD *)(v3 + 252) & 0x800) == 0;
LABEL_19:
  if ( !v4 )
    sub_100DAE60(v3);
  return (_DWORD *)(v3 + 580);
}
