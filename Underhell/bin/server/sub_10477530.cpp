void __cdecl sub_10477530()
{
  int v0; // eax

  v0 = unk_106E180C;
  *(_DWORD *)byte_106E17E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E17E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E180C = 0;
  }
  *(_DWORD *)byte_106E17E8 = &ConCommandBase::`vftable';
}
