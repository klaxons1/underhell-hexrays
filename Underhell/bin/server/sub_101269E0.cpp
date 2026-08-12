float *__stdcall sub_101269E0(int a1)
{
  char *v1; // eax
  float *v2; // esi

  v1 = (char *)sub_100D6340(880);
  v2 = (float *)v1;
  if ( v1 )
  {
    sub_100E33C0(v1, 0);
    v2[218] = 1.0;
    *(_DWORD *)v2 = &CEnvShooter::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(float *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 3;
}
