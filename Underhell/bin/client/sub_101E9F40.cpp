char *__usercall sub_101E9F40@<eax>(int a1@<ecx>, void (**a2)(_DWORD, const char *, ...)@<edi>)
{
  int v3; // eax
  char *v4; // ebx
  char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  bool v10; // zf
  int v11; // eax
  char *v12; // eax
  const char *v13; // eax
  int v14; // eax
  int v15; // ecx
  const char *v16; // eax
  int v17; // eax
  int v18; // eax
  const char *v19; // eax
  int v21; // [esp-8h] [ebp-14h]
  int v22; // [esp-4h] [ebp-10h]
  char *v23; // [esp+8h] [ebp-4h] BYREF

  v3 = sub_100DDA40(280);
  if ( v3 )
    v4 = (char *)sub_101EA970(v3);
  else
    v4 = 0;
  v21 = *(_DWORD *)(a1 + 36);
  v23 = v4;
  sub_10258C50(v21, &v23);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164), 0);
  v5 = (char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
  sub_101EA8B0(v4, v5);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164), 1);
  v6 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
  if ( _stricmp(v6, "{") )
    (*(void (__cdecl **)(_DWORD, const char *))(**(_DWORD **)(a1 + 164) + 12))(*(_DWORD *)(a1 + 164), "expecting {");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164), 1);
  v7 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
  if ( _stricmp(v7, "}") )
  {
    v22 = (int)a2;
    do
    {
      v8 = (const char *)(***(int (__thiscall ****)(_DWORD, int))(a1 + 164))(*(_DWORD *)(a1 + 164), v22);
      if ( !_stricmp(v8, "channel") )
      {
        sub_101E9790(a1, a2, (int)v4);
      }
      else
      {
        v9 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
        v10 = _stricmp(v9, "faceposermodel") == 0;
        v11 = **(_DWORD **)(a1 + 164);
        if ( v10 )
        {
          (*(void (__stdcall **)(int))(v11 + 4))(1);
          v12 = (char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
          sub_101EA8D0(v12);
        }
        else
        {
          v13 = (const char *)(*(int (**)(void))v11)();
          v14 = _stricmp(v13, "active");
          v15 = *(_DWORD *)(a1 + 164);
          if ( v14 )
          {
            a2 = (void (**)(_DWORD, const char *, ...))(*(_DWORD *)v15 + 12);
            v18 = (**(int (***)(void))v15)();
            (*a2)(*(_DWORD *)(a1 + 164), "expecting channel got %s\n", v18);
          }
          else
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 4))(v15, 1);
            v16 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
            v17 = atoi(v16);
            sub_101EA8F0(v17 != 0);
          }
        }
      }
      v22 = 1;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 164) + 4))(*(_DWORD *)(a1 + 164));
      v19 = (const char *)(***(int (__thiscall ****)(_DWORD))(a1 + 164))(*(_DWORD *)(a1 + 164));
    }
    while ( _stricmp(v19, "}") );
  }
  return v4;
}
