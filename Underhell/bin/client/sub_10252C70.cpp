int __thiscall sub_10252C70(unsigned int *this, int a2)
{
  int v2; // edi
  unsigned int v4; // ebx
  _DWORD *v5; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // eax
  unsigned int v8; // ebx
  _DWORD *v9; // eax
  int (__thiscall *v10)(unsigned int *, int *, const char *, _DWORD, int); // edx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edx
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  unsigned int v20; // ecx
  _BYTE v22[4]; // [esp+68h] [ebp-4h] BYREF

  v2 = a2;
  sub_10241570(this, a2);
  v4 = *this;
  v5 = (_DWORD *)(*(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328))(
                   this,
                   &a2,
                   "TextEntry.TextColor",
                   v2);
  (*(void (__thiscall **)(unsigned int *, _DWORD))(v4 + 220))(this, *v5);
  v6 = *this;
  v7 = (_DWORD *)(*(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328))(
                   this,
                   &a2,
                   "TextEntry.BgColor",
                   v2);
  (*(void (__thiscall **)(unsigned int *, _DWORD))(v6 + 216))(this, *v7);
  this[87] = *(_DWORD *)(*(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328))(
                          this,
                          &a2,
                          "TextEntry.CursorColor",
                          v2);
  this[88] = *(_DWORD *)(*(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328))(
                          this,
                          &a2,
                          "TextEntry.DisabledTextColor",
                          v2);
  this[89] = *(_DWORD *)(*(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328))(
                          this,
                          &a2,
                          "TextEntry.DisabledBgColor",
                          v2);
  v8 = *this;
  v9 = (_DWORD *)(*(int (__thiscall **)(unsigned int *, int *))(*this + 228))(this, &a2);
  this[91] = *(_DWORD *)(*(int (__thiscall **)(unsigned int *, _BYTE *, const char *, _DWORD, int))(v8 + 324))(
                          this,
                          v22,
                          "TextEntry.SelectedTextColor",
                          *v9,
                          v2);
  this[90] = *(_DWORD *)(*(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328))(
                          this,
                          &a2,
                          "TextEntry.SelectedBgColor",
                          v2);
  this[92] = *(_DWORD *)(*(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328))(
                          this,
                          &a2,
                          "TextEntry.OutOfFocusSelectedBgColor",
                          v2);
  v10 = *(int (__thiscall **)(unsigned int *, int *, const char *, _DWORD, int))(*this + 324);
  a2 = 0;
  *(unsigned int *)((char *)this + 381) = *(_DWORD *)v10(this, &a2, "TextEntry.FocusEdgeColor", 0, v2);
  v11 = *this;
  v12 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "ButtonDepressedBorder");
  (*(void (__thiscall **)(unsigned int *, int))(v11 + 252))(this, v12);
  v13 = *(_DWORD *)v2;
  v14 = (*(int (__thiscall **)(unsigned int *))(*this + 84))(this);
  v15 = (*(int (__thiscall **)(int, const char *, int))(v13 + 12))(v2, "Default", v14);
  v16 = *this;
  this[83] = v15;
  v17 = *(_DWORD *)v2;
  v18 = (*(int (__thiscall **)(unsigned int *))(v16 + 84))(this);
  v19 = (*(int (__thiscall **)(int, const char *, int))(v17 + 12))(v2, "DefaultVerySmall", v18);
  v20 = this[83];
  this[84] = v19;
  return (*(int (__thiscall **)(unsigned int *, unsigned int))(*this + 912))(this, v20);
}
