void __userpurge sub_101446D0(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, int a5, int a6, int a7)
{
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  float v14; // [esp+10h] [ebp-30h]
  float v15; // [esp+14h] [ebp-2Ch]
  int v16; // [esp+30h] [ebp-10h]
  int v17; // [esp+38h] [ebp-8h]

  v8 = *(_DWORD *)(a1 + 288);
  v17 = a1;
  if ( v8 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v8 + 100))(v8, 1) )
    {
      sub_10053CE0(a2, a3, *(_DWORD *)(a1 + 288), a4, a5, a6, a7);
    }
    else if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 288) + 96))(*(_DWORD *)(a1 + 288), 1) )
    {
      sub_100ECDC0(a3, a1);
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
      v10 = v9;
      if ( v9 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
      v11 = sub_10116510();
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 12))(v11);
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 16))(v11);
      v15 = (float)(v13 - 1);
      v14 = (float)(v12 - 1);
      (*(void (__thiscall **)(int, _DWORD, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, _DWORD, int, int))(*(_DWORD *)v10 + 412))(
        v10,
        *(_DWORD *)(v17 + 288),
        a4,
        a5,
        a6,
        a7,
        0.0,
        0.0,
        LODWORD(v14),
        LODWORD(v15),
        v12,
        v13,
        0,
        1,
        1);
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 12))(v10);
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10);
    }
    else
    {
      v16 = *(_DWORD *)(a1 + 288);
      a7 = -1;
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)dword_10413168 + 96))(dword_10413168, &a7, v16);
    }
  }
}
