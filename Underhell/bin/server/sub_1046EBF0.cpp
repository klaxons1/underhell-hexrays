void __cdecl sub_1046EBF0()
{
  int v0; // eax

  v0 = unk_10691FB4;
  *(_DWORD *)byte_10691F90 = &ConVar::`vftable';
  *(_DWORD *)&byte_10691F90[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_10691FB4 = 0;
  }
  *(_DWORD *)byte_10691F90 = &ConCommandBase::`vftable';
}
