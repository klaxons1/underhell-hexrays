void __thiscall sub_101B7D30(_DWORD *this)
{
  int v1; // edx
  int v2; // esi
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // esi
  int v11; // eax

  v1 = this[80] - 1;
  if ( v1 >= 0 )
  {
    if ( (int)this[80] >= 4 )
    {
      do
      {
        if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this[77] + 8 * v1 + 4) > 2.0 )
        {
          v2 = this[80];
          if ( v2 > 0 )
          {
            v3 = this[77];
            *(_DWORD *)(v3 + 8 * v1) = *(_DWORD *)(v3 + 8 * v2 - 8);
            *(_DWORD *)(v3 + 8 * v1 + 4) = *(_DWORD *)(v3 + 8 * v2 - 4);
            --this[80];
          }
        }
        if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this[77] + 8 * v1 - 4) > 2.0 )
        {
          v4 = this[80];
          if ( v4 > 0 )
          {
            v5 = this[77];
            *(_DWORD *)(v5 + 8 * v1 - 8) = *(_DWORD *)(v5 + 8 * v4 - 8);
            *(_DWORD *)(v5 + 8 * v1 - 4) = *(_DWORD *)(v5 + 8 * v4 - 4);
            --this[80];
          }
        }
        if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this[77] + 8 * v1 - 12) > 2.0 )
        {
          v6 = this[80];
          if ( v6 > 0 )
          {
            v7 = this[77];
            *(_DWORD *)(v7 + 8 * v1 - 16) = *(_DWORD *)(v7 + 8 * v6 - 8);
            *(_DWORD *)(v7 + 8 * v1 - 12) = *(_DWORD *)(v7 + 8 * v6 - 4);
            --this[80];
          }
        }
        if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this[77] + 8 * v1 - 20) > 2.0 )
        {
          v8 = this[80];
          if ( v8 > 0 )
          {
            v9 = this[77];
            *(_DWORD *)(v9 + 8 * v1 - 24) = *(_DWORD *)(v9 + 8 * v8 - 8);
            *(_DWORD *)(v9 + 8 * v1 - 20) = *(_DWORD *)(v9 + 8 * v8 - 4);
            --this[80];
          }
        }
        v1 -= 4;
      }
      while ( v1 >= 3 );
    }
    for ( ; v1 >= 0; --v1 )
    {
      if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this[77] + 8 * v1 + 4) > 2.0 )
      {
        v10 = this[80];
        if ( v10 > 0 )
        {
          v11 = this[77];
          *(_DWORD *)(v11 + 8 * v1) = *(_DWORD *)(v11 + 8 * v10 - 8);
          *(_DWORD *)(v11 + 8 * v1 + 4) = *(_DWORD *)(v11 + 8 * v10 - 4);
          --this[80];
        }
      }
    }
  }
}
