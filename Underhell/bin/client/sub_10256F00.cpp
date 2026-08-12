void __usercall sub_10256F00(_BYTE *a1@<ecx>, int a2@<ebp>)
{
  int (__thiscall *v3)(int, int); // edx
  int v4; // ebp
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // edi
  int v9; // ebp
  int (__thiscall **v10)(int, int); // edi
  int v11; // eax
  int v12; // edi
  _DWORD *v13; // eax
  int v14; // ebx
  void (__thiscall **v15)(int, int); // edi
  int (__thiscall **v16)(int, int); // ebp
  int v17; // eax
  int v18; // eax
  int v19; // eax
  void (__thiscall *v20)(_BYTE *); // edx
  char v22; // [esp+35h] [ebp-21h]
  int v23; // [esp+3Ah] [ebp-1Ch]
  _DWORD *v24; // [esp+3Ah] [ebp-1Ch]
  int v25; // [esp+42h] [ebp-14h] BYREF
  int v26[4]; // [esp+46h] [ebp-10h] BYREF

  if ( !a1[293] && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 924))(a1) )
  {
    v3 = *(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA80 + 28);
    v4 = 0;
    v25 = 0;
    memset(v26, 0, sizeof(v26));
    v23 = v3(dword_1047CA80, a2);
    if ( !a1[404] )
    {
      v5 = *((_DWORD *)a1 + 82);
      if ( v5 <= 0 )
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 28))(dword_1047CA80);
      else
        v6 = v5 + 1;
      v23 = v6;
    }
    sub_10255490(v26, 0, v23, 0);
    v7 = v26[0];
    v8 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1047CA80 + 40))(dword_1047CA80, 0, v26[0]);
    if ( v8 >= 1 )
    {
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 908))(a1);
      v22 = 0;
      if ( v8 > 0 )
      {
        while ( *(_WORD *)(v7 + 2 * v4) )
        {
          if ( a1[404] && *((_DWORD *)a1 + 58) == *((_DWORD *)a1 + 82) )
          {
            (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 56))(a1, 0);
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA80 + 32))(
              dword_1047CA80,
              v7 + 2 * v4,
              v8 - v4 - 1);
            if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 148))(a1) )
            {
              v9 = dword_1047CA70;
              v10 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 200);
              v11 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 148))(a1);
              v12 = (*v10)(v9, v11);
              if ( v12 != (**(int (__thiscall ***)(_BYTE *))a1)(a1) )
              {
                v22 = 1;
                v13 = (_DWORD *)sub_10229D00(32);
                if ( v13 )
                  v24 = sub_10229D20(v13, (int)"DoPaste");
                else
                  v24 = 0;
                v14 = dword_1047CA70;
                v15 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 148);
                v16 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 200);
                v17 = (**(int (__thiscall ***)(_BYTE *))a1)(a1);
                v18 = (*(int (__thiscall **)(_BYTE *, _DWORD *, int))(*(_DWORD *)a1 + 148))(a1, v24, v17);
                v19 = (*v16)(v14, v18);
                (*v15)(v14, v19);
                v7 = v25;
              }
            }
            break;
          }
          (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 832))(a1, *(unsigned __int16 *)(v7 + 2 * v4++));
          if ( v4 >= v8 )
            break;
        }
      }
      if ( a1[404] )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA80 + 32))(dword_1047CA80, v7);
      v20 = *(void (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 996);
      a1[340] = 1;
      v20(a1);
      if ( !v22 )
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 48))(a1, 0);
    }
    sub_1011A810(&v25);
  }
}
