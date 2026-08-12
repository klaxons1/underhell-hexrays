int __stdcall sub_1012EFF0(int a1)
{
  char *v1; // eax
  int v2; // esi

  v1 = (char *)sub_100D6340(808);
  v2 = (int)v1;
  if ( v1 )
  {
    sub_100E33C0(v1, 0);
    *(_DWORD *)v2 = &CEnvDetailController::`vftable';
    dword_106AE898 = v2;
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
