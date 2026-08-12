void __cdecl sub_1046F280()
{
  int v0; // eax

  v0 = unk_10693314;
  *(_DWORD *)byte_106932F0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106932F0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10693314 = 0;
  }
  *(_DWORD *)byte_106932F0 = &ConCommandBase::`vftable';
}
