void __cdecl sub_10478890()
{
  int v0; // eax

  v0 = unk_106EA314;
  *(_DWORD *)byte_106EA2F0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EA2F0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EA314 = 0;
  }
  *(_DWORD *)byte_106EA2F0 = &ConCommandBase::`vftable';
}
