void __cdecl sub_10478A60()
{
  int v0; // eax

  v0 = unk_106EAC94;
  *(_DWORD *)byte_106EAC70 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EAC70[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EAC94 = 0;
  }
  *(_DWORD *)byte_106EAC70 = &ConCommandBase::`vftable';
}
