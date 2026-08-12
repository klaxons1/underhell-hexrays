void __userpurge sub_1023FD90(int a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int (__thiscall **v7)(int, int, int); // esi
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  void (__thiscall **v11)(int, int); // esi
  int v12; // eax
  int v13; // ebx
  void (__thiscall **v14)(int, int); // esi
  int v15; // eax
  int v16; // esi
  int v17; // ebp
  int v18; // eax
  int v19; // ebx
  int v20; // edi
  int (__thiscall **v21)(int, int, int); // esi
  int v22; // eax
  int v23; // eax
  int v24; // edi
  int (__thiscall **v25)(int, int); // esi
  int v26; // eax
  int v27; // eax
  int v28; // edi
  int *v29; // esi
  int v30; // ebx
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  bool v34; // zf
  int *v35; // edi
  int v37; // [esp+14h] [ebp-4h]

  if ( a3 )
  {
    v4 = *(_DWORD *)((*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 600))(a3, a2) + 84);
    if ( v4 == -1 || (v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, v4)) == 0 )
    {
      v9 = 0;
    }
    else
    {
      v6 = dword_1047CA70;
      v7 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216);
      v8 = sub_10278FB0();
      v9 = (*v7)(v6, v5, v8);
    }
    v10 = dword_1047CA6C;
    v11 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 328);
    v12 = (**(int (__thiscall ***)(int))a1)(a1);
    (*v11)(v10, v12);
    if ( v9 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 208))(v9) )
    {
      v13 = dword_1047CA6C;
      v14 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 328);
      v15 = (**(int (__thiscall ***)(int))v9)(v9);
      (*v14)(v13, v15);
    }
    v16 = *(_DWORD *)(a1 + 220);
    v17 = 0;
    v37 = v16;
    if ( v16 <= 0 )
    {
LABEL_16:
      v24 = dword_1047CA74;
      v25 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 60);
      v26 = (**(int (__thiscall ***)(int))a3)(a3);
      v27 = (*v25)(v24, v26);
      v28 = *(_DWORD *)(a1 + 220);
      v29 = (int *)(a1 + 208);
      v30 = v27;
      v31 = *(_DWORD *)(a1 + 212);
      if ( v28 + 1 > v31 )
        sub_102AA460(v28 - v31 + 1);
      ++*(_DWORD *)(a1 + 220);
      v32 = *v29;
      v33 = *(_DWORD *)(a1 + 220) - v28 - 1;
      v34 = *(_DWORD *)(a1 + 220) - v28 == 1;
      *(_DWORD *)(a1 + 224) = *(_DWORD *)(a1 + 208);
      if ( v33 >= 0 && !v34 )
        memcpy((void *)(v32 + 4 * v28 + 4), (const void *)(v32 + 4 * v28), 4 * v33);
      v35 = (int *)(*v29 + 4 * v28);
      if ( v35 )
        *v35 = v30;
    }
    else
    {
      while ( 1 )
      {
        v18 = *(_DWORD *)(*(_DWORD *)(a1 + 208) + 4 * v17);
        if ( v18 == -1
          || (v19 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, v18)) == 0 )
        {
          v23 = 0;
        }
        else
        {
          v20 = dword_1047CA70;
          v21 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216);
          v22 = sub_10278FB0();
          v23 = (*v21)(v20, v19, v22);
          v16 = v37;
        }
        if ( v23 == a3 )
          break;
        if ( ++v17 >= v16 )
          goto LABEL_16;
      }
    }
  }
}
