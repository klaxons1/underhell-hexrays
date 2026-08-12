void __cdecl sub_10472370()
{
  int v0; // eax

  v0 = unk_106B7664;
  *(_DWORD *)byte_106B7640 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7640[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B7664 = 0;
  }
  *(_DWORD *)byte_106B7640 = &ConCommandBase::`vftable';
}
