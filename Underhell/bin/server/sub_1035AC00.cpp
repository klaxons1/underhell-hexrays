char *__stdcall sub_1035AC00(int a1)
{
  char *v1; // eax
  char *v2; // esi

  v1 = (char *)sub_100D6340(5028);
  if ( v1 )
    v2 = sub_1035AAA0(v1);
  else
    v2 = 0;
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
