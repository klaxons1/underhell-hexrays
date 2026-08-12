int __thiscall sub_10268000(unsigned int *this, int a2)
{
  int v2; // edi
  unsigned int v4; // ebx
  _DWORD *v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int *v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edx
  unsigned int v14; // [esp+Ch] [ebp-14h]

  v2 = a2;
  sub_10241570(this, a2);
  v4 = *this;
  v5 = (_DWORD *)(*(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328))(
                   this,
                   &a2,
                   "ListPanel.BgColor",
                   v2);
  (*(void (__thiscall **)(unsigned int *, _DWORD))(v4 + 216))(this, *v5);
  v6 = *this;
  v7 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "ButtonDepressedBorder");
  (*(void (__thiscall **)(unsigned int *, int))(v6 + 252))(this, v7);
  v8 = (unsigned int *)(*(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328))(
                         this,
                         &a2,
                         "ListPanel.TextColor",
                         v2);
  v14 = *v8;
  this[70] = *v8;
  this[71] = *(_DWORD *)(*(int (__thiscall **)(unsigned int *, int *, const char *, unsigned int, int))(*this + 324))(
                          this,
                          &a2,
                          "ListPanel.SelectedTextColor",
                          v14,
                          v2);
  v9 = *(_DWORD *)v2;
  v10 = (*(int (__thiscall **)(unsigned int *))(*this + 84))(this);
  v11 = (*(int (__thiscall **)(int, const char *, int))(v9 + 12))(v2, "Default", v10);
  v12 = *this;
  this[69] = v11;
  return (*(int (__thiscall **)(unsigned int *, int))(v12 + 820))(this, v11);
}
