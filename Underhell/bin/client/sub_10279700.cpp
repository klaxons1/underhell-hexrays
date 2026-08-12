int __thiscall sub_10279700(_DWORD *this, int a2)
{
  int *v2; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  int v6; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // ebx
  int v10; // ebp
  int v11; // eax
  int v12; // eax
  char v14; // [esp+10h] [ebp-14h]
  _BYTE v15[4]; // [esp+20h] [ebp-4h] BYREF

  v2 = (int *)a2;
  sub_1024AB70((int)this, a2, v14);
  v4 = *this;
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int *))(*this + 328))(
                   this,
                   &a2,
                   "SectionedListPanel.HeaderTextColor",
                   v2);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(v4 + 220))(this, *v5);
  this[73] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int *))(*this + 328))(
                          this,
                          &a2,
                          "SectionedListPanel.DividerColor",
                          v2);
  v6 = *this;
  v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 224))(this, &a2);
  v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, const char *, _DWORD, int *))(v6 + 324))(
                   this,
                   v15,
                   "SectionedListPanelHeader.BgColor",
                   *v7,
                   v2);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(v6 + 216))(this, *v8);
  v9 = *this;
  v10 = *v2;
  v11 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
  v12 = (*(int (__thiscall **)(int *, const char *, int))(v10 + 12))(v2, "DefaultVerySmall", v11);
  (*(void (__thiscall **)(_DWORD *, int))(v9 + 816))(this, v12);
  return (*(int (__thiscall **)(_DWORD *))(*this + 852))(this);
}
