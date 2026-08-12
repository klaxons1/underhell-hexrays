int __thiscall sub_1026B330(unsigned int *this, int a2)
{
  int v2; // edi
  unsigned int v4; // ebp
  _DWORD *v5; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // eax

  v2 = a2;
  sub_10241570(this, a2);
  v4 = *this;
  a2 = -7434610;
  v5 = (_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)v2 + 20))(
                   v2,
                   &a2,
                   "Menu.SeparatorColor",
                   -7434610);
  (*(void (__thiscall **)(unsigned int *, _DWORD))(v4 + 220))(this, *v5);
  a2 = -16777216;
  v6 = *this;
  v7 = (_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)v2 + 20))(
                   v2,
                   &a2,
                   "Menu.BgColor",
                   -16777216);
  return (*(int (__thiscall **)(unsigned int *, _DWORD))(v6 + 216))(this, *v7);
}
