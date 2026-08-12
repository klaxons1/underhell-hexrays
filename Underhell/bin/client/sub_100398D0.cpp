void sub_100398D0()
{
  int v0; // ebx
  int i; // edi
  _BYTE *v2; // esi

  CVProfile::EnterScope(g_VProfCurrentProfile, "C_BaseEntity::AddVisibleEntities", 0, "World Rendering", 0, 4);
  v0 = ((int (__thiscall *)(int (__stdcall ***)(int)))(*off_103D89CC)[1])(off_103D89CC);
  for ( i = 0; i < v0; ++i )
  {
    v2 = (_BYTE *)((int (__thiscall *)(int (__stdcall ***)(int), int))**off_103D89CC)(off_103D89CC, i);
    if ( v2
      && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 428))(v2)
      && !(unsigned __int8)sub_10107A20(v2 + 148)
      && !v2[268] )
    {
      sub_10039310((int)v2);
    }
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
