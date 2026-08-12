void __cdecl sub_104750C0()
{
  int v0; // eax

  v0 = unk_106D0FB4;
  *(_DWORD *)byte_106D0F90 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D0F90[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D0FB4 = 0;
  }
  *(_DWORD *)byte_106D0F90 = &ConCommandBase::`vftable';
}
