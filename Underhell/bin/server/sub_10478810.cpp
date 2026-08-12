void __cdecl sub_10478810()
{
  int v0; // eax

  v0 = unk_106EA004;
  *(_DWORD *)byte_106E9FE0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E9FE0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EA004 = 0;
  }
  *(_DWORD *)byte_106E9FE0 = &ConCommandBase::`vftable';
}
