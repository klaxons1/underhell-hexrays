int *__thiscall sub_10014020(_DWORD *this, int a2)
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
  result = (int *)sub_1005DD80(&a2);
  if ( result == (int *)-1 )
  {
    v5 = this[1071];
    v6 = this[1073];
    if ( v6 + 1 > v5 )
      sub_1010AFF0(v6 - v5 + 1);
    ++this[1073];
    v7 = this[1070];
    v8 = this[1073] - v6 - 1;
    this[1074] = v7;
    if ( v8 > 0 )
      memcpy((void *)(v7 + 4 * v6 + 4), (const void *)(v7 + 4 * v6), 4 * v8);
    result = (int *)(this[1070] + 4 * v6);
    if ( result )
      *result = v3;
  }
  return result;
}
