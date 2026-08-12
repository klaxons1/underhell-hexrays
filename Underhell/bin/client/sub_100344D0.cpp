int __thiscall sub_100344D0(void *this)
{
  int v1; // esi
  int v2; // eax

  v1 = *(_DWORD *)dword_10413178;
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 36))(this);
  return (*(int (__thiscall **)(int, int))(v1 + 52))(dword_10413178, v2);
}
