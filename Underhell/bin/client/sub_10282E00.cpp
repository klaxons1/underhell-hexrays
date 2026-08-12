int __usercall sub_10282E00@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // edi
  int v11; // eax
  int *v12; // eax
  int v13; // edi
  int v14; // edx
  int v15; // eax
  char *v16; // ebp
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  _DWORD *v21; // [esp+14h] [ebp-500h]
  char Buffer[252]; // [esp+18h] [ebp-4FCh] BYREF
  _BYTE v23[4]; // [esp+114h] [ebp-400h] BYREF
  char ArgList[512]; // [esp+118h] [ebp-3FCh] BYREF
  char String[508]; // [esp+318h] [ebp-1FCh] BYREF

  if ( !sub_100E1B90() )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 1032))(a1, *(_DWORD *)(a1 + 452));
  v4 = **(_DWORD **)(a1 + 472);
  v5 = *(_DWORD *)(v4 + 4);
  v6 = 0;
  if ( v5 )
    (*(void (__stdcall **)(_BYTE *, int, int))(*(_DWORD *)v5 + 780))(v23, 512, a2);
  else
    (*(void (__stdcall **)(_BYTE *, int, int))(**(_DWORD **)(v4 + 12) + 780))(v23, 512, a2);
  v7 = sub_10280270(*(_DWORD **)(a1 + 456), ArgList);
  if ( !v7 || v7 == *(_DWORD *)(a1 + 452) )
  {
    v10 = (_DWORD *)sub_10229D00(32);
    if ( v10 )
    {
      v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 452) + 72))(*(_DWORD *)(a1 + 452));
      v21 = sub_10229D20(v10, v11);
    }
    else
    {
      v21 = 0;
    }
    v12 = *(int **)(a1 + 472);
    if ( v12[3] > 0 )
    {
      v13 = 0;
      do
      {
        v14 = **(_DWORD **)(a1 + 472);
        v15 = *v12;
        v16 = (char *)(v14 + v13 + 16);
        if ( *(_DWORD *)(v14 + v13 + 4) )
          v17 = *(_DWORD *)(v15 + v13 + 4);
        else
          v17 = *(_DWORD *)(v15 + v13 + 12);
        (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)v17 + 780))(v17, String, 512);
        if ( (unsigned int)(*(_DWORD *)(**(_DWORD **)(a1 + 472) + v13 + 80) - 4) > 1 )
        {
          sub_1022ABA0(v21, v16, String);
        }
        else
        {
          v18 = atoi(String);
          sub_1022ACA0(v21, v16, v18);
        }
        v12 = *(int **)(a1 + 472);
        ++v6;
        v13 += 84;
      }
      while ( v6 < v12[3] );
    }
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 452) + 336))(*(_DWORD *)(a1 + 452), v21);
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 456) + 36))(*(_DWORD *)(a1 + 456)) )
    {
      v19 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 456) + 36))(*(_DWORD *)(a1 + 456));
      (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 16))(v19);
    }
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 480) + 200))(*(_DWORD *)(a1 + 480), 0);
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 476) + 200))(*(_DWORD *)(a1 + 476), 1);
  }
  else
  {
    sub_10228370(Buffer, 0xFFu, "Fieldname is not unique: %s\nRename it and try again.", ArgList);
    v8 = (_DWORD *)sub_100DDA40(464);
    if ( v8 )
      v9 = sub_10270680(v8, "Cannot Apply", Buffer, 0);
    else
      v9 = 0;
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v9 + 1028))(v9, 0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 1032))(a1, *(_DWORD *)(a1 + 452));
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 480) + 200))(*(_DWORD *)(a1 + 480), 0);
  }
}
