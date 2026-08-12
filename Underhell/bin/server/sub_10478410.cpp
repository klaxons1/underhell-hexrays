void __cdecl sub_10478410()
{
  int v0; // eax

  v0 = unk_106E8A8C;
  *(_DWORD *)byte_106E8A68 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8A68[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8A8C = 0;
  }
  *(_DWORD *)byte_106E8A68 = &ConCommandBase::`vftable';
}
