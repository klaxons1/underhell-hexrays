void *__thiscall sub_100BAF60(_DWORD *this, void *a2)
{
  void *result; // eax
  _DWORD *v4; // ecx
  int v5; // ecx

  result = a2;
  if ( a2 == (void *)64 || a2 == (void *)51 )
  {
    v4 = (_DWORD *)this[236];
    if ( v4 )
      result = (void *)sub_100BAC10(v4);
  }
  else if ( a2 != (void *)70 )
  {
    if ( a2 != (void *)67 )
      return (void *)sub_10253880(a2);
    return result;
  }
  v5 = this[236];
  if ( v5 )
    return sub_100BAB40(v5);
  return result;
}
