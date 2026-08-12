int __thiscall sub_1024D140(_DWORD *this, int a2)
{
  int v2; // edi
  int v4; // eax
  int (__thiscall *v5)(_DWORD *, _DWORD); // edx

  v2 = a2;
  sub_1025BC50(a2);
  this[94] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                          this,
                          &a2,
                          "FrameTitleButton.FgColor",
                          v2);
  this[95] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                          this,
                          &a2,
                          "FrameTitleButton.BgColor",
                          v2);
  this[96] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                          this,
                          &a2,
                          "FrameTitleButton.DisabledFgColor",
                          v2);
  this[97] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                          this,
                          &a2,
                          "FrameTitleButton.DisabledBgColor",
                          v2);
  this[91] = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "TitleButtonBorder");
  this[92] = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "TitleButtonDepressedBorder");
  v4 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "TitleButtonDisabledBorder");
  v5 = *(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1052);
  this[93] = v4;
  return v5(this, *((unsigned __int8 *)this + 392));
}
