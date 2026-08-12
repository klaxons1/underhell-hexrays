void __cdecl sub_10478500()
{
  int v0; // eax

  v0 = unk_106E8EC4;
  *(_DWORD *)byte_106E8EA0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8EA0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8EC4 = 0;
  }
  *(_DWORD *)byte_106E8EA0 = &ConCommandBase::`vftable';
}
