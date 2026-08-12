int __thiscall sub_10189D20(_DWORD **this, int a2)
{
  void (__thiscall *v3)(_DWORD **, _DWORD); // edx
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // edi
  _DWORD *v7; // eax

  ((void (__thiscall *)(_DWORD **, const char *, _DWORD, _DWORD))(*this)[192])(this, "Resource/UI/Spectator.res", 0, 0);
  (*(void (__thiscall **)(_DWORD *, int))(*this[66] + 124))(this[66], 1);
  (*(void (__thiscall **)(_DWORD *, int))(*this[65] + 124))(this[65], 1);
  sub_10241570(a2);
  v3 = (void (__thiscall *)(_DWORD **, _DWORD))(*this)[54];
  a2 = 0;
  v3(this, 0);
  v4 = *this[65];
  v5 = (_DWORD *)((int (__thiscall *)(_DWORD **, int *))(*this)[219])(this, &a2);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(v4 + 216))(this[65], *v5);
  v6 = *this[66];
  v7 = (_DWORD *)((int (__thiscall *)(_DWORD **, int *))(*this)[219])(this, &a2);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(v6 + 216))(this[66], *v7);
  ((void (__thiscall *)(_DWORD **, _DWORD))(*this)[65])(this, 0);
  return ((int (__thiscall *)(_DWORD **, _DWORD))(*this)[63])(this, 0);
}
