void __cdecl sub_10475110()
{
  int v0; // eax

  v0 = unk_106D1114;
  *(_DWORD *)byte_106D10F0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D10F0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D1114 = 0;
  }
  *(_DWORD *)byte_106D10F0 = &ConCommandBase::`vftable';
}
