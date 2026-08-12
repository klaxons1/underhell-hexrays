void sub_1002A4C0()
{
  int v0; // esi
  int v1; // edi
  int v2; // eax

  CVProfile::EnterScope(g_VProfCurrentProfile, "UpdateClientSideAnimations", 0, "Client_Animation", 0, 4);
  v0 = 0;
  v1 = dword_104037AC;
  if ( dword_104037AC > 0 )
  {
    v2 = dword_104037A0;
    do
    {
      if ( (*(_BYTE *)(v2 + 8 * v0 + 4) & 1) != 0 )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 8 * v0) + 688))(*(_DWORD *)(v2 + 8 * v0));
        v2 = dword_104037A0;
      }
      ++v0;
    }
    while ( v0 < v1 );
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
