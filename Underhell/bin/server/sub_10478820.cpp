void __cdecl sub_10478820()
{
  int v0; // eax

  v0 = unk_106EA04C;
  *(_DWORD *)byte_106EA028 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EA028[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EA04C = 0;
  }
  *(_DWORD *)byte_106EA028 = &ConCommandBase::`vftable';
}
