void __cdecl sub_104725A0()
{
  int v0; // eax

  v0 = unk_106B842C;
  *(_DWORD *)byte_106B8408 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B8408[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B842C = 0;
  }
  *(_DWORD *)byte_106B8408 = &ConCommandBase::`vftable';
}
