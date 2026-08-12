int __stdcall sub_101315E0(int a1)
{
  void *v1; // eax
  int v2; // esi

  v1 = (void *)sub_100D6340(1124);
  v2 = (int)v1;
  if ( v1 )
  {
    sub_100C2130(v1);
    *(_DWORD *)v2 = &CEnvParticleScript::`vftable';
    sub_100C1130(v2);
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
