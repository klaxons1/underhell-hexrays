void __cdecl sub_10478C70()
{
  int v0; // eax

  v0 = unk_106EB68C;
  *(_DWORD *)byte_106EB668 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB668[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB68C = 0;
  }
  *(_DWORD *)byte_106EB668 = &ConCommandBase::`vftable';
}
