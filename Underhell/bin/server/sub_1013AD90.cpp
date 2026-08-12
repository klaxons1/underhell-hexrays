void __thiscall sub_1013AD90(int this)
{
  int v2; // edx
  int v3; // eax
  const char *v4; // eax

  sub_10112C00(this + 320, 0);
  sub_100E0970(this, v2, 0, 0);
  v3 = *(_DWORD *)(this + 248);
  if ( (v3 & 1) != 0 )
    *(float *)(this + 812) = 0.0;
  if ( (v3 & 0x20) != 0 && (v3 & 8) == 0 && (v3 & 0x10) == 0 )
  {
    v4 = sub_100D6390((_DWORD *)this);
    DevWarning(
      "env_shake %s with \"Don't shake view\" spawnflag set without \"Shake physics\" or \"Shake ropes\" spawnflags set.",
      v4);
  }
}
