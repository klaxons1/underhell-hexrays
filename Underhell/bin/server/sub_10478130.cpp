void __cdecl sub_10478130()
{
  int v0; // eax

  v0 = unk_106E7A0C;
  *(_DWORD *)byte_106E79E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E79E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E7A0C = 0;
  }
  *(_DWORD *)byte_106E79E8 = &ConCommandBase::`vftable';
}
