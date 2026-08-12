char *__stdcall sub_102815B0(int a1)
{
  char *v1; // eax
  char *v2; // esi

  v1 = (char *)sub_100D6340(812);
  v2 = v1;
  if ( v1 )
  {
    sub_100E33C0(v1, 0);
    *(_DWORD *)v2 = &CDecal::`vftable';
    *((_DWORD *)v2 + 202) = 0;
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
