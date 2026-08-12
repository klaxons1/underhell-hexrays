void __cdecl sub_10478990()
{
  int v0; // eax

  v0 = unk_106EA70C;
  *(_DWORD *)byte_106EA6E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EA6E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EA70C = 0;
  }
  *(_DWORD *)byte_106EA6E8 = &ConCommandBase::`vftable';
}
