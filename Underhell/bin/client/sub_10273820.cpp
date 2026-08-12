int __thiscall sub_10273820(int this, int a2)
{
  int v2; // edi
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  unsigned int v9; // ebx
  int v10; // ebp
  int v11; // eax
  int v12; // eax
  int v13; // edi
  _DWORD *v14; // eax
  _BYTE v16[4]; // [esp+2Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_10241570((unsigned int *)this, a2);
  v4 = *(_DWORD *)this;
  v5 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "ButtonDepressedBorder");
  (*(void (__thiscall **)(int, int))(v4 + 252))(this, v5);
  v6 = *(_DWORD *)this;
  v7 = (_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)this + 328))(
                   this,
                   &a2,
                   "WindowDisabledBgColor",
                   v2);
  v8 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, const char *, _DWORD, int))(v6 + 324))(
                   this,
                   v16,
                   "TreeView.BgColor",
                   *v7,
                   v2);
  (*(void (__thiscall **)(int, _DWORD))(v6 + 216))(this, *v8);
  v9 = *(_DWORD *)this;
  v10 = *(_DWORD *)v2;
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  v12 = (*(int (__thiscall **)(int, const char *, int))(v10 + 12))(v2, "Default", v11);
  (*(void (__thiscall **)(int, int))(v9 + 808))(this, v12);
  v13 = **(_DWORD **)(this + 296);
  v14 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 224))(this, &a2);
  return (*(int (__thiscall **)(_DWORD, _DWORD))(v13 + 216))(*(_DWORD *)(this + 296), *v14);
}
