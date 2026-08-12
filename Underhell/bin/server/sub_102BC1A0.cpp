char __thiscall sub_102BC1A0(int *this, int a2)
{
  unsigned int *v3; // eax
  unsigned int v4; // ecx
  int *v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int *v9; // esi
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  int *v13; // eax
  _BYTE v15[44]; // [esp+8h] [ebp-54h] BYREF
  float v16; // [esp+34h] [ebp-28h]
  char v17; // [esp+3Eh] [ebp-1Eh]
  char v18; // [esp+3Fh] [ebp-1Dh]

  if ( a2 != this[6] )
  {
    (*(void (__thiscall **)(int, int, int, int, _BYTE *))(*(_DWORD *)dword_106B31F4 + 8))(
      dword_106B31F4,
      this[8],
      this[7],
      a2,
      v15);
    if ( v16 < 1.0 || v18 || v17 )
    {
      v3 = (unsigned int *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
      v4 = *v3;
      if ( *v3 != -1 && (v5 = &dword_1069E3E4[4 * (*v3 & 0xFFF)], v5[1] == v4 >> 12) && (v6 = *v5) != 0 )
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 20))(v6);
      else
        v7 = 0;
      v8 = this[2];
      v9 = this + 1;
      v10 = this[4];
      if ( v10 + 1 > v8 )
        sub_102ABFC0(v9, v10 - v8 + 1);
      ++v9[3];
      v11 = *v9;
      v12 = v9[3] - v10 - 1;
      v9[4] = *v9;
      if ( v12 > 0 )
        memcpy((void *)(v11 + 4 * v10 + 4), (const void *)(v11 + 4 * v10), 4 * v12);
      v13 = (int *)(*v9 + 4 * v10);
      if ( v13 )
        *v13 = v7;
    }
  }
  return 1;
}
