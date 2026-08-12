_DWORD *__thiscall sub_102769C0(_DWORD *this, int *a2)
{
  int v3; // ebp
  _DWORD *result; // eax
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // ebx
  int v8; // ecx
  int v9; // eax
  bool v10; // zf
  _DWORD *v11; // [esp+8h] [ebp-4h]
  _DWORD *v12; // [esp+10h] [ebp+4h]

  v3 = 0;
  a2[3] = 0;
  result = (_DWORD *)this[72];
  v11 = this;
  v12 = result;
  if ( (int)result > 0 )
  {
    while ( 1 )
    {
      v5 = a2[3];
      v6 = a2[1];
      v7 = (_DWORD *)(*(_DWORD *)(this[69] + 4 * v3) + 208);
      if ( v5 + 1 > v6 )
        sub_1010AFF0(a2, v5 - v6 + 1);
      ++a2[3];
      v8 = *a2;
      v9 = a2[3] - v5 - 1;
      v10 = a2[3] - v5 == 1;
      a2[4] = *a2;
      if ( v9 >= 0 && !v10 )
        memcpy((void *)(v8 + 4 * v5 + 4), (const void *)(v8 + 4 * v5), 4 * v9);
      result = (_DWORD *)(*a2 + 4 * v5);
      if ( result )
        *result = *v7;
      if ( ++v3 >= (int)v12 )
        break;
      this = v11;
    }
  }
  return result;
}
