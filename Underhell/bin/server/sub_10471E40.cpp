void __cdecl sub_10471E40()
{
  int v0; // eax

  v0 = unk_106B5CFC;
  *(_DWORD *)byte_106B5CD8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B5CD8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B5CFC = 0;
  }
  *(_DWORD *)byte_106B5CD8 = &ConCommandBase::`vftable';
}
