int *__thiscall sub_10202380(_DWORD *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int *result; // eax

  if ( a2 )
    v3 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    v3 = -1;
  v4 = this[4];
  v5 = this[6];
  if ( v5 + 1 > v4 )
    sub_102ABFC0(v5 - v4 + 1);
  ++this[6];
  v6 = this[3];
  v7 = this[6] - v5 - 1;
  this[7] = v6;
  if ( v7 > 0 )
    memcpy((void *)(v6 + 4 * v5 + 4), (const void *)(v6 + 4 * v5), 4 * v7);
  result = (int *)(this[3] + 4 * v5);
  if ( result )
    *result = v3;
  return result;
}
