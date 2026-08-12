int __thiscall sub_100D83D0(void *this, int a2)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 44))(this);
  return (*(int (__thiscall **)(int, void *, int))(*(_DWORD *)a2 + 20))(a2, this, v3);
}
