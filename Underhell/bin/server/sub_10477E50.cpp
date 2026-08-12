void __cdecl sub_10477E50()
{
  int v0; // eax

  v0 = unk_106E5F4C;
  *(_DWORD *)byte_106E5F28 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5F28[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5F4C = 0;
  }
  *(_DWORD *)byte_106E5F28 = &ConCommandBase::`vftable';
}
