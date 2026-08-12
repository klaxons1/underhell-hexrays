int __thiscall sub_10098050(_DWORD *this, _DWORD *a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // ebx
  int result; // eax
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax

  v3 = sub_10097990(a2);
  if ( this[23] < v3 && (int)this[24] >= 0 )
  {
    v4 = this[22];
    this[23] = v3;
    v5 = *g_pMemAlloc;
    if ( v4 )
      v6 = (*(int (__stdcall **)(int, int))(v5 + 12))(v4, 5 * v3);
    else
      v6 = (*(int (__stdcall **)(int))(v5 + 4))(5 * v3);
    this[22] = v6;
  }
  v7 = v3 - 1;
  result = this[22];
  for ( this[26] = result; v7 >= 0; --v7 )
  {
    v9 = this[25];
    v10 = this[23];
    if ( v9 + 1 > v10 )
      sub_10094B30(this + 22, v9 - v10 + 1);
    ++this[25];
    v11 = this[22];
    v12 = this[25] - v9 - 1;
    this[26] = v11;
    if ( v12 > 0 )
      memcpy((void *)(v9 + v11 + 4 * v9 + 5), (const void *)(v9 + v11 + 4 * v9), 5 * v12);
    result = sub_1022E7D0((void *)(this[22] + 5 * v9), 5u);
  }
  return result;
}
