void __cdecl sub_10478390()
{
  int v0; // eax

  v0 = unk_106E884C;
  *(_DWORD *)byte_106E8828 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8828[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E884C = 0;
  }
  *(_DWORD *)byte_106E8828 = &ConCommandBase::`vftable';
}
