char *__stdcall sub_10117290(int a1)
{
  void *v1; // eax
  char *v2; // esi

  v1 = (void *)sub_100D6340(1384);
  if ( v1 )
    v2 = (char *)sub_10116C00(v1);
  else
    v2 = 0;
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
