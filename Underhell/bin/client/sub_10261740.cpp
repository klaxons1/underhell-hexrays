int __thiscall sub_10261740(int this, int a2)
{
  int v3; // edi
  unsigned int v4; // ebx
  _DWORD *v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // eax
  int *v10; // eax
  int v11; // ebx
  _DWORD *v12; // eax
  unsigned int v13; // ebx
  int v14; // ebp
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // ebp
  int v19; // eax
  int v20; // eax
  int v22; // [esp+50h] [ebp-18h]

  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 360) + 244))(*(_DWORD *)(this + 360), 1, 0);
  v3 = a2;
  sub_10241570((unsigned int *)this, a2);
  v4 = *(_DWORD *)this;
  v5 = (_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)this + 328))(
                   this,
                   &a2,
                   "ListPanel.BgColor",
                   v3);
  (*(void (__thiscall **)(int, _DWORD))(v4 + 216))(this, *v5);
  v6 = *(_DWORD *)this;
  v7 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 8))(v3, "ButtonDepressedBorder");
  (*(void (__thiscall **)(int, int))(v6 + 252))(this, v7);
  v8 = **(_DWORD **)(this + 360);
  v9 = (_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)this + 328))(
                   this,
                   &a2,
                   "ListPanel.BgColor",
                   v3);
  (*(void (__thiscall **)(_DWORD, _DWORD))(v8 + 216))(*(_DWORD *)(this + 360), *v9);
  v10 = (int *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)this + 328))(
                 this,
                 &a2,
                 "ListPanel.TextColor",
                 v3);
  v22 = *v10;
  *(_DWORD *)(this + 420) = *v10;
  *(_DWORD *)(this + 424) = *(_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int, int))(*(_DWORD *)this + 324))(
                                         this,
                                         &a2,
                                         "ListPanel.DisabledTextColor",
                                         v22,
                                         v3);
  *(_DWORD *)(this + 428) = *(_DWORD *)(*(int (__thiscall **)(int, int *, const char *, _DWORD, int))(*(_DWORD *)this + 324))(
                                         this,
                                         &a2,
                                         "ListPanel.SelectedTextColor",
                                         *(_DWORD *)(this + 420),
                                         v3);
  *(_DWORD *)(this + 432) = *(_DWORD *)(*(int (__thiscall **)(int, int *, const char *, _DWORD, int))(*(_DWORD *)this + 324))(
                                         this,
                                         &a2,
                                         "ListPanel.DisabledSelectedTextColor",
                                         *(_DWORD *)(this + 420),
                                         v3);
  v11 = **(_DWORD **)(this + 440);
  v12 = (_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)this + 328))(
                    this,
                    &a2,
                    "ListPanel.EmptyListInfoTextColor",
                    v3);
  (*(void (__thiscall **)(_DWORD, _DWORD))(v11 + 20))(*(_DWORD *)(this + 440), *v12);
  v13 = *(_DWORD *)this;
  v14 = *(_DWORD *)v3;
  v15 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  v16 = (*(int (__thiscall **)(int, const char *, int))(v14 + 12))(v3, "Default", v15);
  (*(void (__thiscall **)(int, int))(v13 + 932))(this, v16);
  v17 = **(_DWORD **)(this + 440);
  v18 = *(_DWORD *)v3;
  v19 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  v20 = (*(int (__thiscall **)(int, const char *, int))(v18 + 12))(v3, "Default", v19);
  return (*(int (__thiscall **)(_DWORD, int))(v17 + 128))(*(_DWORD *)(this + 440), v20);
}
