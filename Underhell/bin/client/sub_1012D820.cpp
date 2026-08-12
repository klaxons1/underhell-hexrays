char __thiscall sub_1012D820(_DWORD *this, _DWORD *a2)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // ebx
  _DWORD *i; // ecx
  int v8; // edx

  v3 = this[3];
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  v5 = (_DWORD *)*this;
  for ( i = (_DWORD *)*this; *i != *a2; ++i )
  {
    if ( ++v4 >= v3 )
      return 0;
  }
  if ( v4 == -1 )
    return 0;
  v8 = v3 - v4 - 1;
  if ( v8 > 0 )
    memcpy(&v5[v4], &v5[v4 + 1], 4 * v8);
  --this[3];
  return 1;
}
