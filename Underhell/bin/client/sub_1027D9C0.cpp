int __thiscall sub_1027D9C0(unsigned int *this, int a2)
{
  int v2; // edi
  unsigned int v4; // ebx
  int v5; // ebp
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  _BYTE v11[4]; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  sub_10241570(this, a2);
  v4 = *this;
  v5 = *(_DWORD *)v2;
  v6 = (_DWORD *)(*(int (__thiscall **)(unsigned int *, int *))(*this + 224))(this, &a2);
  v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, const char *, _DWORD))(v5 + 20))(v2, v11, "HTML.BgColor", *v6);
  (*(void (__thiscall **)(unsigned int *, _DWORD))(v4 + 216))(this, *v7);
  v8 = *this;
  v9 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "BrowserBorder");
  (*(void (__thiscall **)(unsigned int *, int))(v8 + 252))(this, v9);
  return (*(int (__thiscall **)(unsigned int *))(*this + 804))(this);
}
