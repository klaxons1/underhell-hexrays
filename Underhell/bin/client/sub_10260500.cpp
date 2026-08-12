int __thiscall sub_10260500(unsigned int *this, int a2)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = *this;
  v4 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)a2 + 8))(a2, "ButtonDepressedBorder");
  (*(void (__thiscall **)(unsigned int *, int))(v3 + 252))(this, v4);
  return sub_10241570(this, a2);
}
