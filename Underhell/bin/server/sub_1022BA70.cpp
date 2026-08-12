int *__thiscall sub_1022BA70(_DWORD *this, int a2)
{
  int v3; // ebx
  int *result; // eax
  int v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // eax

  if ( a2 )
    v3 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    v3 = -1;
  a2 = v3;
  result = (int *)sub_10319100(&a2);
  if ( result == (int *)-1 )
  {
    v5 = this[371];
    v6 = this[373];
    if ( v6 + 1 > v5 )
      sub_102ABFC0(v6 - v5 + 1);
    ++this[373];
    v7 = this[370];
    v8 = this[373] - v6 - 1;
    this[374] = v7;
    if ( v8 > 0 )
      memcpy((void *)(v7 + 4 * v6 + 4), (const void *)(v7 + 4 * v6), 4 * v8);
    result = (int *)(this[370] + 4 * v6);
    if ( result )
      *result = v3;
  }
  return result;
}
