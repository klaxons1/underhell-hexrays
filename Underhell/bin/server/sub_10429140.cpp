_DWORD *__thiscall sub_10429140(_DWORD *this)
{
  unsigned int v2; // esi
  int *v3; // edi
  _DWORD *result; // eax
  _DWORD *v5; // ecx
  bool v6; // zf

  v2 = 0;
  v3 = this + 1;
  do
  {
    if ( *v3 && !*((_BYTE *)this + v2 + 324) )
      sub_10184660(*v3);
    ++v2;
    ++v3;
  }
  while ( v2 < 0x40 );
  result = (_DWORD *)*this;
  if ( *this )
  {
    do
    {
      v5 = (_DWORD *)*result;
      v6 = *result == 0;
      *result = 0;
      result[1] = 0;
      result[2] = 0;
      result = v5;
    }
    while ( !v6 );
  }
  *this = 0;
  return result;
}
