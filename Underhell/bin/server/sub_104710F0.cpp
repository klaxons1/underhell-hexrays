void __cdecl sub_104710F0()
{
  int v0; // eax

  v0 = unk_106B063C;
  *(_DWORD *)byte_106B0618 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B0618[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B063C = 0;
  }
  *(_DWORD *)byte_106B0618 = &ConCommandBase::`vftable';
}
