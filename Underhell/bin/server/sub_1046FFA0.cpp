void __cdecl sub_1046FFA0()
{
  *(_DWORD *)byte_10698C08 = &ConVar::`vftable';
  unk_10698C20 = &ConVar::`vftable';
  if ( dword_10698C2C[0] )
  {
    sub_10184660(dword_10698C2C[0]);
    dword_10698C2C[0] = 0;
  }
  *(_DWORD *)byte_10698C08 = &ConCommandBase::`vftable';
}
