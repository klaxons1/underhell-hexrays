int __thiscall sub_101F43A0(int *this, int a2)
{
  int v2; // edi
  int v4; // eax
  int v5; // ebx
  int v6; // eax

  v2 = a2;
  sub_10241570(a2);
  v4 = (*(int (__thiscall **)(int *, int *))(*this + 224))(this, &a2);
  sub_101F58C0(v4);
  v5 = *this;
  v6 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 8))(v2, "MenuBorder");
  return (*(int (__thiscall **)(int *, int))(v5 + 252))(this, v6);
}
