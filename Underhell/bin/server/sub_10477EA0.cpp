void __cdecl sub_10477EA0()
{
  int v0; // eax

  v0 = unk_106E60B4;
  *(_DWORD *)byte_106E6090 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E6090[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E60B4 = 0;
  }
  *(_DWORD *)byte_106E6090 = &ConCommandBase::`vftable';
}
