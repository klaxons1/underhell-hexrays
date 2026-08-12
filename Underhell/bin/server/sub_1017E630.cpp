int *__thiscall sub_1017E630(_DWORD *this, int a2)
{
  int v2; // edi
  int v3; // ebx
  int *result; // eax
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax

  v2 = a2;
  v3 = -1;
  if ( a2 )
    a2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    a2 = -1;
  result = (int *)sub_10319100(&a2);
  if ( result == (int *)-1 )
  {
    if ( v2 )
      v3 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
    v6 = this[204];
    v7 = this[202];
    if ( v6 + 1 > v7 )
      sub_102ABFC0(v6 - v7 + 1);
    ++this[204];
    v8 = this[201];
    v9 = this[204] - v6 - 1;
    this[205] = v8;
    if ( v9 > 0 )
      memcpy((void *)(v8 + 4 * v6 + 4), (const void *)(v8 + 4 * v6), 4 * v9);
    result = (int *)(this[201] + 4 * v6);
    if ( result )
      *result = v3;
  }
  return result;
}
