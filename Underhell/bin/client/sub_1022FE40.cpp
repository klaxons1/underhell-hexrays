_DWORD *__thiscall sub_1022FE40(_DWORD *this, size_t Size)
{
  _DWORD *v4; // edi
  int v5; // eax

  if ( Size > *this )
    return 0;
  v4 = (_DWORD *)this[7];
  if ( !v4 )
  {
    if ( !this[2] )
      return 0;
    sub_1022FD60(this);
    v4 = (_DWORD *)this[7];
    if ( !v4 )
      return 0;
  }
  v5 = ++this[8];
  if ( this[9] > v5 )
    v5 = this[9];
  this[9] = v5;
  this[7] = *v4;
  memset(v4, 0, Size);
  return v4;
}
