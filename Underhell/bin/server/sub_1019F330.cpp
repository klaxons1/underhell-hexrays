int __thiscall sub_1019F330(int *this)
{
  int *v1; // esi
  int result; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // [esp+4h] [ebp-4h]

  v1 = this + 324;
  this[327] = 0;
  for ( result = dword_10632630; result != -1; result = *(_DWORD *)(v3 + dword_10632624 + 8) )
  {
    v3 = 12 * result;
    v9 = *(_DWORD *)(12 * result + dword_10632624);
    if ( (*(_WORD *)(v9 + 40) & 0x100) != 0 )
    {
      v4 = v1[3];
      v5 = v1[1];
      if ( v4 + 1 > v5 )
        sub_102ABFC0(v4 - v5 + 1);
      ++v1[3];
      v6 = *v1;
      v7 = v1[3] - v4 - 1;
      v1[4] = *v1;
      if ( v7 > 0 )
        memcpy((void *)(v6 + 4 * v4 + 4), (const void *)(v6 + 4 * v4), 4 * v7);
      v8 = (_DWORD *)(*v1 + 4 * v4);
      if ( v8 )
        *v8 = v9;
    }
  }
  return result;
}
