int __thiscall sub_101A2470(int this)
{
  void (__stdcall *v2)(const char *); // edx

  v2 = *(void (__stdcall **)(const char *))(*(_DWORD *)this + 104);
  *(_BYTE *)(this + 1712) = 1;
  v2("models/butcher.mdl");
  *(_DWORD *)(this + 1676) = 0;
  sub_10020460((_DWORD *)this, 0x200000);
  *(_BYTE *)(this + 1670) = 1;
  sub_10027A90(this, 1);
  sub_10020F00((char *)this);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, 1);
}
