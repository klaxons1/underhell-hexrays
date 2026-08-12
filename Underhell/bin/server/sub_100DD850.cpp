void __thiscall sub_100DD850(_DWORD *this)
{
  int v2; // edx
  int v3; // edi
  int v4; // ebx
  float *v5; // ecx
  int v6; // [esp+8h] [ebp-4h]

  v2 = this[44];
  v3 = 0;
  v6 = v2;
  if ( v2 > 0 )
  {
    v4 = 0;
    do
    {
      if ( v3 < 0
        || v3 >= this[44]
        || (v5 = (float *)(this[41] + v4 + 8), 0.0 != *v5) && *(float *)(dword_106B31C8 + 12) >= (double)*v5 )
      {
        if ( this[44] - v3 - 1 > 0 )
        {
          memcpy((void *)(v4 + this[41]), (const void *)(v4 + this[41] + 12), 12 * (this[44] - v3 - 1));
          v2 = v6;
        }
        --this[44];
        --v2;
        --v3;
        v6 = v2;
        v4 -= 12;
      }
      ++v3;
      v4 += 12;
    }
    while ( v3 < v2 );
  }
}
