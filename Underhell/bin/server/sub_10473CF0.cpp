void __cdecl sub_10473CF0()
{
  int v0; // eax

  v0 = unk_106C416C;
  *(_DWORD *)byte_106C4148 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C4148[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C416C = 0;
  }
  *(_DWORD *)byte_106C4148 = &ConCommandBase::`vftable';
}
