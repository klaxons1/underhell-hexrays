void __cdecl sub_10478340()
{
  int v0; // eax

  v0 = unk_106E86E4;
  *(_DWORD *)byte_106E86C0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E86C0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E86E4 = 0;
  }
  *(_DWORD *)byte_106E86C0 = &ConCommandBase::`vftable';
}
