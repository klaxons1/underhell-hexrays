_DWORD **__thiscall sub_1004DE10(_DWORD *this)
{
  _DWORD **result; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  _DWORD *v5; // eax
  unsigned int v6; // eax
  _DWORD *v7; // ecx

  result = (_DWORD **)this[298];
  if ( result )
  {
    sub_100EA4D0(result, 1, 0);
    sub_100F1F50(0, 0);
    result = (_DWORD **)sub_100F1F50(1, 0);
    this[298] = 0;
  }
  v3 = this[299];
  if ( v3 != -1 )
  {
    result = (_DWORD **)((char *)off_103DCD74 + 16 * (this[299] & 0xFFF) + 4);
    v4 = v3 >> 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (this[299] & 0xFFF) + 2) == v4 )
    {
      if ( *result )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (this[299] & 0xFFF) + 2) == v4 )
          v5 = *result;
        else
          v5 = 0;
        sub_1000DEC0(v5, 0x8000000);
        v6 = this[299];
        if ( v6 == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[299] & 0xFFF) + 2) != v6 >> 12 )
          v7 = 0;
        else
          v7 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (this[299] & 0xFFF) + 1);
        sub_1000FC30(v7, 0);
        sub_10120D80("General.BurningFlesh");
        result = (_DWORD **)sub_10120D80("General.BurningObject");
        this[299] = -1;
      }
    }
  }
  return result;
}
