_DWORD *__thiscall sub_1000F870(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // edx
  unsigned int v3; // ecx
  _DWORD *v4; // edx

  result = this;
  if ( this[81] == -1 )
  {
    v2 = 0;
  }
  else if ( *((_DWORD *)off_103DCD74 + 4 * (this[81] & 0xFFF) + 2) == this[81] >> 12 )
  {
    v2 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (this[81] & 0xFFF) + 1);
  }
  else
  {
    v2 = 0;
  }
  while ( v2 )
  {
    v3 = v2[81];
    result = v2;
    if ( v3 == -1 || (v4 = (_DWORD *)((char *)off_103DCD74 + 16 * (v2[81] & 0xFFF) + 4), v4[1] != v3 >> 12) )
      v2 = 0;
    else
      v2 = (_DWORD *)*v4;
  }
  return result;
}
