void __cdecl sub_10472990()
{
  int v0; // eax

  v0 = unk_106B8DAC;
  *(_DWORD *)byte_106B8D88 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B8D88[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B8DAC = 0;
  }
  *(_DWORD *)byte_106B8D88 = &ConCommandBase::`vftable';
}
