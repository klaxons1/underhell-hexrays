int sub_10247B30()
{
  int result; // eax
  int v1; // esi

  result = sub_10184390(76);
  v1 = result;
  if ( result )
  {
    result = sub_102DA4A0(result);
    *(_DWORD *)v1 = &CHalfLife2Survival::`vftable';
    *(_DWORD *)(v1 + 28) = 0;
    *(_DWORD *)(v1 + 32) = 0;
    *(_DWORD *)(v1 + 36) = 0;
    *(_DWORD *)(v1 + 40) = 0;
    *(_DWORD *)(v1 + 44) = 0;
    *(_DWORD *)(v1 + 56) = 0;
    *(_DWORD *)(v1 + 60) = 0;
    *(_DWORD *)(v1 + 64) = 0;
    *(_DWORD *)(v1 + 68) = 0;
    *(_DWORD *)(v1 + 72) = 0;
    *(_DWORD *)(v1 + 48) = 100;
    *(_BYTE *)(v1 + 24) = 0;
  }
  return result;
}
