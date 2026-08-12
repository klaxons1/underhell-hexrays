void __cdecl sub_104772B0()
{
  int v0; // eax

  v0 = unk_106E0664;
  *(_DWORD *)byte_106E0640 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E0640[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E0664 = 0;
  }
  *(_DWORD *)byte_106E0640 = &ConCommandBase::`vftable';
}
