void __cdecl sub_10477640()
{
  int v0; // eax

  v0 = unk_106E250C;
  *(_DWORD *)byte_106E24E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E24E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E250C = 0;
  }
  *(_DWORD *)byte_106E24E8 = &ConCommandBase::`vftable';
}
