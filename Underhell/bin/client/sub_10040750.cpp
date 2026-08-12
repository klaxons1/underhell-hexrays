_DWORD *__thiscall sub_10040750(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // ecx
  _DWORD *result; // eax
  _DWORD *v5; // edx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // ecx
  int v9; // eax

  v2 = this + 643;
  v3 = this[646];
  result = 0;
  if ( v3 <= 0 )
    goto LABEL_7;
  v5 = (_DWORD *)*v2;
  while ( *v5 != a2 )
  {
    result = (_DWORD *)((char *)result + 1);
    ++v5;
    if ( (int)result >= v3 )
      goto LABEL_7;
  }
  if ( result == (_DWORD *)-1 )
  {
LABEL_7:
    v6 = v2[1];
    v7 = v3;
    if ( v3 + 1 > v6 )
      sub_1010AFF0(v3 - v6 + 1);
    ++v2[3];
    v8 = (_DWORD *)*v2;
    v9 = v2[3] - v7 - 1;
    v2[4] = *v2;
    if ( v9 > 0 )
      memcpy(&v8[v7 + 1], &v8[v7], 4 * v9);
    result = (_DWORD *)(*v2 + 4 * v7);
    if ( result )
      *result = a2;
  }
  return result;
}
