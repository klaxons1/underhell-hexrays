void __userpurge sub_10251920(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4)
{
  int v5; // ecx
  int (__thiscall *v6)(int, int, int); // edx
  int v7; // eax
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  bool v11; // sf
  int (__thiscall **v12)(void *, int *, int *); // eax
  int v13; // [esp+Ch] [ebp-4h] BYREF

  if ( a4 == 107 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a1 + 1020))(a1, 1) )
    {
      (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v13, &a4);
      sub_10236F60((int (__thiscall ***)(void *, int *, int *))a1, &v13, &a4);
      v5 = v13;
      v6 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 1008);
      *(_BYTE *)(a1 + 284) = *(_BYTE *)(a1 + 285);
      v7 = v6(a1, v5, a4);
      *(_DWORD *)(a1 + 280) = v7;
      if ( !v7 )
        *(_BYTE *)(a1 + 285) = 0;
      v8 = dword_1047CA68;
      v9 = *(_DWORD *)dword_1047CA68;
      v10 = (**(int (__thiscall ***)(int))a1)(a1);
      (*(void (__thiscall **)(int, int))(v9 + 8))(v8, v10);
      v11 = *(int *)(a1 + 312) < 0;
      *(_BYTE *)(a1 + 295) = 1;
      if ( v11 )
        *(_DWORD *)(a1 + 312) = *(_DWORD *)(a1 + 280);
      v12 = *(int (__thiscall ***)(void *, int *, int *))a1;
      *(_DWORD *)(a1 + 316) = *(_DWORD *)(a1 + 280);
      ((void (__thiscall *)(int))v12[245])(a1);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 48))(a1, 0);
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1);
    }
    else
    {
      nullsub_5(107);
    }
  }
  else if ( a4 == 108 )
  {
    sub_10251380(a1, a2, a3, a1);
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 856))(a1);
  }
}
