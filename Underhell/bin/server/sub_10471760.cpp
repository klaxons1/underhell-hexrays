void __cdecl sub_10471760()
{
  int v0; // eax

  v0 = unk_106B32CC;
  *(_DWORD *)byte_106B32A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B32A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B32CC = 0;
  }
  *(_DWORD *)byte_106B32A8 = &ConCommandBase::`vftable';
}
