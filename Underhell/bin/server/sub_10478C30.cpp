void __cdecl sub_10478C30()
{
  int v0; // eax

  v0 = unk_106EB56C;
  *(_DWORD *)byte_106EB548 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB548[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB56C = 0;
  }
  *(_DWORD *)byte_106EB548 = &ConCommandBase::`vftable';
}
