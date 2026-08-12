int __thiscall sub_10271380(int *this, int a2)
{
  int v2; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // eax
  int v8; // ebx
  _DWORD *v9; // eax
  _BYTE v11[4]; // [esp+24h] [ebp-4h] BYREF

  v2 = a2;
  sub_1025D240(this, a2);
  v4 = *(_DWORD *)this[94];
  v5 = (*(int (__thiscall **)(int *))(*this + 84))(this);
  (*(void (__thiscall **)(int, int, int))(v4 + 104))(this[94], v2, v5);
  v6 = *this;
  v7 = (_DWORD *)(*(int (__thiscall **)(int *, int *, const char *, int))(*this + 328))(
                   this,
                   &a2,
                   "RadioButton.TextColor",
                   v2);
  (*(void (__thiscall **)(int *, _DWORD))(v6 + 220))(this, *v7);
  v8 = *this;
  v9 = (_DWORD *)(*(int (__thiscall **)(int *, int *, const char *, int))(*this + 328))(this, &a2, "ControlText", v2);
  this[96] = *(_DWORD *)(*(int (__thiscall **)(int *, _BYTE *, const char *, _DWORD, int))(v8 + 324))(
                          this,
                          v11,
                          "RadioButton.SelectedTextColor",
                          *v9,
                          v2);
  (*(void (__thiscall **)(int *, int))(*this + 788))(this, 3);
  (*(void (__thiscall **)(int *, _DWORD, int, _DWORD))(*this + 836))(this, 0, this[94], 0);
  return (*(int (__thiscall **)(int *, _DWORD))(*this + 264))(this, 0);
}
