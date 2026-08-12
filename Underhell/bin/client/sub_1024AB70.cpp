int __userpurge sub_1024AB70@<eax>(int a1@<ecx>, int a2, char a3)
{
  _DWORD *v3; // edi
  unsigned int v5; // ebp
  int (__thiscall **v6)(_DWORD *, _DWORD, int); // ebx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebp
  int (__thiscall **v10)(_DWORD *, const char *, int); // ebx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  _DWORD *v16; // ecx
  unsigned int v17; // ebx
  _DWORD *v18; // eax
  unsigned int v19; // ebx
  _DWORD *v20; // eax
  unsigned int v21; // ebx
  _DWORD *v22; // eax
  unsigned int v23; // ebx
  int (__stdcall *v24)(_UNKNOWN **, const char *); // edx
  _DWORD *v25; // eax
  int result; // eax
  int v27; // [esp+54h] [ebp-8h] BYREF
  _BYTE v28[4]; // [esp+58h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+5Ch] [ebp+0h] BYREF

  v3 = (_DWORD *)a2;
  sub_10241570((unsigned int *)a1, a2);
  if ( *(_DWORD *)(a1 + 276) )
  {
    v5 = *(_DWORD *)a1;
    v6 = (int (__thiscall **)(_DWORD *, _DWORD, int))(*v3 + 12);
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 84))(a1);
    v8 = (*v6)(v3, *(_DWORD *)(a1 + 276), v7);
    (*(void (__thiscall **)(int, int))(v5 + 816))(a1, v8);
  }
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 820))(a1) )
  {
    v9 = *(_DWORD *)a1;
    v10 = (int (__thiscall **)(_DWORD *, const char *, int))(*v3 + 12);
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 84))(a1);
    v12 = (*v10)(v3, "Default", v11);
    (*(void (__thiscall **)(int, int))(v9 + 816))(a1, v12);
  }
  if ( *(_BYTE *)(a1 + 282) || *(_BYTE *)(a1 + 283) )
  {
    sub_102361D0((int (__thiscall ***)(void *, int, int))a1, (int)&a2, (int)&v27);
    v13 = *(_DWORD *)(a1 + 216);
    a2 -= *(_DWORD *)(a1 + 240);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v13 + 16))(v13, a2, v27);
    sub_1027D430(*(_DWORD *)(a1 + 216));
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)(a1 + 216) + 8))(*(_DWORD *)(a1 + 216), &v27, &a2);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 216) + 16))(*(_DWORD *)(a1 + 216), v27, a2);
  }
  v14 = 0;
  if ( *(int *)(a1 + 232) > 0 )
  {
    v15 = 0;
    do
    {
      v16 = (_DWORD *)(v15 + *(_DWORD *)(a1 + 220));
      if ( *v16 && v14 != *(_DWORD *)(a1 + 260) )
        *v16 = 0;
      ++v14;
      v15 += 12;
    }
    while ( v14 < *(_DWORD *)(a1 + 232) );
  }
  v17 = *(_DWORD *)a1;
  v18 = (_DWORD *)(*(int (__thiscall **)(int, int *, const char *, _DWORD *))(*(_DWORD *)a1 + 328))(
                    a1,
                    &a2,
                    "Label.DisabledFgColor1",
                    v3);
  (*(void (__thiscall **)(int, _DWORD))(v17 + 796))(a1, *v18);
  v19 = *(_DWORD *)a1;
  v20 = (_DWORD *)(*(int (__thiscall **)(int, char *, const char *, _DWORD *))(*(_DWORD *)a1 + 328))(
                    a1,
                    &a3,
                    "Label.DisabledFgColor2",
                    v3);
  (*(void (__thiscall **)(int, _DWORD))(v19 + 800))(a1, *v20);
  v21 = *(_DWORD *)a1;
  v22 = (_DWORD *)(*(int (__thiscall **)(int, char *, const char *, _DWORD *))(*(_DWORD *)a1 + 328))(
                    a1,
                    &a3,
                    "Label.BgColor",
                    v3);
  (*(void (__thiscall **)(int, _DWORD))(v21 + 216))(a1, *v22);
  v23 = *(_DWORD *)a1;
  v24 = *(int (__stdcall **)(_UNKNOWN **, const char *))(*(_DWORD *)a1 + 328);
  if ( *(_DWORD *)(a1 + 264) == 1 )
  {
    v25 = (_DWORD *)v24(&retaddr, "Label.TextDullColor");
  }
  else if ( *(_DWORD *)(a1 + 264) == 2 )
  {
    v25 = (_DWORD *)v24((_UNKNOWN **)v28, "Label.TextBrightColor");
  }
  else
  {
    v25 = (_DWORD *)v24((_UNKNOWN **)&a3, "Label.TextColor");
  }
  (*(void (__thiscall **)(int, _DWORD))(v23 + 220))(a1, *v25);
  result = *(_DWORD *)(*(int (__thiscall **)(int, int *, const char *, _DWORD *))(*(_DWORD *)a1 + 328))(
                        a1,
                        &a2,
                        "Label.SelectedTextColor",
                        v3);
  *(_DWORD *)(a1 + 256) = result;
  return result;
}
