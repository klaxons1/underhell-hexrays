void __cdecl sub_10477D00()
{
  int v0; // eax

  v0 = unk_106E59CC;
  *(_DWORD *)byte_106E59A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E59A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E59CC = 0;
  }
  *(_DWORD *)byte_106E59A8 = &ConCommandBase::`vftable';
}
