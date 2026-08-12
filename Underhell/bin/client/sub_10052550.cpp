void __thiscall sub_10052550(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  double v5; // st7
  double v6; // st6
  double v7; // st6
  float v8; // [esp+10h] [ebp-Ch] BYREF
  float v9; // [esp+14h] [ebp-8h]

  sub_1009C8A0(*((float *)off_103DC81C + 3), &v8);
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(v3 + 8);
  if ( v4 != v3 + 4 )
  {
    v5 = 50.0;
    for ( *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 4); ; *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 4) )
    {
      if ( (*(_BYTE *)(this[63] + 1228) & 4) == 0 )
      {
        v6 = *(float *)(a2 + 8) + *(float *)(v4 + 36);
        *(float *)(v4 + 36) = v6;
        if ( v6 < *(float *)(v4 + 40) )
        {
          if ( v8 <= (double)*(float *)(v4 + 24) )
          {
            if ( v8 < (double)*(float *)(v4 + 24) )
            {
              *(float *)(v4 + 24) = *(float *)(v4 + 24) - *((float *)off_103DC81C + 4) * v5;
              if ( v8 > (double)*(float *)(v4 + 24) )
                *(float *)(v4 + 24) = v8;
            }
          }
          else
          {
            *(float *)(v4 + 24) = *((float *)off_103DC81C + 4) * v5 + *(float *)(v4 + 24);
            if ( v8 < (double)*(float *)(v4 + 24) )
              *(float *)(v4 + 24) = v8;
          }
          if ( v9 <= (double)*(float *)(v4 + 28) )
          {
            if ( v9 < (double)*(float *)(v4 + 28) )
            {
              *(float *)(v4 + 28) = *(float *)(v4 + 28) - *((float *)off_103DC81C + 4) * v5;
              if ( v9 > (double)*(float *)(v4 + 28) )
                *(float *)(v4 + 28) = v9;
            }
          }
          else
          {
            *(float *)(v4 + 28) = *((float *)off_103DC81C + 4) * v5 + *(float *)(v4 + 28);
            if ( v9 < (double)*(float *)(v4 + 28) )
              *(float *)(v4 + 28) = v9;
          }
          v7 = *(float *)(a2 + 8);
          *(float *)(v4 + 12) = *(float *)(v4 + 24) * v7 + *(float *)(v4 + 12);
          *(float *)(v4 + 16) = *(float *)(v4 + 28) * v7 + *(float *)(v4 + 16);
          *(float *)(v4 + 20) = v7 * *(float *)(v4 + 32) + *(float *)(v4 + 20);
        }
        else
        {
          sub_100EB9C0(v4);
          v5 = 50.0;
        }
      }
      v4 = *(_DWORD *)(a2 + 16);
      if ( v4 == *(_DWORD *)(a2 + 4) + 4 )
        break;
    }
  }
}
