void __cdecl sub_10478640()
{
  int v0; // eax

  v0 = unk_106E9464;
  *(_DWORD *)byte_106E9440 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9440[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E9464 = 0;
  }
  *(_DWORD *)byte_106E9440 = &ConCommandBase::`vftable';
}
