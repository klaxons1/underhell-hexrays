void __cdecl sub_104798B0()
{
  int v0; // eax

  v0 = unk_106F00FC;
  *(_DWORD *)byte_106F00D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F00D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F00FC = 0;
  }
  *(_DWORD *)byte_106F00D8 = &ConCommandBase::`vftable';
}
