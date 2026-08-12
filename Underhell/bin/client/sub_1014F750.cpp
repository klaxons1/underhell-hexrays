int __thiscall sub_1014F750(void *this)
{
  int v1; // esi
  int v2; // eax

  v1 = *off_103ED0D8;
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 108))(this);
  return (*(int (__thiscall **)(int *, int))(v1 + 60))(off_103ED0D8, v2);
}
