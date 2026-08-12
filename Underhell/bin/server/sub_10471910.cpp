void __cdecl sub_10471910()
{
  int v0; // eax

  v0 = unk_106B37EC;
  *(_DWORD *)byte_106B37C8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B37C8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B37EC = 0;
  }
  *(_DWORD *)byte_106B37C8 = &ConCommandBase::`vftable';
}
