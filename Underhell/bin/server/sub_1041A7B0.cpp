_DWORD *__thiscall sub_1041A7B0(_DWORD *this, int *a2)
{
  _DWORD *result; // eax
  int v3; // ebx
  int v4; // edi
  _DWORD *v5; // ebp
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  bool v9; // zf
  _DWORD *v10; // [esp+4h] [ebp-8h]
  _DWORD *v11; // [esp+8h] [ebp-4h]

  result = (_DWORD *)this[89];
  v3 = 0;
  v10 = this;
  v11 = result;
  if ( (int)result > 0 )
  {
    while ( 1 )
    {
      v4 = a2[3];
      v5 = (_DWORD *)(this[86] + 4 * v3);
      v6 = a2[1];
      if ( v4 + 1 > v6 )
        sub_1044A1C0(v4 - v6 + 1);
      ++a2[3];
      v7 = *a2;
      v8 = a2[3] - v4 - 1;
      v9 = a2[3] - v4 == 1;
      a2[4] = *a2;
      if ( v8 >= 0 && !v9 )
        memcpy((void *)(v7 + 4 * v4 + 4), (const void *)(v7 + 4 * v4), 4 * v8);
      result = (_DWORD *)(*a2 + 4 * v4);
      if ( result )
        *result = *v5;
      if ( ++v3 >= (int)v11 )
        break;
      this = v10;
    }
  }
  return result;
}
