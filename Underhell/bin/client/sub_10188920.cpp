int __thiscall sub_10188920(_DWORD **this, int a2)
{
  int v2; // edi
  int (__thiscall *v4)(int, const char *); // eax
  int v5; // eax
  _DWORD *v6; // ecx
  void (__thiscall *v7)(_DWORD *, _DWORD); // edx
  int (__thiscall *v8)(int, const char *); // eax
  int v9; // eax
  int *v10; // ecx
  int (__thiscall *v11)(int, int *, const char *, _DWORD); // edx
  int v12; // ebx
  _DWORD *v13; // eax

  v2 = a2;
  sub_1024E7E0((int)this, a2);
  ((void (__thiscall *)(_DWORD **, int))(*this)[69])(this, 2);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this[116] + 124))(this[116], 0);
  v4 = *(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8);
  a2 = *this[114];
  v5 = v4(v2, "ButtonDepressedBorder");
  (*(void (__thiscall **)(_DWORD *, int))(a2 + 252))(this[114], v5);
  v6 = this[114];
  v7 = *(void (__thiscall **)(_DWORD *, _DWORD))(*v6 + 216);
  a2 = 0;
  v7(v6, 0);
  v8 = *(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8);
  a2 = *this[115];
  v9 = v8(v2, "ButtonBorder");
  (*(void (__thiscall **)(_DWORD *, int))(a2 + 252))(this[115], v9);
  v10 = this[115];
  v11 = *(int (__thiscall **)(int, int *, const char *, _DWORD))(*(_DWORD *)v2 + 20);
  a2 = 0;
  v12 = *v10;
  v13 = (_DWORD *)v11(v2, &a2, "ProgressBar.FgColor", 0);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(v12 + 216))(this[115], *v13);
}
