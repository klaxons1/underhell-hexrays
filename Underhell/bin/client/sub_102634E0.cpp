void __usercall sub_102634E0(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>)
{
  int v5; // eax
  int (__thiscall ***v6)(void *, int, int); // ebx
  int i; // ebp
  _BYTE *v8; // edi
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  bool v12; // zf
  int v13; // ecx
  _DWORD v16[2]; // [esp+1Ch] [ebp-8Ch] BYREF
  _DWORD v17[2]; // [esp+24h] [ebp-84h] BYREF
  _BYTE v18[8]; // [esp+2Ch] [ebp-7Ch] BYREF
  _BYTE v19[116]; // [esp+34h] [ebp-74h] BYREF

  if ( (*(_BYTE *)(a1 + 376) & 0x40) != 0 )
  {
    v5 = sub_100DDA40(392);
    if ( v5 )
      v6 = (int (__thiscall ***)(void *, int, int))sub_1026D6B0(v5, a1, "ContextMenu");
    else
      v6 = 0;
    (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)dword_1047CA68 + 28))(
      dword_1047CA68,
      v16,
      v17,
      a3);
    sub_10236140(v6, v16[1], v17[1]);
    for ( i = 0; i < *(_DWORD *)(a1 + 272); ++i )
    {
      v8 = (_BYTE *)(*(_DWORD *)(a1 + 216) + 72 * *(unsigned __int8 *)(*(_DWORD *)(a1 + 260) + i));
      (*(void (__thiscall **)(_DWORD, _BYTE *, int, int, int))(**(_DWORD **)v8 + 780))(*(_DWORD *)v8, v18, 128, a4, a2);
      v9 = (_DWORD *)sub_10229D00(32);
      if ( v9 )
        v10 = sub_1022B1A0(v9, (int)"ToggleColumnVisible", "col", *(unsigned __int8 *)(*(_DWORD *)(a1 + 260) + i));
      else
        v10 = 0;
      a2 = 0;
      a4 = a1;
      v11 = (*v6)[202](v6, (int)v19, (int)v10);
      v12 = v8[25] == 0;
      v17[0] = v11;
      LOBYTE(v13) = v12;
      sub_1026BB40(v11, v13);
      if ( v8[26] )
        (*v6)[222](v6, v17[0], 0);
    }
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*v6)[31])(v6, 1);
  }
}
