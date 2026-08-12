void __thiscall sub_103818A0(int this)
{
  int v2; // edx
  char *v3; // ebx
  _DWORD *v4; // edi

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/player.mdl");
  sub_1025F360((_DWORD *)this, (int)&flt_106F1CA8, (int)&flt_106F1CA8);
  if ( *(_BYTE *)(this + 225) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 0;
  }
  if ( *(int *)(this + 3660) > 100 )
  {
    *(_DWORD *)(this + 3660) = 100;
    Warning("WARNING: NPC_Launcher Homing Strength must be between 0 and 100\n");
  }
  sub_10112C00(this + 320, 0);
  sub_100E0970(this, v2, 0, 0);
  sub_100CF450((_DWORD *)this, -1);
  sub_100EAB80((_DWORD *)this, 32);
  sub_100EA940((int *)this, 0x2000);
  sub_10020460((_DWORD *)this, 0x4000000);
  sub_10027BB0((int *)this);
  if ( *(_DWORD *)(this + 3620) )
    sub_10381820(this);
  if ( !*(_DWORD *)(this + 2796) )
  {
    v3 = *(char **)(this + 2800);
    v4 = sub_100B0F90(&dword_10695280, v3);
    if ( !v4 )
      v4 = sub_100B2200(&dword_10695280, v3);
    sub_100B20E0((int)v4, (_DWORD *)this);
    *(_DWORD *)(this + 2796) = v4;
  }
}
