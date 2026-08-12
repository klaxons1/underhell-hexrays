void __cdecl sub_10471690()
{
  int v0; // eax

  v0 = unk_106B2E64;
  *(_DWORD *)byte_106B2E40 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B2E40[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B2E64 = 0;
  }
  *(_DWORD *)byte_106B2E40 = &ConCommandBase::`vftable';
}
