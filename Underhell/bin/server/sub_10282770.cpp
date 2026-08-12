char *__stdcall sub_10282770(int a1)
{
  char *v1; // eax
  char *v2; // esi

  v1 = (char *)sub_100D6340(800);
  v2 = v1;
  if ( v1 )
  {
    sub_100F5810(v1);
    *(_DWORD *)v2 = &MovieExplosion::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
