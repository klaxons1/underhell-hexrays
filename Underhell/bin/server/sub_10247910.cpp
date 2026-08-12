char *__stdcall sub_10247910(int a1)
{
  char *v1; // eax
  char *v2; // esi

  v1 = (char *)sub_100D6340(800);
  v2 = v1;
  if ( v1 )
  {
    sub_1015DC30(v1);
    *(_DWORD *)v2 = &CHalfLife2SurvivalProxy::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
