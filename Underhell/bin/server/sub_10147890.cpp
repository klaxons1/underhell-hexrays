char __thiscall sub_10147890(int this, char *String2, int a3)
{
  int *v3; // edx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // edi
  unsigned int v12; // eax
  _DWORD *v13; // ecx
  int v14; // esi
  unsigned __int16 v15; // ax
  int v16; // eax
  int v17; // eax
  int v18; // esi
  _DWORD *v19; // ebx
  char v20[1596]; // [esp+8h] [ebp-8DCh] BYREF
  int v21[133]; // [esp+644h] [ebp-2A0h] BYREF
  float v22; // [esp+858h] [ebp-8Ch]

  v3 = off_1061BE18;
  v5 = *(_DWORD *)(this + 4);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != *(_DWORD *)(this + 4) >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  if ( *(_DWORD *)(v6 + 424) )
  {
    if ( v5 == -1 || off_1061BE18[4 * (v5 & 0xFFF) + 2] != v5 >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * (v5 & 0xFFF) + 1];
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v7 + 424) + 48))(*(_DWORD *)(v7 + 424), 0);
    v3 = off_1061BE18;
  }
  v8 = *(_DWORD *)(this + 4);
  if ( v8 == -1 || v3[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = v3[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 592))(v9);
  if ( sub_10147790(this, String2, v20, (float *)v21) )
  {
    *(float *)(this + 288) = 10000.0;
    if ( v22 > 0.0 )
      *(float *)(this + 288) = 1.0 / v22;
    *(float *)(this + 72) = *(float *)&v21[129];
    v12 = *(_DWORD *)(this + 4);
    if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v12 >> 12 )
      v13 = 0;
    else
      v13 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
    v14 = sub_100E9550(v13, 6, 0, 0, (int)v20);
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 76))(v14);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 72))(v14, v15 | 0x8010);
    v16 = (*(int (__thiscall **)(int, int, int *, int, int (__stdcall ***)(int, int, int)))(*(_DWORD *)dword_106BAFF4
                                                                                          + 124))(
            dword_106BAFF4,
            v14,
            v21,
            a3,
            off_1063AFB8);
    *(_DWORD *)(this + 36) = v16;
    v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 24))(v16);
    v18 = 0;
    *(_DWORD *)(this + 96) = v17;
    if ( v17 > 0 )
    {
      v19 = (_DWORD *)(this + 80);
      do
        *v19++ = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 36) + 28))(*(_DWORD *)(this + 36), v18++);
      while ( v18 < *(_DWORD *)(this + 96) );
    }
    return 1;
  }
  else
  {
    v10 = *(_DWORD *)(this + 4);
    if ( v10 == -1 || off_1061BE18[4 * (v10 & 0xFFF) + 2] != v10 >> 12 )
    {
      sub_1025FAC0(0);
      return 0;
    }
    else
    {
      sub_1025FAC0(off_1061BE18[4 * (v10 & 0xFFF) + 1]);
      return 0;
    }
  }
}
