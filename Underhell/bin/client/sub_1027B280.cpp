int __thiscall sub_1027B280(_DWORD *this, int a2)
{
  int v2; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  char v7; // [esp+3Ch] [ebp-10h]
  _BYTE v8[4]; // [esp+48h] [ebp-4h] BYREF

  v2 = a2;
  sub_1024AB70((int)this, a2, v7);
  this[78] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                          this,
                          &a2,
                          "SectionedListPanel.BrightTextColor",
                          v2);
  this[79] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                          this,
                          &a2,
                          "SectionedListPanel.SelectedTextColor",
                          v2);
  this[80] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                          this,
                          &a2,
                          "SectionedListPanel.OutOfFocusSelectedTextColor",
                          v2);
  this[81] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                          this,
                          &a2,
                          "SectionedListPanel.SelectedBgColor",
                          v2);
  this[76] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                          this,
                          &a2,
                          "SectionedListPanel.TextColor",
                          v2);
  v4 = *this;
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 224))(this, &a2);
  this[77] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, const char *, _DWORD, int))(v4 + 324))(
                          this,
                          v8,
                          "SectionedListPanel.BgColor",
                          *v5,
                          v2);
  this[82] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                          this,
                          &a2,
                          "SectionedListPanel.OutOfFocusSelectedBgColor",
                          v2);
  return (*(int (__thiscall **)(_DWORD *))(*this + 852))(this);
}
