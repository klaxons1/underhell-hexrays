void __cdecl sub_10476E80()
{
  int v0; // eax

  v0 = unk_106DEC54;
  *(_DWORD *)byte_106DEC30 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DEC30[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DEC54 = 0;
  }
  *(_DWORD *)byte_106DEC30 = &ConCommandBase::`vftable';
}
