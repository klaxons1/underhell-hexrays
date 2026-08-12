int __usercall sub_1027DA40@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, char a4)
{
  int result; // eax
  int v6; // edi
  int v7; // ebp
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // ebp
  _DWORD *v12; // eax
  int v13; // edx
  int v14; // edx
  int v17; // [esp+4Ch] [ebp-1Ch]
  int v18; // [esp+50h] [ebp-18h]
  int v19; // [esp+54h] [ebp-14h] BYREF
  int v20; // [esp+58h] [ebp-10h] BYREF
  int v21; // [esp+5Ch] [ebp-Ch] BYREF
  _DWORD v22[2]; // [esp+60h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+68h] [ebp+0h] BYREF

  sub_10239650((_DWORD *)a1);
  if ( *(_BYTE *)(a1 + 264) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 220))(dword_1047CA6C, 7) )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 104))(dword_1047CA6C, *(_DWORD *)(a1 + 212));
    *(_BYTE *)(a1 + 264) = 0;
    sub_102361D0((int (__thiscall ***)(void *, int, int))a1, (int)&v21, (int)v22);
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 808))(a1, v21, v22[0]);
  }
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 220))(dword_1047CA6C, 7);
  if ( !(_BYTE)result )
  {
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 212) + 48))(*(_DWORD *)(a1 + 212));
    *(_DWORD *)(a1 + 220) = result;
    if ( result )
    {
      v6 = dword_1047CA6C;
      v7 = *(_DWORD *)dword_1047CA6C;
      v8 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a1 + 224))(a1, v22);
      (*(void (__thiscall **)(int, _DWORD))(v7 + 40))(v6, *v8);
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 220) + 4))(*(_DWORD *)(a1 + 220), 0, 0);
      result = (***(int (__thiscall ****)(_DWORD))(a1 + 220))(*(_DWORD *)(a1 + 220));
    }
    if ( *(int *)(a1 + 256) > 0 || *(int *)(a1 + 260) > 0 )
    {
      sub_102361D0((int (__thiscall ***)(void *, int, int))a1, (int)&v21, (int)&v20);
      v9 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 256))(a1, a3, a2);
      retaddr = 0;
      v21 = 0;
      v20 = 0;
      v19 = 0;
      if ( v9 )
        (*(void (__thiscall **)(int, _UNKNOWN **, int *, int *, int *))(*(_DWORD *)v9 + 16))(
          v9,
          &retaddr,
          &v21,
          &v20,
          &v19);
      v10 = dword_1047CA6C;
      v11 = *(_DWORD *)dword_1047CA6C;
      v12 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a1 + 224))(a1, &a4);
      result = (*(int (__thiscall **)(int, _DWORD))(v11 + 40))(v10, *v12);
      v13 = *(_DWORD *)(a1 + 256);
      if ( v13 )
        result = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
                   dword_1047CA6C,
                   v21 - v13 - v18,
                   v19,
                   v21 - v18,
                   v20 - v17);
      v14 = *(_DWORD *)(a1 + 260);
      if ( v14 )
        return (*(int (__stdcall **)(_DWORD, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
                 v22[0],
                 v20 - v14 - v17,
                 v21 - *(_DWORD *)(a1 + 256) - v18,
                 v20 - v17);
    }
  }
  return result;
}
