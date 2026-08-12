int __thiscall sub_102F2830(int this)
{
  int v2; // edx

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/mymodel.mdl");
  *(_DWORD *)(this + 1676) = 0;
  sub_10027A90(this, 0);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_100E0970(this, v2, 3, 0);
  sub_100CF450((_DWORD *)this, 0);
  if ( *(_DWORD *)(this + 220) != 20 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 20;
  }
  *(float *)(this + 1684) = 0.5;
  *(_DWORD *)(this + 2324) = 0;
  sub_100204A0((_DWORD *)this);
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 1164))(this);
}
