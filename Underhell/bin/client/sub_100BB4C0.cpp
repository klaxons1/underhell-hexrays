int __thiscall sub_100BB4C0(_DWORD *this, int *a2)
{
  int *v3; // edi
  int (__thiscall *v4)(_DWORD *, int **); // edx
  int v5; // ebx
  _DWORD *v6; // eax
  void (__thiscall *v7)(_DWORD *, int *); // edx
  __int16 v9; // [esp+Ch] [ebp-4h] BYREF
  char v10; // [esp+Eh] [ebp-2h]

  (*(void (__thiscall **)(_DWORD *, const char *, _DWORD, _DWORD))(*this + 768))(this, "resource/UI/BaseChat.res", 0, 0);
  v3 = a2;
  sub_10241570(a2);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 276))(this, 2);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 260))(this, 1);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 264))(this, 1);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 524))(this, 0);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 520))(this, 0);
  v4 = *(int (__thiscall **)(_DWORD *, int **))(*this + 224);
  this[73] = 0;
  v5 = *v3;
  v6 = (_DWORD *)v4(this, &a2);
  (*(void (__thiscall **)(int *, __int16 *, const char *, _DWORD))(v5 + 20))(v3, &v9, "DullWhite", *v6);
  v7 = *(void (__thiscall **)(_DWORD *, int *))(*this + 216);
  LOWORD(a2) = v9;
  BYTE2(a2) = v10;
  HIBYTE(a2) = 127;
  v7(this, a2);
  return sub_1025A5B0(0);
}
