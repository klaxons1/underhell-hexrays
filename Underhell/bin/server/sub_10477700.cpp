void __cdecl sub_10477700()
{
  int v0; // eax

  v0 = unk_106E27CC;
  *(_DWORD *)byte_106E27A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E27A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E27CC = 0;
  }
  *(_DWORD *)byte_106E27A8 = &ConCommandBase::`vftable';
}
