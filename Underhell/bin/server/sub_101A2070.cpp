char *__stdcall sub_101A2070(int a1)
{
  void *v1; // eax
  char *v2; // esi

  v1 = (void *)sub_100D6340(5024);
  if ( v1 )
    v2 = (char *)sub_101A1DA0(v1);
  else
    v2 = 0;
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
