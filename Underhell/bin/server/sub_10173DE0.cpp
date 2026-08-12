char *__stdcall sub_10173DE0(int a1)
{
  char *v1; // eax
  char *v2; // esi

  v1 = (char *)sub_100D6340(1244);
  v2 = v1;
  if ( v1 )
  {
    sub_10173C50(v1);
    *(_DWORD *)v2 = &CItemRadioCracker::`vftable';
    *((_DWORD *)v2 + 280) = &CItemRadioCracker::`vftable';
    v2[1232] = 1;
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
