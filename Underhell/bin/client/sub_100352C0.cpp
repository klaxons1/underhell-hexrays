void sub_100352C0()
{
  int v0; // edi
  int i; // esi
  int v2; // eax

  CVProfile::EnterScope(g_VProfCurrentProfile, "C_BaseEntity::ToolRecordEnties", 0, "Tools", 0, 4);
  if ( (unsigned __int8)sub_101BC880() )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578) )
    {
      v0 = ((int (__thiscall *)(int (__stdcall ***)(char)))(*off_103D89D0)[3])(off_103D89D0);
      for ( i = 0; i < v0; ++i )
      {
        v2 = ((int (__thiscall *)(int (__stdcall ***)(char), int))(*off_103D89D0)[4])(off_103D89D0, i);
        if ( v2 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 172))(v2);
      }
    }
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
