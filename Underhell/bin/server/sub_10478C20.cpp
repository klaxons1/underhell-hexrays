void __cdecl sub_10478C20()
{
  int v0; // eax

  v0 = unk_106EB524;
  *(_DWORD *)byte_106EB500 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB500[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB524 = 0;
  }
  *(_DWORD *)byte_106EB500 = &ConCommandBase::`vftable';
}
