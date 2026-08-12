int (__thiscall ***__thiscall sub_1027F930(int this, _DWORD *a2, int a3, int a4))(void *, int, int)
{
  int v5; // esi
  const char *v6; // eax
  _DWORD *v7; // edi
  int (__thiscall ***v8)(void *, int, int); // esi
  char *v9; // eax

  if ( !a2 )
    return 0;
  v5 = sub_10229D00(32);
  if ( v5 )
  {
    v6 = (const char *)sub_1022B4C0(a2, "ControlName", (int)Locale);
    v7 = (_DWORD *)sub_1022B0E0(v5, (int)"ControlFactory", "ControlName", v6);
  }
  else
  {
    v7 = 0;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 108) + 44))(*(_DWORD *)(this + 108), v7);
  v8 = (int (__thiscall ***)(void *, int, int))sub_1022A910(v7, "PanelPtr", 0);
  sub_1022AF00(v7);
  if ( v8 )
  {
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD))(*v8)[39])(v8, *(_DWORD *)(this + 112));
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*v8)[71])(v8, this);
    sub_10236140(v8, a3, a4);
    v9 = (char *)sub_10229A00(a2);
    sub_10236070(v8, v9);
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD *))(*v8)[84])(v8, a2);
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD))(*v8)[43])(v8, *(_DWORD *)(this + 112));
    sub_102370A0(v8, 1);
    sub_102370D0(v8, 1);
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*v8)[41])(v8, 1);
  }
  return v8;
}
