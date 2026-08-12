void __cdecl sub_10472A80()
{
  int v0; // eax

  v0 = unk_106B920C;
  *(_DWORD *)byte_106B91E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B91E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B920C = 0;
  }
  *(_DWORD *)byte_106B91E8 = &ConCommandBase::`vftable';
}
