int __thiscall sub_101BC630(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // [esp-Ch] [ebp-18h]
  _DWORD v10[2]; // [esp+4h] [ebp-8h] BYREF

  if ( !a2 )
    return 0;
  result = *(_DWORD *)(a2 + 172);
  if ( !result )
  {
    v9 = dword_103ED574++;
    sub_101BA320(v10, v9, a2);
    sub_101BC580((int)(this + 2), (int)v10);
    v4 = this[12];
    v5 = this[10];
    if ( v4 + 1 > v5 )
      sub_1010AFF0(this + 9, v4 - v5 + 1);
    ++this[12];
    v6 = this[9];
    v7 = this[12] - v4 - 1;
    this[13] = v6;
    if ( v7 > 0 )
      memcpy((void *)(v6 + 4 * v4 + 4), (const void *)(v6 + 4 * v4), 4 * v7);
    v8 = (_DWORD *)(this[9] + 4 * v4);
    if ( v8 )
      *v8 = v10[0];
    return v10[0];
  }
  return result;
}
