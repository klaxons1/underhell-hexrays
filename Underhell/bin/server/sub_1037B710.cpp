_DWORD *__thiscall sub_1037B710(_DWORD *this)
{
  _DWORD *v1; // esi
  char *v2; // eax
  _DWORD *result; // eax
  int i; // ebx
  int *v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // edi
  char *v12; // eax
  int v13; // [esp+4h] [ebp-8h]

  v1 = this;
  v2 = (char *)this[1156];
  if ( !v2 )
    v2 = (char *)String;
  result = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  for ( i = (int)result; result; i = (int)result )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)i + 220))(i) == 6 )
    {
      v5 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)i + 8))(i);
      v6 = v1[1154];
      v13 = *v5;
      v7 = v1[1152];
      if ( v6 + 1 > v7 )
        sub_102ABFC0(v1 + 1151, v6 - v7 + 1);
      ++v1[1154];
      v8 = v1[1151];
      v9 = v1[1154] - v6 - 1;
      v1[1155] = v8;
      if ( v9 > 0 )
        memcpy((void *)(v8 + 4 * v6 + 4), (const void *)(v8 + 4 * v6), 4 * v9);
      v10 = v1[1151];
      v1 = this;
      v11 = (_DWORD *)(v10 + 4 * v6);
      if ( v11 )
        *v11 = v13;
    }
    v12 = (char *)v1[1156];
    if ( !v12 )
      v12 = (char *)String;
    result = sub_1012BF20(&dword_1069E3E0, i, v12, 0, 0, 0, 0);
  }
  if ( (int)v1[1154] < 1 )
    v1[1156] = 0;
  return result;
}
