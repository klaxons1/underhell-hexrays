void __cdecl sub_10472250()
{
  int v0; // eax

  v0 = unk_106B7154;
  *(_DWORD *)byte_106B7130 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7130[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B7154 = 0;
  }
  *(_DWORD *)byte_106B7130 = &ConCommandBase::`vftable';
}
