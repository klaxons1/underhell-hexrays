void __cdecl sub_1046E9C0()
{
  int v0; // eax

  v0 = unk_10690D14;
  *(_DWORD *)byte_10690CF0 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690CF0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10690D14 = 0;
  }
  *(_DWORD *)byte_10690CF0 = &ConCommandBase::`vftable';
}
