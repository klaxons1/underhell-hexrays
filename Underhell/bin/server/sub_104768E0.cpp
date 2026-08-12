void __cdecl sub_104768E0()
{
  int v0; // eax

  v0 = unk_106DCA2C;
  *(_DWORD *)byte_106DCA08 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DCA08[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DCA2C = 0;
  }
  *(_DWORD *)byte_106DCA08 = &ConCommandBase::`vftable';
}
