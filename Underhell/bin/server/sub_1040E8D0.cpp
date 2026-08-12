float *__thiscall sub_1040E8D0(int this, float *a2)
{
  int v3; // eax
  int v4; // ecx
  float *v5; // eax

  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 2168) > *(float *)(this + 2164) )
  {
    v3 = *(_DWORD *)(this + 2180);
    if ( v3 > 0 )
    {
      v4 = 0;
      if ( v3 - 1 > 0 )
      {
        v5 = (float *)(this + 2188);
        do
        {
          ++v4;
          *(v5 - 1) = v5[2];
          v5 += 3;
          *(v5 - 3) = *v5;
          *(v5 - 2) = v5[1];
        }
        while ( v4 < *(_DWORD *)(this + 2180) - 1 );
      }
      --*(_DWORD *)(this + 2180);
      sub_1040E3B0(this);
    }
  }
  return sub_1040E210(this, a2);
}
