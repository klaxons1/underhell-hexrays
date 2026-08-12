void __cdecl sub_10472AB0()
{
  int v0; // eax

  v0 = unk_106B92E4;
  *(_DWORD *)byte_106B92C0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B92C0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B92E4 = 0;
  }
  *(_DWORD *)byte_106B92C0 = &ConCommandBase::`vftable';
}
