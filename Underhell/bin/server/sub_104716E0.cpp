void __cdecl sub_104716E0()
{
  int v0; // eax

  v0 = unk_106B2FCC;
  *(_DWORD *)byte_106B2FA8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B2FA8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B2FCC = 0;
  }
  *(_DWORD *)byte_106B2FA8 = &ConCommandBase::`vftable';
}
