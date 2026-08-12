char *__cdecl sub_1012E950(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi

  v2 = (char *)sub_100D6340(832);
  v3 = v2;
  if ( v2 )
  {
    sub_100F5810(v2);
    *(_DWORD *)v3 = &CEntityParticleTrail::`vftable';
    sub_1012EB50(v3 + 804);
    *((_DWORD *)v3 + 201) = &CEntityParticleTrail::NetworkVar_m_Info::`vftable';
    *((_DWORD *)v3 + 206) = -1;
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
