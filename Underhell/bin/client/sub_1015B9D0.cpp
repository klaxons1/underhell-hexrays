_DWORD *__fastcall sub_1015B9D0(int a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax
  int v4; // ebx
  int v5; // edx
  _DWORD *v6; // esi
  _DWORD *v7; // edi
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // ecx
  int v11; // eax

  result = (_DWORD *)a1;
  v4 = a3[20];
  if ( !*(_BYTE *)(a1 + 28) || dword_103E9144 <= 0 && !byte_103E913C )
  {
    v5 = *(_DWORD *)(a1 + 20);
    v6 = (_DWORD *)(a1 + 8);
    result = 0;
    if ( v5 <= 0 )
      goto LABEL_10;
    v7 = (_DWORD *)*v6;
    while ( *v7 != v4 )
    {
      result = (_DWORD *)((char *)result + 1);
      ++v7;
      if ( (int)result >= v5 )
        goto LABEL_10;
    }
    if ( result == (_DWORD *)-1 )
    {
LABEL_10:
      result = (_DWORD *)sub_10042350(a3);
      if ( (_BYTE)result )
      {
        v8 = v6[3];
        v9 = v6[1];
        if ( v8 + 1 > v9 )
          sub_1010AFF0(v6, v8 - v9 + 1);
        ++v6[3];
        v10 = (_DWORD *)*v6;
        v11 = v6[3] - v8 - 1;
        v6[4] = *v6;
        if ( v11 > 0 )
          memcpy(&v10[v8 + 1], &v10[v8], 4 * v11);
        result = (_DWORD *)(*v6 + 4 * v8);
        if ( result )
          *result = v4;
      }
    }
  }
  return result;
}
