void __userpurge sub_100541E0(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4, int a5, int a6, int a7)
{
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int i; // ebx
  int v18; // ebx
  int v19; // [esp+50h] [ebp-Ch]
  float v20; // [esp+54h] [ebp-8h]
  float v21; // [esp+54h] [ebp-8h]
  int v22; // [esp+54h] [ebp-8h]
  int v23; // [esp+54h] [ebp-8h]

  if ( *(_DWORD *)(a1 + 20) && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 20))(a1) )
  {
    v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a3);
    if ( v8 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
    v9 = (*(int (__thiscall **)(_DWORD, const char *, _DWORD, int, int))(**(_DWORD **)(a1 + 44) + 44))(
           *(_DWORD *)(a1 + 44),
           "$basetexture",
           0,
           1,
           a2);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 56))(v9, *(_DWORD *)(a1 + 28));
    v10 = (*(int (__thiscall **)(_DWORD, const char *, _DWORD, int))(**(_DWORD **)(a1 + 48) + 44))(
            *(_DWORD *)(a1 + 48),
            "$basetexture",
            0,
            1);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 56))(v10, *(_DWORD *)(a1 + 32));
    v11 = (*(int (__thiscall **)(_DWORD, const char *, _DWORD, int))(**(_DWORD **)(a1 + 40) + 44))(
            *(_DWORD *)(a1 + 40),
            "$basetexture",
            0,
            1);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 56))(v11, *(_DWORD *)(a1 + 28));
    v12 = (*(int (__thiscall **)(_DWORD, const char *, _DWORD, int))(**(_DWORD **)(a1 + 44) + 44))(
            *(_DWORD *)(a1 + 44),
            "$bloomscale",
            0,
            1);
    v20 = *(float *)(dword_1040BAB4 + 44) * 10.0;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 12))(v12, LODWORD(v20));
    v13 = (*(int (__thiscall **)(_DWORD, const char *, _DWORD, int))(**(_DWORD **)(a1 + 48) + 44))(
            *(_DWORD *)(a1 + 48),
            "$bloomamount",
            0,
            1);
    v21 = *(float *)(dword_1040BAB4 + 44) * 10.0;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 12))(v13, LODWORD(v21));
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v8 + 292))(v8, 0, 0, 0, 255);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 428))(v8, *(_DWORD *)(a1 + 28));
    (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v8 + 48))(v8, 1, 1, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 436))(v8);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 428))(v8, *(_DWORD *)(a1 + 32));
    (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v8 + 48))(v8, 1, 1, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 436))(v8);
    v14 = *(_DWORD *)v8;
    v15 = sub_10076720(0);
    v16 = sub_10076740(v15);
    (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int, int))(v14 + 496))(v8, 0, 0, v16, v19, v22);
    for ( i = 0; i < *(_DWORD *)(a1 + 20); ++i )
    {
      if ( *(_DWORD *)(dword_1040BAFC + 48) )
        sub_10053E70((_DWORD *)a1, i, v8);
      sub_10054000(a1, i, v8);
    }
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 428))(v8, *(_DWORD *)(a1 + 32));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 300))(v8, *(_DWORD *)(a1 + 44));
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 436))(v8);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 428))(v8, *(_DWORD *)(a1 + 28));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 300))(v8, *(_DWORD *)(a1 + 48));
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 436))(v8);
    v18 = v23;
    if ( *(_DWORD *)(dword_1040BAFC + 48) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 464))(v8, 1);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 484))(v8, 0);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 488))(v8, 1);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 480))(v8, 3);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 476))(v8, 2);
    }
    sub_10053CE0(v18, a1, *(_DWORD *)(a1 + 40), a4, a5, a6, a7);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 464))(v8, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
  }
}
