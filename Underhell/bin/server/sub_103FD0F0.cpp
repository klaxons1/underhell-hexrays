float *__stdcall sub_103FD0F0(int a1)
{
  char *v1; // eax
  float *v2; // esi

  v1 = (char *)sub_100D6340(9132);
  v2 = (float *)v1;
  if ( v1 )
  {
    sub_100E33C0(v1, 0);
    *(_DWORD *)v2 = &CPlayerPickupController::`vftable';
    sub_103FAAA0(v2 + 200);
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(float *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 3;
}
