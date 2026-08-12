int __thiscall sub_1021E620(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // esi
  int v5; // edi

  this[344] = a2;
  result = a3;
  v4 = 0;
  this[343] = a3;
  if ( a3 > 0 )
  {
    v5 = 0;
    do
    {
      result = v5 + this[344];
      *(_DWORD *)result = -1;
      *(_DWORD *)(result + 4) = -1;
      *(_DWORD *)(result + 8) = -1;
      *(_DWORD *)(result + 12) = -1;
      *(_DWORD *)(result + 20) = 0;
      *(_DWORD *)(result + 24) = 0;
      *(_DWORD *)(result + 28) = 0;
      *(_DWORD *)(result + 32) = 0;
      *(_DWORD *)(result + 36) = 0;
      *(float *)(result + 40) = 0.0;
      *(float *)(result + 44) = 0.0;
      ++v4;
      *(float *)(result + 48) = 0.0;
      *(_DWORD *)(result + 52) = 0;
      v5 += 56;
    }
    while ( v4 < this[343] );
  }
  return result;
}
