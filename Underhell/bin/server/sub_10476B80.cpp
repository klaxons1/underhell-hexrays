void __cdecl sub_10476B80()
{
  int v0; // eax

  v0 = unk_106DE214;
  *(_DWORD *)byte_106DE1F0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DE1F0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DE214 = 0;
  }
  *(_DWORD *)byte_106DE1F0 = &ConCommandBase::`vftable';
}
