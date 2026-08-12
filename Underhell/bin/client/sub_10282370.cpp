int __thiscall sub_10282370(unsigned int *this, int a2)
{
  unsigned int v3; // ebx
  int v4; // eax

  sub_10252C70(this, a2);
  v3 = *this;
  v4 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 12))(a2, "DefaultVerySmall", 0);
  return (*(int (__thiscall **)(unsigned int *, int))(v3 + 912))(this, v4);
}
