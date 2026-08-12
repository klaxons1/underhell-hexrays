int __thiscall sub_1026DB40(unsigned int *this, int a2)
{
  int v2; // edi
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // ebp
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _BYTE v11[4]; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  sub_10241570(this, a2);
  v4 = *this;
  v5 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "ButtonBorder");
  (*(void (__thiscall **)(unsigned int *, int))(v4 + 252))(this, v5);
  v6 = *this;
  v7 = *(_DWORD *)v2;
  v8 = (_DWORD *)(*(int (__thiscall **)(unsigned int *, int *))(*this + 224))(this, &a2);
  v9 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, const char *, _DWORD))(v7 + 20))(v2, v11, "MenuBar.BgColor", *v8);
  return (*(int (__thiscall **)(unsigned int *, _DWORD))(v6 + 216))(this, *v9);
}
