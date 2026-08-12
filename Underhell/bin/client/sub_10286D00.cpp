int __thiscall sub_10286D00(unsigned int *this, int a2)
{
  int v2; // edi
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _BYTE v10[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_10241570(this, a2);
  v4 = *this;
  v5 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "ButtonDepressedBorder");
  (*(void (__thiscall **)(unsigned int *, int))(v4 + 252))(this, v5);
  v6 = *this;
  v7 = (_DWORD *)(*(int (__thiscall **)(unsigned int *, int *))(*this + 224))(this, &a2);
  v8 = (_DWORD *)(*(int (__thiscall **)(unsigned int *, _BYTE *, const char *, _DWORD, int))(v6 + 324))(
                   this,
                   v10,
                   "ListPanel.BgColor",
                   *v7,
                   v2);
  return (*(int (__thiscall **)(unsigned int *, _DWORD))(v6 + 216))(this, *v8);
}
