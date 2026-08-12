_DWORD *__thiscall sub_1023FA80(_DWORD *this, int *a2)
{
  int v3; // ebx
  _DWORD *result; // eax
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  bool v10; // zf
  _DWORD *v11; // [esp+Ch] [ebp-4h]
  _DWORD *v12; // [esp+14h] [ebp+4h]

  v3 = 0;
  a2[3] = 0;
  result = *(_DWORD **)(this[9] + 36);
  v11 = result;
  if ( (int)result > 0 )
  {
    do
    {
      v6 = a2[3];
      v12 = (_DWORD *)(*(_DWORD *)(this[9] + 24) + 4 * v3);
      v7 = a2[1];
      if ( v6 + 1 > v7 )
        sub_1010AFF0(a2, v6 - v7 + 1);
      ++a2[3];
      v8 = *a2;
      v9 = a2[3] - v6 - 1;
      v10 = a2[3] - v6 == 1;
      a2[4] = *a2;
      if ( v9 >= 0 && !v10 )
        memcpy((void *)(v8 + 4 * v6 + 4), (const void *)(v8 + 4 * v6), 4 * v9);
      result = (_DWORD *)(*a2 + 4 * v6);
      if ( result )
        *result = *v12;
      ++v3;
    }
    while ( v3 < (int)v11 );
  }
  return result;
}
