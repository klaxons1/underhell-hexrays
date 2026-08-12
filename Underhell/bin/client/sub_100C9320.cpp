int __thiscall sub_100C9320(_DWORD *this, int a2)
{
  int v2; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  int v6; // eax
  int (__thiscall *v7)(_DWORD *, int *, const char *, int); // edx
  int v8; // ebx
  _DWORD *v9; // eax
  int v10; // eax

  v2 = a2;
  sub_10241570(a2);
  v4 = *this;
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                   this,
                   &a2,
                   "HintMessageFg",
                   v2);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(v4 + 220))(this, *v5);
  v6 = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)v2 + 12))(v2, "HudHintText", 1);
  v7 = *(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328);
  this[63] = v6;
  v8 = *(_DWORD *)this[65];
  v9 = (_DWORD *)v7(this, &a2, "HintMessageBg", v2);
  (*(void (__thiscall **)(_DWORD, _DWORD))(v8 + 216))(this[65], *v9);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[65] + 276))(this[65], 2);
  v10 = sub_102374F0(this);
  return sub_102361A0(0, v10);
}
