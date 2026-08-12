void __thiscall sub_100C60B0(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // esi
  int v16; // esi
  int v17; // ecx
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // edx
  int *v21; // esi
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // [esp+Ch] [ebp-10h]
  int v25; // [esp+10h] [ebp-Ch]
  int v26; // [esp+14h] [ebp-8h]
  int v27; // [esp+18h] [ebp-4h]
  int i; // [esp+18h] [ebp-4h]

  v3 = 0;
  if ( a2 >= 0 )
  {
    v5 = this[283];
    if ( a2 < v5 )
    {
      v6 = this[280];
      v7 = 76 * a2;
      v24 = 76 * a2;
      if ( (*(_BYTE *)(v6 + 76 * a2) & 1) != 0 && *(_DWORD *)(v6 + v7 + 56) != a3 )
      {
        v27 = 0;
        if ( v5 > 0 )
        {
          do
          {
            v8 = this[280];
            if ( (*(_BYTE *)(v3 + v8) & 1) != 0 && *(_DWORD *)(v3 + v8 + 60) > *(_DWORD *)(v8 + v7 + 60) )
              sub_100C55F0((int *)(v3 + v8 + 60), 0);
            v3 += 76;
            ++v27;
          }
          while ( v27 < this[283] );
        }
        v9 = this[283];
        v10 = 0;
        v11 = 0;
        for ( i = 0; v11 < v9; v10 += 76 )
        {
          if ( v11 != a2 )
          {
            v12 = this[280];
            if ( (*(_BYTE *)(v12 + v10) & 1) != 0 && *(_DWORD *)(v12 + v10 + 56) <= a3 )
            {
              v13 = *(_DWORD *)(v12 + v10 + 60) + 1;
              if ( i <= v13 )
                i = v13;
            }
          }
          ++v11;
        }
        v14 = 0;
        if ( v9 > 0 )
        {
          v15 = 0;
          v26 = 0;
          do
          {
            if ( v14 != a2 )
            {
              v16 = this[280] + v15;
              if ( (*(_BYTE *)v16 & 1) != 0 && *(_DWORD *)(v16 + 60) >= i )
              {
                v17 = *(_DWORD *)(v16 + 60) + 1;
                v25 = v17;
                v18 = *(_DWORD *)(v16 + 72);
                if ( v18 )
                {
                  if ( *(_BYTE *)(v18 + 84) )
                  {
                    *(_BYTE *)(v18 + 88) |= 1u;
                  }
                  else
                  {
                    v19 = *(_DWORD **)(v18 + 24);
                    if ( v19 )
                    {
                      *v19 |= 0x101u;
                      *(_WORD *)(sub_10153460(v19) + 2) = 0;
                      v17 = v25;
                    }
                  }
                }
                *(_DWORD *)(v16 + 60) = v17;
              }
            }
            ++v14;
            v15 = v26 + 76;
            v26 += 76;
          }
          while ( v14 < this[283] );
        }
        v20 = this[280];
        v21 = (int *)(v24 + v20 + 60);
        if ( *v21 != i )
        {
          v22 = *(_DWORD *)(v24 + v20 + 72);
          if ( v22 )
          {
            if ( *(_BYTE *)(v22 + 84) )
            {
              *(_BYTE *)(v22 + 88) |= 1u;
            }
            else
            {
              v23 = *(_DWORD **)(v22 + 24);
              if ( v23 )
              {
                *v23 |= 0x101u;
                *(_WORD *)(sub_10153460(v23) + 2) = 0;
              }
            }
          }
          *v21 = i;
        }
        *(_DWORD *)(v24 + this[280] + 56) = a3;
        *(float *)(v24 + this[280] + 68) = *(float *)(dword_106B31C8 + 12);
      }
    }
  }
}
