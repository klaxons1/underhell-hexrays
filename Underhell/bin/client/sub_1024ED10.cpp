int __thiscall sub_1024ED10(int this)
{
  int v2; // eax
  int v3; // eax
  int *v4; // edi
  int v5; // ebx
  int v6; // eax
  int *v7; // edi
  int v8; // ebx
  int v9; // eax
  int *v10; // edi
  int v11; // ebx
  int v12; // eax

  if ( *(_DWORD *)(this + 388) )
    return *(_DWORD *)(this + 388);
  v2 = sub_100DDA40(392);
  if ( v2 )
    v3 = sub_1026D6B0(v2, this, 0);
  else
    v3 = 0;
  *(_DWORD *)(this + 388) = v3;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 124))(v3, 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 388) + 172))(*(_DWORD *)(this + 388), this);
  (*(void (__thiscall **)(_DWORD, const char *, const char *, const char *, int, _DWORD))(**(_DWORD **)(this + 388) + 800))(
    *(_DWORD *)(this + 388),
    "Minimize",
    "#SysMenu_Minimize",
    "Minimize",
    this,
    0);
  (*(void (__thiscall **)(_DWORD, const char *, const char *, const char *, int, _DWORD))(**(_DWORD **)(this + 388) + 800))(
    *(_DWORD *)(this + 388),
    "Maximize",
    "#SysMenu_Maximize",
    "Maximize",
    this,
    0);
  (*(void (__thiscall **)(_DWORD, const char *, const char *, const char *, int, _DWORD))(**(_DWORD **)(this + 388) + 800))(
    *(_DWORD *)(this + 388),
    "Close",
    "#SysMenu_Close",
    "Close",
    this,
    0);
  v4 = (int *)sub_10239950(*(int (__thiscall ****)(_DWORD))(this + 388), "Minimize", 0);
  if ( v4 )
  {
    v5 = *v4;
    v6 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 328) + 128))(*(_DWORD *)(this + 328));
    (*(void (__thiscall **)(int *, int))(v5 + 200))(v4, v6);
  }
  v7 = (int *)sub_10239950(*(int (__thiscall ****)(_DWORD))(this + 388), "Maximize", 0);
  if ( v7 )
  {
    v8 = *v7;
    v9 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 332) + 128))(*(_DWORD *)(this + 332));
    (*(void (__thiscall **)(int *, int))(v8 + 200))(v7, v9);
  }
  v10 = (int *)sub_10239950(*(int (__thiscall ****)(_DWORD))(this + 388), "Close", 0);
  if ( v10 )
  {
    v11 = *v10;
    v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 340) + 128))(*(_DWORD *)(this + 340));
    (*(void (__thiscall **)(int *, int))(v11 + 200))(v10, v12);
  }
  return *(_DWORD *)(this + 388);
}
