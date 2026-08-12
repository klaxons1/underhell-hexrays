void __cdecl sub_10478880()
{
  int v0; // eax

  v0 = unk_106EA2CC;
  *(_DWORD *)byte_106EA2A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EA2A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EA2CC = 0;
  }
  *(_DWORD *)byte_106EA2A8 = &ConCommandBase::`vftable';
}
