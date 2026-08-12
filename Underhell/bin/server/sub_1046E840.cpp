void __cdecl sub_1046E840()
{
  int v0; // eax

  v0 = unk_10690654;
  *(_DWORD *)byte_10690630 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690630[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690654 = 0;
  }
  *(_DWORD *)byte_10690630 = &ConCommandBase::`vftable';
}
