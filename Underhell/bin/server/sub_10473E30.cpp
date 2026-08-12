void __cdecl sub_10473E30()
{
  int v0; // eax

  v0 = unk_106C4794;
  *(_DWORD *)byte_106C4770 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C4770[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C4794 = 0;
  }
  *(_DWORD *)byte_106C4770 = &ConCommandBase::`vftable';
}
