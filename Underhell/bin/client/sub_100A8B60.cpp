bool __stdcall sub_100A8B60(int a1)
{
  bool result; // al
  int v2; // eax
  int v3; // eax

  result = 1;
  if ( (*(_DWORD *)(a1 + 48) & 0x20000000) == 0 )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10434620 + 40))(dword_10434620);
    if ( !v2 )
      return 0;
    v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 20))(v2, *(__int16 *)(a1 + 64));
    if ( !v3 || !*(_BYTE *)(v3 + 74) )
      return 0;
  }
  return result;
}
