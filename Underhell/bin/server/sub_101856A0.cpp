_WORD *__cdecl sub_101856A0(_DWORD *a1, int a2)
{
  _WORD *result; // eax
  __int16 v3; // bx
  int v4; // edi
  _WORD *v5; // ecx
  int v6; // eax
  _WORD *v7; // ecx
  int v8; // eax

  result = (_WORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3204 + 28))(dword_106B3204, a2);
  v3 = (__int16)result;
  if ( result != (_WORD *)-1 )
  {
    v4 = a1[3];
    result = 0;
    if ( v4 <= 0 )
      goto LABEL_8;
    v5 = (_WORD *)*a1;
    while ( *v5 != v3 )
    {
      result = (_WORD *)((char *)result + 1);
      ++v5;
      if ( (int)result >= v4 )
        goto LABEL_8;
    }
    if ( result == (_WORD *)-1 )
    {
LABEL_8:
      v6 = a1[1];
      if ( v4 + 1 > v6 )
        sub_1009A780(a1, v4 - v6 + 1);
      ++a1[3];
      v7 = (_WORD *)*a1;
      v8 = a1[3] - v4 - 1;
      a1[4] = *a1;
      if ( v8 > 0 )
        memcpy(&v7[v4 + 1], &v7[v4], 2 * v8);
      result = (_WORD *)(*a1 + 2 * v4);
      if ( result )
        *result = v3;
    }
  }
  return result;
}
