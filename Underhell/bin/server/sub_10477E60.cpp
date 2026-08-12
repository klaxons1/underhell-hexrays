void __cdecl sub_10477E60()
{
  int v0; // eax

  v0 = unk_106E5F94;
  *(_DWORD *)byte_106E5F70 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5F70[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5F94 = 0;
  }
  *(_DWORD *)byte_106E5F70 = &ConCommandBase::`vftable';
}
