int __userpurge sub_101E9790@<eax>(int a1@<ecx>, void (**a2)(_DWORD, const char *, ...)@<edi>, int a3)
{
  int v4; // eax
  int v5; // ebx
  char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  int v11; // eax
  int v12; // ecx
  const char *v13; // eax
  int v14; // eax
  int v15; // eax
  const char *v16; // eax
  int v18; // [esp-8h] [ebp-18h]
  int v19; // [esp-4h] [ebp-14h]
  int v20; // [esp+Ch] [ebp-4h] BYREF

  v4 = sub_100DDA40(156);
  if ( v4 )
    v5 = sub_101EC870(v4);
  else
    v5 = 0;
  v18 = *(_DWORD *)(a1 + 56);
  v20 = v5;
  sub_10258C50(v18, &v20);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164), 0);
  v6 = (char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
  sub_101EAB90(v6);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164), 1);
  v7 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
  if ( _stricmp(v7, "{") )
    (*(void (__cdecl **)(_DWORD, const char *))(**(_DWORD **)(a1 + 164) + 12))(*(_DWORD *)(a1 + 164), "expecting {");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164), 1);
  v8 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
  if ( _stricmp(v8, "}") )
  {
    v19 = (int)a2;
    do
    {
      v9 = (const char *)(***(int (__thiscall ****)(_DWORD, int))(a1 + 164))(*(_DWORD *)(a1 + 164), v19);
      if ( !_stricmp(v9, "event") )
      {
        sub_101E8A20(a1, a3, (int)a2, a3, v5);
      }
      else
      {
        v10 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
        v11 = _stricmp(v10, "active");
        v12 = *(_DWORD *)(a1 + 164);
        if ( v11 )
        {
          a2 = (void (**)(_DWORD, const char *, ...))(*(_DWORD *)v12 + 12);
          v15 = (**(int (***)(void))v12)();
          (*a2)(*(_DWORD *)(a1 + 164), "expecting event got %s\n", v15);
        }
        else
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 4))(v12, 1);
          v13 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
          v14 = atoi(v13);
          sub_101EABD0(v14 != 0);
        }
      }
      v19 = 1;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164));
      v16 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
    }
    while ( _stricmp(v16, "}") );
  }
  if ( a3 )
  {
    sub_101EA9B0(v5);
    sub_101EABC0(a3);
  }
  return v5;
}
