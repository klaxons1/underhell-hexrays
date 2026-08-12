_DWORD *__thiscall sub_1022FF30(_DWORD *this)
{
  _DWORD *result; // eax
  int v3; // ecx

  result = (_DWORD *)this[7];
  if ( !result )
  {
    if ( !this[2] )
      return 0;
    sub_1022FD60(this);
    result = (_DWORD *)this[7];
    if ( !result )
      return 0;
  }
  v3 = ++this[8];
  if ( this[9] > v3 )
    v3 = this[9];
  this[9] = v3;
  this[7] = *result;
  return result;
}
