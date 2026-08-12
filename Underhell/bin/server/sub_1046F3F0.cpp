void __cdecl sub_1046F3F0()
{
  int v0; // eax

  v0 = unk_10693804;
  *(_DWORD *)byte_106937E0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106937E0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10693804 = 0;
  }
  *(_DWORD *)byte_106937E0 = &ConCommandBase::`vftable';
}
