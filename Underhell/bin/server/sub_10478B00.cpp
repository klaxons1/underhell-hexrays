void __cdecl sub_10478B00()
{
  int v0; // eax

  v0 = unk_106EB014;
  *(_DWORD *)byte_106EAFF0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EAFF0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB014 = 0;
  }
  *(_DWORD *)byte_106EAFF0 = &ConCommandBase::`vftable';
}
