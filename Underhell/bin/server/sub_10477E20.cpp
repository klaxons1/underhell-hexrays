void __cdecl sub_10477E20()
{
  int v0; // eax

  v0 = unk_106E5E74;
  *(_DWORD *)byte_106E5E50 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5E50[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5E74 = 0;
  }
  *(_DWORD *)byte_106E5E50 = &ConCommandBase::`vftable';
}
