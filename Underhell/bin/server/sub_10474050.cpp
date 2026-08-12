void __cdecl sub_10474050()
{
  int v0; // eax

  v0 = unk_106C5064;
  *(_DWORD *)byte_106C5040 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C5040[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C5064 = 0;
  }
  *(_DWORD *)byte_106C5040 = &ConCommandBase::`vftable';
}
