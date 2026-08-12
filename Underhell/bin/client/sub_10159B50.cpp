int __stdcall sub_10159B50(int a1)
{
  int result; // eax
  int v2; // edx
  int v3; // ecx

  result = a1;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(v2 + 8);
  while ( v3 != v2 + 4 )
  {
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(v3 + 4);
    *(float *)(v3 + 28) = *(float *)(v3 + 24) * *(float *)(a1 + 8) + *(float *)(v3 + 28);
    v3 = *(_DWORD *)(a1 + 16);
    v2 = *(_DWORD *)(a1 + 4);
  }
  return result;
}
