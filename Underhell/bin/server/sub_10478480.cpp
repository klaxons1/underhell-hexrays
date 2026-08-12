void __cdecl sub_10478480()
{
  int v0; // eax

  v0 = unk_106E8C84;
  *(_DWORD *)byte_106E8C60 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8C60[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8C84 = 0;
  }
  *(_DWORD *)byte_106E8C60 = &ConCommandBase::`vftable';
}
