_DWORD *__thiscall sub_100FE100(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // eax

  v2 = (_DWORD *)*this;
  v3 = this[1];
  if ( !*this )
    return 0;
  while ( !(unsigned __int8)ThreadInterlockedAssignIf64(this, *v2, v3 - 1, v2, v3) )
  {
    _mm_pause();
    v2 = (_DWORD *)*this;
    v3 = this[1];
    if ( !*this )
      return 0;
  }
  return v2;
}
