_WORD *__thiscall sub_100800F0(int *this, int a2, int a3)
{
  char v3; // al
  char v5; // cl
  __int16 v6; // bx
  int v7; // eax
  int *v8; // esi
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  _WORD *result; // eax

  v3 = a3;
  v5 = 16;
  if ( a3 == 9 )
  {
    v3 = 8;
    v5 = 17;
  }
  sub_1007FFC0(this, a2, v3, v5);
  v6 = *(_WORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2);
  v7 = this[87];
  v8 = this + 86;
  v9 = this[89];
  if ( v9 + 1 > v7 )
    sub_1007D060(v8, v9 - v7 + 1);
  ++v8[3];
  v10 = *v8;
  v11 = v8[3] - v9 - 1;
  v8[4] = *v8;
  if ( v11 > 0 )
    memcpy((void *)(v10 + 2 * v9 + 2), (const void *)(v10 + 2 * v9), 2 * v11);
  result = (_WORD *)(*v8 + 2 * v9);
  if ( result )
    *result = v6;
  return result;
}
