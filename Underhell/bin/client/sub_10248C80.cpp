char __thiscall sub_10248C80(void *this, int a2)
{
  int (__thiscall ***v3)(_DWORD); // eax

  v3 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(void *))(*(_DWORD *)this + 144))(this);
  return sub_10248910((int)this, v3, a2);
}
