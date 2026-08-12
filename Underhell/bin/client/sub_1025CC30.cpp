int __thiscall sub_1025CC30(_DWORD *this, int a2)
{
  int *v2; // edi
  int v4; // ebx
  _DWORD *v5; // ebp
  _DWORD *v6; // eax
  int (__thiscall *v7)(_DWORD *, int *, const char *, int, int *); // edx
  int (__thiscall *v8)(_DWORD *, int *, const char *, int, int *); // eax
  int (__thiscall *v9)(_DWORD *, int *, const char *, int, int *); // eax
  int v10; // ebp
  _DWORD *v11; // eax
  int (__thiscall *v12)(_DWORD *, int *, const char *, int, int *); // edx
  int (__thiscall *v13)(_DWORD *, int *, const char *, int, int *); // edx
  int v14; // ebx
  int v15; // ebp
  int v16; // eax
  int v17; // eax
  _BYTE v19[4]; // [esp+7Ch] [ebp-4h] BYREF

  v2 = (int *)a2;
  sub_1025D240(a2);
  v4 = *this;
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 224))(this, &a2);
  v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, const char *, int *))(*this + 328))(
                   this,
                   v19,
                   "CheckButton.TextColor",
                   v2);
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v4 + 992))(this, *v6, *v5);
  v7 = *(int (__thiscall **)(_DWORD *, int *, const char *, int, int *))(*this + 324);
  a2 = -13154754;
  *(_DWORD *)(this[94] + 112) = *(_DWORD *)v7(this, &a2, "CheckButton.BgColor", -13154754, v2);
  v8 = *(int (__thiscall **)(_DWORD *, int *, const char *, int, int *))(*this + 324);
  a2 = -15461356;
  *(_DWORD *)(this[94] + 100) = *(_DWORD *)v8(this, &a2, "CheckButton.Border1", -15461356, v2);
  a2 = -10855846;
  *(_DWORD *)(this[94] + 104) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int, int *))(*this + 324))(
                                             this,
                                             &a2,
                                             "CheckButton.Border2",
                                             -10855846,
                                             v2);
  v9 = *(int (__thiscall **)(_DWORD *, int *, const char *, int, int *))(*this + 324);
  a2 = -15461356;
  *(_DWORD *)(this[94] + 108) = *(_DWORD *)v9(this, &a2, "CheckButton.Check", -15461356, v2);
  v10 = *this;
  v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int *))(*this + 328))(
                    this,
                    &a2,
                    "ControlText",
                    v2);
  *(_DWORD *)((char *)this + 381) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, const char *, _DWORD, int *))(v10 + 324))(
                                                 this,
                                                 v19,
                                                 "CheckButton.SelectedTextColor",
                                                 *v11,
                                                 v2);
  v12 = *(int (__thiscall **)(_DWORD *, int *, const char *, int, int *))(*this + 324);
  a2 = -8224126;
  *(_DWORD *)((char *)this + 385) = *(_DWORD *)v12(this, &a2, "CheckButton.DisabledFgColor", -8224126, v2);
  v13 = *(int (__thiscall **)(_DWORD *, int *, const char *, int, int *))(*this + 324);
  a2 = -13154754;
  *(_DWORD *)((char *)this + 389) = *(_DWORD *)v13(this, &a2, "CheckButton.DisabledBgColor", -13154754, v2);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 788))(this, 3);
  v14 = *(_DWORD *)this[94];
  v15 = *v2;
  v16 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
  v17 = (*(int (__thiscall **)(int *, const char *, int))(v15 + 12))(v2, "Marlett", v16);
  (*(void (__thiscall **)(_DWORD, int))(v14 + 128))(this[94], v17);
  sub_1027CE60(this[94]);
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, int))(*this + 836))(this, 0, this[94], 6);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 264))(this, 0);
}
