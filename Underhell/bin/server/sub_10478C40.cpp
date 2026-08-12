void __cdecl sub_10478C40()
{
  int v0; // eax

  v0 = unk_106EB5B4;
  *(_DWORD *)byte_106EB590 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB590[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB5B4 = 0;
  }
  *(_DWORD *)byte_106EB590 = &ConCommandBase::`vftable';
}
