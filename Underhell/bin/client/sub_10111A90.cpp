char *__cdecl sub_10111A90(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  void (__thiscall *v5)(_DWORD *, int, int); // eax

  v2 = sub_10034900(0xAF0u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_101115A0((int)v2);
  *v3 = &C_ServerRagdollAttached::`vftable';
  v3[1] = &C_ServerRagdollAttached::`vftable';
  v3[2] = &C_ServerRagdollAttached::`vftable';
  v3[3] = &C_ServerRagdollAttached::`vftable';
  *((_BYTE *)v3 + 2792) = 0;
  *((float *)v3 + 689) = 0.0;
  v4 = *v3;
  *((float *)v3 + 690) = 0.0;
  v5 = *(void (__thiscall **)(_DWORD *, int, int))(v4 + 160);
  *((float *)v3 + 691) = 0.0;
  v5(v3, a1, a2);
  return (char *)(v3 + 2);
}
