void __cdecl sub_104798A0()
{
  int v0; // eax

  v0 = unk_106F00B4;
  *(_DWORD *)byte_106F0090 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0090[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F00B4 = 0;
  }
  *(_DWORD *)byte_106F0090 = &ConCommandBase::`vftable';
}
