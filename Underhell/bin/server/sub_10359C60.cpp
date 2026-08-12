char __stdcall sub_10359C60(int a1)
{
  int v1; // edi
  int *v2; // eax
  int v4; // edi
  int *v5; // eax
  int v6; // edi

  v1 = *(_DWORD *)(a1 + 76);
  v2 = sub_102D9B20();
  if ( v1 == sub_100B9D10(v2, "AR2") )
    return 1;
  v4 = *(_DWORD *)(a1 + 76);
  v5 = sub_102D9B20();
  if ( v4 == sub_100B9D10(v5, "357") )
    return 1;
  v6 = *(_DWORD *)(a1 + 64);
  if ( (v6 & 0x20000000) != 0
    && (double)(int)((double)*(int *)(dword_106DF3E4 + 48) * *(float *)(dword_106DF30C + 44) * 0.5) <= *(float *)(a1 + 52) )
  {
    return 1;
  }
  return (v6 & 0x100) != 0 && *(_DWORD *)(dword_10698344 + 48) || sub_1001F7D0(a1);
}
