char *__cdecl sub_10125FC0(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi

  v2 = (char *)sub_100D6340(1316);
  v3 = v2;
  if ( v2 )
  {
    sub_100E33C0(v2, 0);
    *(_DWORD *)v3 = &CEnvWind::`vftable';
    sub_10135900(v3 + 800);
    *((_DWORD *)v3 + 200) = &CEnvWind::NetworkVar_m_EnvWindShared::`vftable';
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
