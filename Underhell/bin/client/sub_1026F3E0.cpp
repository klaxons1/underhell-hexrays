void __usercall sub_1026F3E0(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>)
{
  int v5; // edi
  int v6; // ebx
  bool v7; // zf
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // eax
  int v11; // ebp
  _DWORD *v12; // eax
  int v13; // edi
  _DWORD *v14; // eax
  int v15; // [esp+10h] [ebp-14h] BYREF
  int v16; // [esp+14h] [ebp-10h] BYREF
  int v17; // [esp+18h] [ebp-Ch] BYREF
  int v18; // [esp+1Ch] [ebp-8h] BYREF
  int v19; // [esp+20h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+24h] [ebp+0h]

  sub_1025B8C0(a1);
  if ( *(_DWORD *)(a1 + 392) )
  {
    sub_102361D0((int (__thiscall ***)(void *, int, int))a1, (int)&v15, (int)&v17);
    (*(void (__thiscall **)(_DWORD, int *, int *, int, int))(**(_DWORD **)(a1 + 392) + 12))(
      *(_DWORD *)(a1 + 392),
      &v16,
      &v18,
      a4,
      a2);
    v5 = v17 - v18 - 5;
    v6 = (v19 - (int)retaddr) / 2;
    v7 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 204))(a1) == 0;
    v8 = **(_DWORD **)(a1 + 392);
    if ( v7 )
    {
      (*(void (__cdecl **)(int, int, int))(v8 + 4))(v5 + 1, v6 + 1, a3);
      v11 = **(_DWORD **)(a1 + 392);
      v12 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 804))(a1, &v19);
      (*(void (__thiscall **)(_DWORD, _DWORD))(v11 + 20))(*(_DWORD *)(a1 + 392), *v12);
      (***(void (__thiscall ****)(_DWORD))(a1 + 392))(*(_DWORD *)(a1 + 392));
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 96))(dword_1047CA6C);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 392) + 4))(*(_DWORD *)(a1 + 392), v5, v6);
      v13 = **(_DWORD **)(a1 + 392);
      v14 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 808))(a1, &v19);
      (*(void (__thiscall **)(_DWORD, _DWORD))(v13 + 20))(*(_DWORD *)(a1 + 392), *v14);
    }
    else
    {
      (*(void (**)(void))(v8 + 4))();
      v9 = **(_DWORD **)(a1 + 392);
      v10 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 1008))(a1, &v19);
      (*(void (__thiscall **)(_DWORD, _DWORD))(v9 + 20))(*(_DWORD *)(a1 + 392), *v10);
    }
    (***(void (__thiscall ****)(_DWORD))(a1 + 392))(*(_DWORD *)(a1 + 392));
  }
}
