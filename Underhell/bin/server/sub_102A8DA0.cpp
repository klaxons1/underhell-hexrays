char __thiscall sub_102A8DA0(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v7; // eax
  char v8; // [esp+Ch] [ebp+8h]

  v3 = *(_DWORD *)(this + 40);
  if ( v3 == -1 )
    return 0;
  v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 40) & 0xFFF) + 1];
  if ( v4[1] != v3 >> 12 || !*v4 )
    return 0;
  v8 = (*(int (__thiscall **)(_DWORD, int, int, _DWORD))(**(_DWORD **)(this + 4) + 548))(
         *(_DWORD *)(this + 4),
         a2,
         16449,
         0);
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 576))(a2);
  return sub_102AA000(v7, v8);
}
