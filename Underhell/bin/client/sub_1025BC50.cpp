int __thiscall sub_1025BC50(_DWORD *this, int a2)
{
  int v2; // edi
  int v4; // eax
  int v5; // ecx
  int (__thiscall *v6)(_DWORD *, int *, const char *, int, int); // edx
  int (__thiscall *v7)(_DWORD *, int *, const char *, int, int); // edx
  char v9; // [esp+6Ch] [ebp-Ch]

  v2 = a2;
  sub_1024AB70((int)this, a2, v9);
  this[77] = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "ButtonBorder");
  this[78] = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "ButtonDepressedBorder");
  v4 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "ButtonKeyFocusBorder");
  a2 = -1;
  this[79] = v4;
  v5 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int, int))(*this + 324))(
                    this,
                    &a2,
                    "Button.TextColor",
                    -1,
                    v2);
  a2 = -16777216;
  this[80] = v5;
  this[81] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int, int))(*this + 324))(
                          this,
                          &a2,
                          "Button.BgColor",
                          -16777216,
                          v2);
  this[82] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, _DWORD, int))(*this + 324))(
                          this,
                          &a2,
                          "Button.ArmedTextColor",
                          this[80],
                          v2);
  this[83] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, _DWORD, int))(*this + 324))(
                          this,
                          &a2,
                          "Button.ArmedBgColor",
                          this[81],
                          v2);
  this[84] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, _DWORD, int))(*this + 324))(
                          this,
                          &a2,
                          "Button.DepressedTextColor",
                          this[80],
                          v2);
  this[85] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, _DWORD, int))(*this + 324))(
                          this,
                          &a2,
                          "Button.DepressedBgColor",
                          this[81],
                          v2);
  v6 = *(int (__thiscall **)(_DWORD *, int *, const char *, int, int))(*this + 324);
  a2 = -16777216;
  this[86] = *(_DWORD *)v6(this, &a2, "Button.FocusBorderColor", -16777216, v2);
  v7 = *(int (__thiscall **)(_DWORD *, int *, const char *, int, int))(*this + 324);
  a2 = -16737281;
  this[87] = *(_DWORD *)v7(this, &a2, "Button.BlinkColor", -16737281, v2);
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
}
