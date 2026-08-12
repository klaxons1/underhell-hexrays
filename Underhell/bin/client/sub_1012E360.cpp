int __thiscall sub_1012E360(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  int v24; // eax
  int v25; // esi
  int v26; // eax
  int v27; // eax
  int v29; // [esp+0h] [ebp-24h]
  int v31; // [esp+10h] [ebp-14h]
  int v32; // [esp+14h] [ebp-10h]
  _DWORD *v33; // [esp+18h] [ebp-Ch]
  int v34; // [esp+1Ch] [ebp-8h]
  int i; // [esp+20h] [ebp-4h]

  v34 = 0;
  v33 = this + 110;
  do
  {
    v1 = v33;
    for ( i = 0; i < 4; ++i )
    {
      v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA7C + 40))(dword_1047CA7C);
      sub_10239D70(v2);
      v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 40))(dword_1047CA7C, 28);
      sub_10237520(v3);
      sub_10249190(1);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*v1 + 124))(*v1, 1);
      v32 = dword_1047CA7C;
      v4 = dword_1047CA7C;
      v31 = dword_1047CA7C;
      v5 = i * (*(int (__stdcall **)(int))(*(_DWORD *)dword_1047CA7C + 40))(37);
      v6 = v34 * (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 40))(v4, 37);
      v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v32 + 40))(v32, 44);
      v8 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v31 + 40))(v31, 119, v5 + v7);
      sub_10236140(v6 + v8, 28);
      v1 += 6;
    }
    ++v33;
    ++v34;
  }
  while ( v34 < 6 );
  v9 = dword_1047CA7C;
  v10 = this + 134;
  v11 = (*(int (**)(void))(*(_DWORD *)dword_1047CA7C + 40))();
  v12 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 40))(v9, 82, v11);
  sub_10236140(v12, 118);
  v13 = dword_1047CA7C;
  v14 = (*(int (**)(void))(*(_DWORD *)dword_1047CA7C + 40))();
  v15 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v13 + 40))(v13, 82, v14);
  sub_10236140(v15, 81);
  v16 = dword_1047CA7C;
  v17 = (*(int (**)(void))(*(_DWORD *)dword_1047CA7C + 40))();
  v18 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v16 + 40))(v16, 343, v17);
  sub_10236140(v18, 118);
  v19 = dword_1047CA7C;
  v20 = (*(int (**)(void))(*(_DWORD *)dword_1047CA7C + 40))();
  v21 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v19 + 40))(v19, 343, v20);
  sub_10236140(v21, 81);
  v22 = 4;
  do
  {
    v23 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 40))(dword_1047CA7C, 28);
    sub_10239D70(v23);
    v24 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 40))(dword_1047CA7C, 28);
    sub_10237520(v24);
    sub_10249190(1);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*v10 + 124))(*v10, 1);
    ++v10;
    --v22;
  }
  while ( v22 );
  v25 = dword_1047CA7C;
  v26 = (*(int (__stdcall **)(int))(*(_DWORD *)dword_1047CA7C + 40))(100);
  v27 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v25 + 40))(v25, 200, v26);
  sub_10236140(v27, v29);
  return sub_10229140(&unk_10439368, 1);
}
