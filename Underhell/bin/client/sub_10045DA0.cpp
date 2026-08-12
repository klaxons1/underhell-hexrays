_DWORD *__thiscall sub_10045DA0(_DWORD *this)
{
  _DWORD *v2; // edi
  unsigned int v3; // eax
  _DWORD *v4; // ecx
  _DWORD *result; // eax

  v2 = this + 1;
  *this = &fogplayerparams_t::`vftable';
  this[1] = -1;
  v3 = this[1];
  if ( v3 != -1 )
  {
    v4 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[1] & 0xFFF) + 4);
    if ( v4[1] == v3 >> 12 )
    {
      if ( *v4 )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *))*(v2 - 1))(v2 - 1, v2);
        *v2 = -1;
      }
    }
  }
  *((float *)this + 2) = -1.0;
  *((_BYTE *)this + 15) = 0;
  *((_WORD *)this + 6) = 0;
  *((float *)this + 4) = 0.0;
  *((_BYTE *)this + 27) = 0;
  *((float *)this + 5) = 0.0;
  *((_WORD *)this + 12) = 0;
  *((float *)this + 7) = 0.0;
  result = this;
  *((float *)this + 8) = 0.0;
  return result;
}
