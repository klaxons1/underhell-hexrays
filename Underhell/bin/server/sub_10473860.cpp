void __cdecl sub_10473860()
{
  int v0; // eax

  v0 = unk_106C1AD4;
  *(_DWORD *)byte_106C1AB0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106C1AB0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106C1AD4 = 0;
  }
  *(_DWORD *)byte_106C1AB0 = &ConCommandBase::`vftable';
}
