void __cdecl sub_1046E880()
{
  int v0; // eax

  v0 = unk_10690774;
  *(_DWORD *)byte_10690750 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690750[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690774 = 0;
  }
  *(_DWORD *)byte_10690750 = &ConCommandBase::`vftable';
}
