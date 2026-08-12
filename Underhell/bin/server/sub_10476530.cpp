void __cdecl sub_10476530()
{
  int v0; // eax

  v0 = unk_106DB044;
  *(_DWORD *)byte_106DB020 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DB020[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DB044 = 0;
  }
  *(_DWORD *)byte_106DB020 = &ConCommandBase::`vftable';
}
