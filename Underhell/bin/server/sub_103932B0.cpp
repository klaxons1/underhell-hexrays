int __thiscall sub_103932B0(int this)
{
  int v2; // edx

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  *(_DWORD *)(this + 1708) = -1;
  *(_DWORD *)(this + 1740) = 0;
  *(_BYTE *)(this + 1713) = 0;
  j_nullsub_4((void *)this);
  sub_100E88A0((_DWORD *)this, 0);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/Monk.mdl");
  *(_DWORD *)(this + 1676) = 0;
  sub_10027A90(this, 0);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_100E0970(this, v2, 3, 0);
  sub_100CF450((_DWORD *)this, 0);
  if ( *(_DWORD *)(this + 220) != 100 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 100;
  }
  *(_DWORD *)(this + 2324) = 0;
  *(float *)(this + 1684) = -0.70700002;
  *(float *)(this + 1688) = 0.0;
  *(float *)(this + 1692) = 0.0;
  *(float *)(this + 1696) = 55.0;
  sub_10020460((_DWORD *)this, 7169);
  sub_10020460((_DWORD *)this, 0x200000);
  sub_10020460((_DWORD *)this, 0x800000);
  sub_10020460((_DWORD *)this, 0x2000000);
  sub_10020460((_DWORD *)this, 0x20000000);
  sub_10020460((_DWORD *)this, 64);
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 1164))(this);
}
