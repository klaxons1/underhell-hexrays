char __userpurge sub_10240A10@<al>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3, int a4)
{
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // esi
  int v14; // eax
  int v15; // eax
  char result; // al
  int v17; // eax
  int v18; // eax
  int v19; // eax
  char v20; // [esp+13h] [ebp-1h]

  if ( dword_103FCF4C == -1 )
    goto LABEL_15;
  v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, dword_103FCF4C);
  if ( !v5 )
    goto LABEL_15;
  v6 = dword_1047CA70;
  a2 = *(_DWORD *)dword_1047CA70;
  v7 = sub_10278FB0();
  if ( !(*(int (__thiscall **)(int, int, int))(a2 + 216))(v6, v5, v7) )
    goto LABEL_15;
  if ( dword_103FCF4C == -1
    || (v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, dword_103FCF4C)) == 0 )
  {
    v11 = 0;
  }
  else
  {
    v9 = dword_1047CA70;
    a2 = *(_DWORD *)dword_1047CA70;
    v10 = sub_10278FB0();
    v11 = (*(int (__thiscall **)(int, int, int))(a2 + 216))(v9, v8, v10);
  }
  v20 = *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v11 + 600))(v11) + 2);
  if ( dword_103FCF4C == -1
    || (v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, dword_103FCF4C)) == 0 )
  {
    v15 = 0;
  }
  else
  {
    v13 = dword_1047CA70;
    a2 = *(_DWORD *)dword_1047CA70;
    v14 = sub_10278FB0();
    v15 = (*(int (__thiscall **)(int, int, int))(a2 + 216))(v13, v12, v14);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 676))(v15);
  if ( v20 )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 70);
    if ( result )
    {
      v17 = sub_102393B0(&dword_103FCF4C);
      return (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v17 + 680))(v17, 1, -1, 1);
    }
  }
  else
  {
LABEL_15:
    v18 = (*(int (__thiscall **)(_DWORD *))*a1)(a1);
    result = sub_10236A90(a2, v18);
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD *))(*a1 + 292))(a1);
      if ( !result )
      {
        result = (*(int (__thiscall **)(_DWORD *))(*a1 + 528))(a1);
        if ( result )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 288))(a1)
            || (v19 = sub_10240220(a1 + 33),
                (result = (*(int (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v19 + 76))(v19, a3, a4, a1)) == 0) )
          {
            if ( a1[12] )
              sub_1025D9F0(a1);
            sub_10236F60((int (__thiscall ***)(void *, int *, int *))a1, &a3, &a4);
            return (*(int (__thiscall **)(_DWORD *, int, int))(*a1 + 388))(a1, a3, a4);
          }
        }
      }
    }
  }
  return result;
}
