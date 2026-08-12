int __thiscall sub_10270B70(unsigned int *this, int a2)
{
  int v2; // edi
  unsigned int v4; // ebx
  _DWORD *v5; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // eax
  unsigned int v8; // ebx
  int v9; // eax

  v2 = a2;
  sub_10241570(this, a2);
  v4 = *this;
  v5 = (_DWORD *)(*(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328))(
                   this,
                   &a2,
                   "ProgressBar.FgColor",
                   v2);
  (*(void (__thiscall **)(unsigned int *, _DWORD))(v4 + 220))(this, *v5);
  v6 = *this;
  v7 = (_DWORD *)(*(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328))(
                   this,
                   &a2,
                   "ProgressBar.BgColor",
                   v2);
  (*(void (__thiscall **)(unsigned int *, _DWORD))(v6 + 216))(this, *v7);
  v8 = *this;
  v9 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "ButtonDepressedBorder");
  return (*(int (__thiscall **)(unsigned int *, int))(v8 + 252))(this, v9);
}
