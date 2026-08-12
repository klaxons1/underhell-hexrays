int __thiscall sub_1025F020(_DWORD *this, int a2)
{
  int v2; // edi
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // ebp
  _DWORD *v12; // eax
  int v13; // ebx
  _DWORD *v14; // ebp
  _DWORD *v15; // eax
  int v16; // ebx
  _DWORD *v17; // ebp
  _DWORD *v18; // eax
  int result; // eax
  _BYTE v20[4]; // [esp+78h] [ebp-4h] BYREF

  v2 = a2;
  sub_1025BC50(this, a2);
  v4 = *this;
  v5 = *(_DWORD *)v2;
  v6 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
  v7 = (*(int (__thiscall **)(int, const char *, int))(v5 + 12))(v2, "Marlett", v6);
  (*(void (__thiscall **)(_DWORD *, int))(v4 + 816))(this, v7);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 788))(this, 3);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 792))(this, 3, 0);
  v8 = *this;
  v9 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "ScrollBarButtonBorder");
  (*(void (__thiscall **)(_DWORD *, int))(v8 + 1016))(this, v9);
  v10 = *this;
  v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                    this,
                    &a2,
                    "ComboBoxButton.BgColor",
                    v2);
  v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, const char *, int))(*this + 328))(
                    this,
                    v20,
                    "ComboBoxButton.ArrowColor",
                    v2);
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v10 + 992))(this, *v12, *v11);
  v13 = *this;
  v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                    this,
                    &a2,
                    "ComboBoxButton.BgColor",
                    v2);
  v15 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, const char *, int))(*this + 328))(
                    this,
                    v20,
                    "ComboBoxButton.ArmedArrowColor",
                    v2);
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v13 + 996))(this, *v15, *v14);
  v16 = *this;
  v17 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                    this,
                    &a2,
                    "ComboBoxButton.BgColor",
                    v2);
  v18 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, const char *, int))(*this + 328))(
                    this,
                    v20,
                    "ComboBoxButton.ArmedArrowColor",
                    v2);
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v16 + 1000))(this, *v18, *v17);
  result = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                        this,
                        &a2,
                        "ComboBoxButton.DisabledBgColor",
                        v2);
  this[91] = result;
  return result;
}
