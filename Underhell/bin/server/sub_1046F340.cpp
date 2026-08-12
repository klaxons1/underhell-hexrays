void __cdecl sub_1046F340()
{
  int v0; // eax

  v0 = unk_10693604;
  *(_DWORD *)byte_106935E0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106935E0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10693604 = 0;
  }
  *(_DWORD *)byte_106935E0 = &ConCommandBase::`vftable';
}
