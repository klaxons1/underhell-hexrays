bool __stdcall sub_10373BA0(int a1)
{
  bool result; // al
  int v2; // eax

  result = 0;
  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 192) & 0x20) == 0 )
    {
      v2 = *(_DWORD *)(a1 + 92);
      if ( v2 != dword_106E8514 && v2 != dword_106E8510 )
        return 1;
    }
  }
  return result;
}
