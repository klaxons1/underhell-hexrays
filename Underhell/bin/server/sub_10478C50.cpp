void __cdecl sub_10478C50()
{
  int v0; // eax

  v0 = unk_106EB5FC;
  *(_DWORD *)byte_106EB5D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB5D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB5FC = 0;
  }
  *(_DWORD *)byte_106EB5D8 = &ConCommandBase::`vftable';
}
