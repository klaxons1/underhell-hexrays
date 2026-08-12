void __thiscall sub_10365820(int this)
{
  int v2; // edx
  bool v3; // c0
  bool v4; // c3
  double v5; // st7
  float *v6; // eax

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/player.mdl");
  sub_1025F360((_DWORD *)this, (int)&flt_106F1CA8, (int)&flt_106F1CA8);
  sub_100E0970(this, v2, 0, 0);
  sub_100CF450((_DWORD *)this, -1);
  *(float *)(this + 552) = 0.0;
  if ( *(_DWORD *)(this + 220) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 1;
  }
  sub_100EA940((int *)this, 0x2000);
  sub_10112C00(this + 320, 0);
  v3 = *(float *)(this + 1684) > -1.0;
  v4 = -1.0 == *(float *)(this + 1684);
  *(_BYTE *)(this + 3704) = 0;
  if ( v3 || v4 )
  {
    if ( *(float *)(this + 1684) <= 1.0 )
      goto LABEL_8;
    DevMsg("ERROR: EnemyFinder field of view must be between -1.0 and 1.0\n");
    v5 = 1.0;
  }
  else
  {
    DevMsg("ERROR: EnemyFinder field of view must be between -1.0 and 1.0\n");
    v5 = 0.5;
  }
  *(float *)(this + 1684) = v5;
LABEL_8:
  sub_10020460((_DWORD *)this, 0x4000000);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1164))(this);
  if ( *(_BYTE *)(this + 225) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 0;
  }
  sub_100EAB80((_DWORD *)this, 32);
  *(_DWORD *)(this + 2324) = 2;
  sub_100DC4E0((float *)this, &flt_106F1CA8);
  if ( 0.0 != *(float *)(this + 3628) )
    sub_1001FBB0((_DWORD *)this, *(float *)(this + 3628));
  if ( (*(_DWORD *)(this + 248) & 0x40000) != 0 )
  {
    v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
    sub_100756F0(v6, 0.2);
  }
}
