void __cdecl sub_104733F0()
{
  int v0; // eax

  v0 = unk_106BBB64;
  *(_DWORD *)byte_106BBB40 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BBB40[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BBB64 = 0;
  }
  *(_DWORD *)byte_106BBB40 = &ConCommandBase::`vftable';
}
