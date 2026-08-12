char *__stdcall sub_1015FE50(int a1)
{
  char *v1; // eax
  char *v2; // esi

  v1 = (char *)sub_100D6340(808);
  v2 = v1;
  if ( v1 )
  {
    sub_100E33C0(v1, 0);
    *(_DWORD *)v2 = &CPointGamestatsCounter::`vftable';
    *((_DWORD *)v2 + 200) = 0;
    v2[804] = 0;
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
