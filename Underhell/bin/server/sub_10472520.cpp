void __cdecl sub_10472520()
{
  int v0; // eax

  v0 = unk_106B7C54;
  *(_DWORD *)byte_106B7C30 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7C30[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B7C54 = 0;
  }
  *(_DWORD *)byte_106B7C30 = &ConCommandBase::`vftable';
}
