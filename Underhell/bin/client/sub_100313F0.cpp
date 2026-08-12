int __thiscall sub_100313F0(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // edx
  int v5; // ecx

  result = sub_10030540((int)this);
  v3 = 0;
  if ( (int)this[493] > 0 )
  {
    v4 = 0;
    do
    {
      v5 = v4 + this[490];
      *(_DWORD *)v5 = 0;
      *(float *)(v5 + 4) = 0.0;
      *(float *)(v5 + 8) = 0.0;
      ++v3;
      *(float *)(v5 + 16) = 0.0;
      v4 += 32;
      *(float *)(v5 + 20) = 0.0;
      *(float *)(v5 + 24) = 0.0;
      *(float *)(v5 + 28) = 0.0;
      *(_DWORD *)(v4 + this[490] - 20) = 15;
    }
    while ( v3 < this[493] );
  }
  return result;
}
