int __thiscall sub_10369840(int this)
{
  int v2; // edx
  int v3; // edx

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  *(_DWORD *)(this + 1708) = -1;
  *(_DWORD *)(this + 1740) = 0;
  *(_BYTE *)(this + 1713) = 0;
  j_nullsub_4((void *)this);
  sub_100E88A0((_DWORD *)this, 0);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/gman.mdl");
  *(_DWORD *)(this + 1676) = 0;
  sub_10027A90(this, 0);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_100E0970(this, v2, 3, 0);
  sub_100CF450((_DWORD *)this, 0);
  if ( *(_DWORD *)(this + 220) != 8 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 8;
  }
  *(float *)(this + 1684) = 0.5;
  *(_DWORD *)(this + 2324) = 0;
  *(float *)(this + 1704) = 0.0;
  sub_10020460((_DWORD *)this, 8394753);
  sub_10020460((_DWORD *)this, 0x2000000);
  v3 = *(_DWORD *)this;
  *(_DWORD *)(this + 252) |= 0x18000000u;
  return (*(int (__thiscall **)(int))(v3 + 1164))(this);
}
