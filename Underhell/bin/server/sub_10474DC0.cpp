void __cdecl sub_10474DC0()
{
  int v0; // eax

  v0 = unk_106D0214;
  *(_DWORD *)byte_106D01F0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D01F0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D0214 = 0;
  }
  *(_DWORD *)byte_106D01F0 = &ConCommandBase::`vftable';
}
