void __cdecl sub_10478C60()
{
  int v0; // eax

  v0 = unk_106EB644;
  *(_DWORD *)byte_106EB620 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB620[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB644 = 0;
  }
  *(_DWORD *)byte_106EB620 = &ConCommandBase::`vftable';
}
