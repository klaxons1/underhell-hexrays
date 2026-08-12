int *__thiscall sub_10069CF0(_DWORD *this, char *a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int *v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int *result; // eax
  int v16; // [esp+14h] [ebp+8h]

  if ( sub_10229D00(32) )
  {
    v3 = sub_10229D20(a2);
    v16 = v3;
  }
  else
  {
    v16 = 0;
    v3 = 0;
  }
  if ( dword_10413188 )
    v4 = dword_10413188 + 4;
  else
    v4 = 0;
  if ( !(unsigned __int8)sub_10229D70(v4, a2, 0) )
    return (int *)sub_1022AF00(v3);
  for ( ; v3; v3 = sub_1021F0F0(v3) )
  {
    if ( sub_10229C90(v3) )
    {
      v5 = this[10];
      v6 = this[8];
      if ( v5 + 1 > v6 )
        sub_1010AFF0(v5 - v6 + 1);
      ++this[10];
      v7 = this[7];
      v8 = this[10] - v5 - 1;
      this[11] = v7;
      if ( v8 > 0 )
        memcpy((void *)(v7 + 4 * v5 + 4), (const void *)(v7 + 4 * v5), 4 * v8);
      v9 = (int *)(this[7] + 4 * v5);
      if ( v9 )
        *v9 = v3;
    }
  }
  v10 = this[5];
  v11 = this[3];
  if ( v10 + 1 > v11 )
    sub_1010AFF0(v10 - v11 + 1);
  ++this[5];
  v12 = this[2];
  v13 = this[5] - v10 - 1;
  this[6] = v12;
  if ( v13 > 0 )
    memcpy((void *)(v12 + 4 * v10 + 4), (const void *)(v12 + 4 * v10), 4 * v13);
  result = (int *)(this[2] + 4 * v10);
  if ( result )
    *result = v16;
  return result;
}
