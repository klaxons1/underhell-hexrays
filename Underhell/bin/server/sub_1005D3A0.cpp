bool __thiscall sub_1005D3A0(int this)
{
  int v2; // ecx

  if ( !*(_BYTE *)(this + 201) )
    *(_BYTE *)(this + 45) = 0;
  if ( !*(_BYTE *)(this + 45) )
    return 0;
  v2 = *(_DWORD *)(this + 4);
  return *(_DWORD *)(v2 + 2324) == 3 && sub_100CF460(v2);
}
