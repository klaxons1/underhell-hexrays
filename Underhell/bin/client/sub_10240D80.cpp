char __userpurge sub_10240D80@<al>(unsigned int *a1@<ecx>, int a2@<ebx>, int a3)
{
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // esi
  char result; // al
  int v17; // eax
  int v18; // eax
  char v19; // [esp+19h] [ebp-1h]

  if ( dword_103FCF4C == -1
    || (v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, dword_103FCF4C)) == 0
    || (v5 = dword_1047CA70,
        a2 = *(_DWORD *)dword_1047CA70,
        v6 = sub_10278FB0(),
        !(*(int (__thiscall **)(int, int, int))(a2 + 216))(v5, v4, v6)) )
  {
    v15 = a3;
LABEL_15:
    v17 = (*(int (__thiscall **)(unsigned int *))*a1)(a1);
    result = sub_10236A90(a2, v17);
    if ( result )
    {
      result = (*(int (__thiscall **)(unsigned int *))(*a1 + 292))(a1);
      if ( !result )
      {
        result = (*(int (__thiscall **)(unsigned int *))(*a1 + 528))(a1);
        if ( result )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(unsigned int *))(*a1 + 288))(a1) )
            return (*(int (__thiscall **)(unsigned int *, int))(*a1 + 408))(a1, v15);
          v18 = sub_10240220(a1 + 33);
          result = (*(int (__thiscall **)(int, int, unsigned int *))(*(_DWORD *)v18 + 52))(v18, v15, a1);
          if ( !result )
            return (*(int (__thiscall **)(unsigned int *, int))(*a1 + 408))(a1, v15);
        }
      }
    }
    return result;
  }
  if ( dword_103FCF4C == -1
    || (v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, dword_103FCF4C)) == 0 )
  {
    v10 = 0;
  }
  else
  {
    v8 = dword_1047CA70;
    a2 = *(_DWORD *)dword_1047CA70;
    v9 = sub_10278FB0();
    v10 = (*(int (__thiscall **)(int, int, int))(a2 + 216))(v8, v7, v9);
  }
  v19 = *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v10 + 600))(v10) + 2);
  if ( dword_103FCF4C == -1
    || (v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, dword_103FCF4C)) == 0 )
  {
    v14 = 0;
  }
  else
  {
    v12 = dword_1047CA70;
    a2 = *(_DWORD *)dword_1047CA70;
    v13 = sub_10278FB0();
    v14 = (*(int (__thiscall **)(int, int, int))(a2 + 216))(v12, v11, v13);
  }
  v15 = a3;
  result = (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v14 + 680))(v14, 1, a3, 0);
  if ( !v19 )
    goto LABEL_15;
  return result;
}
