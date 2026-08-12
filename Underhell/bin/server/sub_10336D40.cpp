char *__cdecl sub_10336D40(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi

  v2 = (char *)sub_100D6340(804);
  v3 = v2;
  if ( v2 )
  {
    sub_100E33C0(v2, 0);
    *(_DWORD *)v3 = &CCommandPoint::`vftable';
    v3[800] = 0;
    if ( ++dword_106E5B74 > 1 )
    {
      DevMsg("WARNING: More than one citizen command point present\n");
      (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 108))(v3, a2);
      return v3;
    }
  }
  else
  {
    v3 = 0;
  }
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 108))(v3, a2);
  return v3;
}
