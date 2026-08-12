void __cdecl sub_10473D00()
{
  int v0; // eax

  v0 = unk_106C41B4;
  *(_DWORD *)byte_106C4190 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C4190[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C41B4 = 0;
  }
  *(_DWORD *)byte_106C4190 = &ConCommandBase::`vftable';
}
