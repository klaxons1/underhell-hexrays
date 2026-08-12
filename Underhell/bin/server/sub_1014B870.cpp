char *__stdcall sub_1014B870(int a1)
{
  char *v1; // eax
  char *v2; // esi

  v1 = (char *)sub_100D6340(1120);
  v2 = v1;
  if ( v1 )
  {
    sub_100C2130(v1);
    *(_DWORD *)v2 = &CWindowPane::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
