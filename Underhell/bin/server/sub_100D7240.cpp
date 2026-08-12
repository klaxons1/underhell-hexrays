int __thiscall sub_100D7240(void *this)
{
  int v1; // esi
  int v2; // eax

  v1 = *(_DWORD *)dword_106B31F0;
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 24))(this);
  return (*(int (__thiscall **)(int, int))(v1 + 4))(dword_106B31F0, v2);
}
