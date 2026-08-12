void __cdecl sub_10471100()
{
  int v0; // eax

  v0 = unk_106B0684;
  *(_DWORD *)byte_106B0660 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B0660[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B0684 = 0;
  }
  *(_DWORD *)byte_106B0660 = &ConCommandBase::`vftable';
}
