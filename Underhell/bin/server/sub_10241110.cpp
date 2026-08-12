_DWORD *__stdcall sub_10241110(int a1)
{
  int v1; // eax
  _DWORD *v2; // esi

  v1 = sub_100D6340(904);
  v2 = (_DWORD *)v1;
  if ( v1 )
  {
    sub_102402F0(v1);
    *v2 = &CEnvSoundscapeProxy::`vftable';
    v2[225] = 0;
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 108))(v2, a1);
  return v2 + 3;
}
