void __cdecl sub_1046E960()
{
  int v0; // eax

  v0 = unk_10690B64;
  *(_DWORD *)byte_10690B40 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690B40[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690B64 = 0;
  }
  *(_DWORD *)byte_10690B40 = &ConCommandBase::`vftable';
}
