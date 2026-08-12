char __thiscall sub_10366950(int this)
{
  void (__stdcall *v2)(const char *); // edx
  int v3; // edi
  char result; // al

  v2 = *(void (__stdcall **)(const char *))(*(_DWORD *)this + 104);
  v3 = *(_DWORD *)(this + 1676);
  if ( *(_BYTE *)(this + 3776) )
  {
    v2("models/zombie/fast_torso.mdl");
    *(_DWORD *)(this + 1676) = 3;
  }
  else
  {
    v2("models/zombie/fast.mdl");
    *(_DWORD *)(this + 1676) = 0;
  }
  sub_100C1600(this, 1, *(_BYTE *)(this + 3777) == 0);
  sub_10027A90(this, 1);
  sub_10020F00((char *)this);
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, 1);
  if ( v3 != *(_DWORD *)(this + 1676) )
  {
    if ( *(_DWORD *)(this + 424) )
      return sub_10027740(this);
  }
  return result;
}
