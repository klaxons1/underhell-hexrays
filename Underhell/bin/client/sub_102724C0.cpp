int __thiscall sub_102724C0(_DWORD *this, int a2)
{
  int v2; // edi
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // ebx
  _DWORD *v13; // ebp
  _DWORD *v14; // eax
  int v15; // ebx
  _DWORD *v16; // ebp
  _DWORD *v17; // eax
  int v18; // ebx
  _DWORD *v19; // ebp
  _DWORD *v20; // eax
  _BYTE v22[4]; // [esp+68h] [ebp-4h] BYREF

  v2 = a2;
  sub_1025BC50(this, a2);
  v4 = *this;
  v5 = *(_DWORD *)v2;
  v6 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
  v7 = (*(int (__thiscall **)(int, const char *, int))(v5 + 12))(v2, "Marlett", v6);
  (*(void (__thiscall **)(_DWORD *, int))(v4 + 816))(this, v7);
  v8 = *this;
  v9 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "ScrollBarButtonBorder");
  (*(void (__thiscall **)(_DWORD *, int))(v8 + 1016))(this, v9);
  v10 = *this;
  v11 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "ScrollBarButtonDepressedBorder");
  (*(void (__thiscall **)(_DWORD *, int))(v10 + 1020))(this, v11);
  v12 = *this;
  v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                    this,
                    &a2,
                    "ScrollBarButton.BgColor",
                    v2);
  v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, const char *, int))(*this + 328))(
                    this,
                    v22,
                    "ScrollBarButton.FgColor",
                    v2);
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v12 + 992))(this, *v14, *v13);
  v15 = *this;
  v16 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                    this,
                    &a2,
                    "ScrollBarButton.ArmedBgColor",
                    v2);
  v17 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, const char *, int))(*this + 328))(
                    this,
                    v22,
                    "ScrollBarButton.ArmedFgColor",
                    v2);
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v15 + 996))(this, *v17, *v16);
  v18 = *this;
  v19 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                    this,
                    &a2,
                    "ScrollBarButton.DepressedBgColor",
                    v2);
  v20 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, const char *, int))(*this + 328))(
                    this,
                    v22,
                    "ScrollBarButton.DepressedFgColor",
                    v2);
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v18 + 1000))(this, *v20, *v19);
}
