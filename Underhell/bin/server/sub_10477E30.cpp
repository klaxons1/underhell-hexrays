void __cdecl sub_10477E30()
{
  int v0; // eax

  v0 = unk_106E5EBC;
  *(_DWORD *)byte_106E5E98 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5E98[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5EBC = 0;
  }
  *(_DWORD *)byte_106E5E98 = &ConCommandBase::`vftable';
}
