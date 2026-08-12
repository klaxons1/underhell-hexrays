void __cdecl sub_10471B30()
{
  int v0; // eax

  v0 = unk_106B4DBC;
  *(_DWORD *)byte_106B4D98 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B4D98[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B4DBC = 0;
  }
  *(_DWORD *)byte_106B4D98 = &ConCommandBase::`vftable';
}
