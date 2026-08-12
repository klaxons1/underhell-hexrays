void __cdecl sub_10479C60()
{
  int v0; // eax

  v0 = unk_106F0FB4;
  *(_DWORD *)byte_106F0F90 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0F90[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F0FB4 = 0;
  }
  *(_DWORD *)byte_106F0F90 = &ConCommandBase::`vftable';
}
