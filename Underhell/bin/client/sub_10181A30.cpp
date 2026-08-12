int __thiscall sub_10181A30(int *this, int a2)
{
  int v2; // edi
  int (__thiscall *v4)(int, int *, const char *, _DWORD); // eax
  int v5; // ebx
  _DWORD *v6; // eax

  v2 = a2;
  sub_1024E7E0((int)this, a2);
  v4 = *(int (__thiscall **)(int, int *, const char *, _DWORD))(*(_DWORD *)v2 + 20);
  v5 = *this;
  a2 = 0;
  v6 = (_DWORD *)v4(v2, &a2, "ViewportBG", 0);
  return (*(int (__thiscall **)(int *, _DWORD))(v5 + 216))(this, *v6);
}
