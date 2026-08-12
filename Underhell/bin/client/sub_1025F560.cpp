int __thiscall sub_1025F560(unsigned int *this, int a2)
{
  unsigned int v3; // ebx
  int v4; // eax

  sub_10252C70(this, a2);
  v3 = *this;
  v4 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)a2 + 8))(a2, "ComboBoxBorder");
  return (*(int (__thiscall **)(unsigned int *, int))(v3 + 252))(this, v4);
}
