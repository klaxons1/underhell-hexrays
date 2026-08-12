int __userpurge sub_10250F40@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int C, int a4, char a5, int a6, int a7, int a8)
{
  int v9; // eax
  int v10; // ebp
  int v11; // ebx
  bool v12; // zf
  int v13; // edi
  int v14; // ecx
  int (__thiscall **v15)(_DWORD *); // edx
  int (__thiscall *v16)(_DWORD *); // eax
  int v17; // eax
  bool v18; // al
  int v19; // eax
  int v20; // edi
  int (__thiscall *v21)(_DWORD *, char *); // edx
  _DWORD *v22; // eax
  int v24; // [esp+34h] [ebp-10h] BYREF
  int v25; // [esp+38h] [ebp-Ch] BYREF
  int v26; // [esp+3Ch] [ebp-8h]
  int v27; // [esp+40h] [ebp-4h]
  char *retaddr; // [esp+44h] [ebp+0h]

  v26 = sub_10250EE0(a4, C);
  v27 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, a4);
  if ( iswcntrl(C) )
    return 0;
  v25 = -1;
  v24 = -1;
  (*(void (__thiscall **)(_DWORD *, int *, int *, int))(*a1 + 1000))(a1, &v25, &v24, a2);
  v9 = a6;
  v10 = a8;
  v11 = a7;
  if ( a6 < v26 )
    goto LABEL_13;
  v12 = a6 == v25;
  if ( a6 < v25 )
  {
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 16))(dword_1047CA68);
    a5 = (*(int (__thiscall **)(_DWORD *))(*a1 + 240))(a1);
    v18 = 0;
    if ( v13 )
    {
      v14 = *(_DWORD *)dword_1047CA70;
      v15 = (int (__thiscall **)(_DWORD *))*a1;
      a8 = dword_1047CA70;
      v16 = *v15;
      a7 = v14;
      v17 = v16(a1);
      if ( (*(unsigned __int8 (__thiscall **)(int, int, int))(a7 + 88))(a8, v13, v17) )
        v18 = 1;
    }
    if ( a5 || v18 )
      v19 = a1[90];
    else
      v19 = a1[92];
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, v19);
    (*(void (__thiscall **)(int, int, int, int, char *))(*(_DWORD *)dword_1047CA6C + 48))(
      dword_1047CA6C,
      v11,
      v10,
      v11 + v27,
      &retaddr[v10 + 1]);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, a1[91]);
    v9 = a6;
LABEL_13:
    v12 = v9 == v25;
  }
  if ( v12 )
  {
    v20 = dword_1047CA6C;
    v21 = *(int (__thiscall **)(_DWORD *, char *))(*a1 + 228);
    a6 = *(_DWORD *)dword_1047CA6C;
    v22 = (_DWORD *)v21(a1, &a5);
    (*(void (__thiscall **)(int, _DWORD))(a6 + 72))(v20, *v22);
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v11);
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 92))(dword_1047CA6C, C, 0);
  return v26;
}
