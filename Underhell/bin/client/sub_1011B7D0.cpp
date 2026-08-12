int __thiscall sub_1011B7D0(int *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int *v5; // ecx
  int result; // eax
  int (__thiscall ***v7)(_DWORD); // ecx
  char *v8; // edi
  char *v9; // eax
  int v10; // ecx
  int v11; // [esp+8h] [ebp-4h]

  v3 = this[12];
  v4 = 0;
  v5 = this + 16;
  v5[3] = 0;
  result = sub_1011B380(v5, 0, v3, 0);
  if ( this[12] > 0 )
  {
    v11 = 0;
    do
    {
      v7 = *(int (__thiscall ****)(_DWORD))(this[9] + 4 * v4);
      v8 = (char *)(v11 + this[16]);
      v9 = (char *)(**v7)(v7);
      sub_102282F0(v8, v9, 0x20u);
      v10 = *(_DWORD *)(this[9] + 4 * v4);
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 4))(v10, a2);
      v11 += 40;
      ++v4;
    }
    while ( v4 < this[12] );
  }
  return result;
}
