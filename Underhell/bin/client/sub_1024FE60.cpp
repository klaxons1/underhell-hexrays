int __thiscall sub_1024FE60(_DWORD *this, int a2)
{
  int v2; // edi
  _BYTE *v4; // eax
  _BYTE *v5; // ebx
  _BYTE *v6; // eax
  _BYTE *v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // edi
  int v11; // eax

  v2 = a2;
  sub_1026E490(a2);
  this[102] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                           this,
                           &a2,
                           "FrameSystemButton.FgColor",
                           v2);
  this[103] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                           this,
                           &a2,
                           "FrameSystemButton.BgColor",
                           v2);
  if ( sub_1022CEF0(this + 105) )
    v4 = sub_1022D040(this + 105);
  else
    v4 = (_BYTE *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 4))(v2, "FrameSystemButton.Icon");
  v5 = v4;
  if ( sub_1022CEF0(this + 109) )
    v6 = sub_1022D040(this + 109);
  else
    v6 = (_BYTE *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 4))(v2, "FrameSystemButton.DisabledIcon");
  v7 = v6;
  this[100] = (*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)dword_1047CA7C + 24))(dword_1047CA7C, v5, 0);
  v8 = (*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)dword_1047CA7C + 24))(dword_1047CA7C, v7, 0);
  v9 = *this;
  this[101] = v8;
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v9 + 792))(this, 0, 0);
  v10 = *this;
  v11 = (*(int (__thiscall **)(_DWORD *))(*this + 204))(this);
  return (*(int (__thiscall **)(_DWORD *, int))(v10 + 200))(this, v11);
}
