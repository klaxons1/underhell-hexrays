char __userpurge sub_10285BF0@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebp
  int v9; // esi
  int v10; // eax
  int v11; // esi
  int v12; // esi
  int v13; // ebx
  int v14; // ebp
  unsigned __int8 (__thiscall **v15)(int, int); // esi
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  int v24; // ebx
  void (__thiscall **v25)(int, int); // esi
  int v26; // eax
  void (__thiscall **v27)(int, int); // esi
  int v28; // eax
  char v31; // [esp+37h] [ebp-9h]
  int v32; // [esp+38h] [ebp-8h]
  int v33; // [esp+3Ch] [ebp-4h]
  int (__thiscall ***retaddr)(_DWORD, int); // [esp+40h] [ebp+0h]
  char v35; // [esp+44h] [ebp+4h]

  if ( !a4 )
    return 0;
  sub_10237CE0((_DWORD *)(a1 + 12), 0);
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 204))(dword_1047CA70, a4);
  v35 = 0;
  v31 = 1;
  v32 = 0;
  while ( 1 )
  {
    v7 = v6 - 1;
    v8 = 0;
    if ( v7 > 0 )
      break;
LABEL_19:
    if ( !*(_BYTE *)(a1 + 20) )
    {
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 16) + 148))(*(_DWORD *)(a1 + 16)) )
      {
        v12 = dword_1047CA6C;
        v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 16) + 148))(*(_DWORD *)(a1 + 16));
        if ( v13 != (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 24))(v12) )
        {
          v14 = dword_1047CA70;
          v15 = (unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 192);
          v16 = *(_DWORD *)(a1 + 16);
          v17 = (**(int (***)(void))v16)();
          v18 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v16 + 148))(v16, v17);
          if ( (*v15)(v14, v18) )
          {
            v35 = 1;
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 40))(a1, 0, 1);
LABEL_25:
            v11 = v32;
            if ( v32 )
              goto LABEL_26;
            return v35;
          }
        }
      }
    }
    v6 = 9999999;
    v31 = 0;
  }
  v33 = 0;
  if ( sub_10237130(*(int (__thiscall ****)(_DWORD))(a1 + 16)) <= 0 )
    goto LABEL_17;
  while ( 1 )
  {
    v9 = sub_10237150(*(int (__thiscall ****)(void *, int, int))(a1 + 16), v8);
    if ( v9 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 128))(v9)
        && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 204))(v9)
        && (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 68))(v9) )
      {
        break;
      }
    }
LABEL_14:
    if ( ++v8 >= sub_10237130(*(int (__thiscall ****)(_DWORD))(a1 + 16)) )
      goto LABEL_17;
  }
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 68))(v9);
  if ( v10 != v7 )
  {
    if ( v10 < v7 && v10 > v33 )
    {
      v33 = v10;
      v32 = v9;
    }
    goto LABEL_14;
  }
  v32 = v9;
LABEL_17:
  if ( !v31 )
    goto LABEL_25;
  v11 = v32;
  if ( !v32 )
    goto LABEL_19;
LABEL_26:
  v19 = (**(int (__thiscall ***)(int, int, int))v11)(v11, a3, a2);
  sub_10237CE0((_DWORD *)(a1 + 12), v19);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 48))(v11, -1);
  v20 = (**(int (__thiscall ***)(int))v11)(v11);
  if ( sub_10285B80(v20) )
  {
    v27 = (void (__thiscall **)(int, int))(*(_DWORD *)a1 + 40);
    v28 = (**retaddr)(retaddr, 1);
    (*v27)(a1, v28);
    return v35;
  }
  if ( sub_10237CC0((_DWORD *)(a1 + 4)) )
  {
    v21 = sub_10237CC0((_DWORD *)(a1 + 4));
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 40))(a1, v21, 1);
    return v35;
  }
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 40))(a1, 0, 1);
  if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 16) + 148))(*(_DWORD *)(a1 + 16)) )
    return v35;
  v22 = (_DWORD *)sub_10229D00(32);
  if ( v22 )
    v23 = sub_10229D20(v22, (int)"FindDefaultButton");
  else
    v23 = 0;
  v24 = dword_1047CA74;
  v25 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 80);
  v26 = (*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD, _DWORD))(**(_DWORD **)(a1 + 16) + 148))(
          *(_DWORD *)(a1 + 16),
          v23,
          0,
          0.0);
  (*v25)(v24, v26);
  return v35;
}
