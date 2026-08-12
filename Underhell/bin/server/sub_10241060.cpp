int __stdcall sub_10241060(int a1)
{
  int v1; // eax
  int v2; // esi

  v1 = sub_100D6340(900);
  v2 = v1;
  if ( v1 )
  {
    sub_102402F0(v1);
    *(_DWORD *)v2 = &CEnvSoundscapeTriggerable::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
