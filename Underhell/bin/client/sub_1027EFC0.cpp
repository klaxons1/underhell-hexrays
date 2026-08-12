void __thiscall sub_1027EFC0(int (__thiscall ****this)(void *, int, int))
{
  int (__thiscall **v2)(void *, int, int); // eax
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // [esp+D0h] [ebp-3Ch] BYREF
  char ArgList[4]; // [esp+D4h] [ebp-38h] BYREF
  int v11; // [esp+D8h] [ebp-34h] BYREF
  int v12; // [esp+DCh] [ebp-30h] BYREF
  int v13; // [esp+E0h] [ebp-2Ch] BYREF
  int v14; // [esp+E4h] [ebp-28h] BYREF
  int v15; // [esp+E8h] [ebp-24h] BYREF
  int v16; // [esp+ECh] [ebp-20h] BYREF
  int v17; // [esp+F0h] [ebp-1Ch] BYREF
  int v18; // [esp+F4h] [ebp-18h] BYREF
  char Buffer[20]; // [esp+F8h] [ebp-14h] BYREF

  if ( *((_BYTE *)this + 192) )
  {
    v2 = (*this)[16];
    if ( this[27] == this[18] )
    {
      ((void (__stdcall *)(_DWORD))v2)(0);
    }
    else
    {
      ((void (__stdcall *)(int))v2)(1);
      sub_10236250(this[27], (int)&v18, (int)&v17, (int)&v15, (int)&v16);
      sub_10236F60((int (__thiscall ***)(void *, int *, int *))this[27], &v18, &v17);
      sub_10236250(this[18], (int)ArgList, (int)&v9, (int)&v14, (int)&v13);
      v3 = dword_1047CA6C;
      v4 = *(_DWORD *)dword_1047CA6C;
      v5 = ((int (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD))**this[27])(this[27], 0);
      (*(void (__thiscall **)(int, int))(v4 + 32))(v3, v5);
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 44))(
        dword_1047CA6C,
        255,
        255,
        255,
        255);
      (*(void (__thiscall **)(int, _DWORD, int, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 48))(
        dword_1047CA6C,
        0,
        v9,
        *(_DWORD *)ArgList,
        v9 + 1);
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
        dword_1047CA6C,
        v14 + *(_DWORD *)ArgList,
        v9,
        v15,
        v9 + 1);
      (*(void (__thiscall **)(int, _DWORD, int, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 48))(
        dword_1047CA6C,
        0,
        v9 + v13 - 1,
        *(_DWORD *)ArgList,
        v9 + v13);
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
        dword_1047CA6C,
        v14 + *(_DWORD *)ArgList,
        v13 + v9 - 1,
        v15,
        v13 + v9);
      (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
        dword_1047CA6C,
        *(_DWORD *)ArgList,
        0,
        *(_DWORD *)ArgList + 1,
        v9);
      (*(void (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
        dword_1047CA6C,
        *(_DWORD *)ArgList + v14 - 1,
        0,
        *(_DWORD *)ArgList + v14,
        v9);
      (*(void (__thiscall **)(int, _DWORD, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
        dword_1047CA6C,
        *(_DWORD *)ArgList,
        v13 + v9,
        *(_DWORD *)ArgList + 1,
        v16);
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
        dword_1047CA6C,
        *(_DWORD *)ArgList + v14 - 1,
        v13 + v9,
        *(_DWORD *)ArgList + v14,
        v16);
      v6 = dword_1047CA6C;
      v7 = *(_DWORD *)dword_1047CA6C;
      v8 = ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))**this[27])(this[27]);
      (*(void (__thiscall **)(int, int))(v7 + 36))(v6, v8);
      sub_10228370(Buffer, 0x14u, "%d", *(_DWORD *)ArgList);
      ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), char *))(*this[44])[193])(this[44], Buffer);
      (*this[44])[196](this[44], (int)&v11, (int)&v12);
      sub_102361A0(this[44], v11, v12);
      sub_10236140(this[44], *(_DWORD *)ArgList / 2 - v11 / 2, v9 - v12 + 3);
      sub_10228370(Buffer, 0x14u, "%d", v9);
      ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), char *))(*this[45])[193])(this[45], Buffer);
      (*this[45])[196](this[45], (int)&v11, (int)&v12);
      sub_102361A0(this[45], v11, v12);
      sub_102361D0(this[45], (int)&v11, (int)&v12);
      sub_10236140(this[45], *(_DWORD *)ArgList - v11 + 3, v9 / 2 - v12 / 2);
      sub_10228370(Buffer, 0x14u, "%d", v9);
      ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), char *))(*this[46])[193])(this[46], Buffer);
      (*this[46])[196](this[46], (int)&v11, (int)&v12);
      sub_102361A0(this[46], v11, v12);
      sub_10236140(this[46], v14 + *(_DWORD *)ArgList + (v15 - *(_DWORD *)ArgList - v14) / 2 - v11 / 2, v9 + v13 - 3);
      sub_10228370(Buffer, 0x14u, "%d", v9);
      ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), char *))(*this[47])[193])(this[47], Buffer);
      (*this[47])[196](this[47], (int)&v11, (int)&v12);
      sub_102361A0(this[47], v11, v12);
      sub_10236140(this[47], v14 + *(_DWORD *)ArgList, v13 + v9 + (v16 - v9 - v13) / 2 - v12 / 2);
    }
  }
}
