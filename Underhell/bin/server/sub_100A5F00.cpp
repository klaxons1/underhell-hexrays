char __thiscall sub_100A5F00(_DWORD *this)
{
  char *v1; // esi
  const char *v2; // eax

  v1 = (char *)(this - 336);
  v2 = (const char *)(*(int (__thiscall **)(_DWORD *))(*(this - 336) + 28))(this - 336);
  sub_100A5E10(v1, v2);
  return 1;
}
