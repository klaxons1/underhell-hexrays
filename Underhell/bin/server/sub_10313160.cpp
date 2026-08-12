char __thiscall sub_10313160(_BYTE *this, int a2)
{
  int (*v3)(void); // edx
  int v4; // eax
  int v6; // [esp-8h] [ebp-Ch]

  v3 = *(int (**)(void))(*(_DWORD *)this + 368);
  this[4261] = 0;
  v6 = v3();
  v4 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1868))(this);
  return sub_100778E0(v4, v6, 0);
}
