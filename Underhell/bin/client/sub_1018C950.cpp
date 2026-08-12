void __stdcall sub_1018C950(int a1)
{
  int v2; // eax
  double v3; // st7
  int v4; // esi
  double v5; // st6
  double v6; // rt2
  double v7; // st6
  double v8; // st7
  double v9; // st7
  double v10; // st5
  double v11; // st4
  double v12; // st7
  double v13; // rt0
  long double v14; // st6
  float v17; // [esp+0h] [ebp-Ch]
  float v18; // [esp+0h] [ebp-Ch]
  float v19; // [esp+14h] [ebp+8h]

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(float *)(a1 + 8);
  v4 = *(_DWORD *)(v2 + 8);
  v19 = *(float *)(a1 + 8);
  if ( v4 != v2 + 4 )
  {
    for ( *(_DWORD *)(a1 + 16) = *(_DWORD *)(v4 + 4); ; *(_DWORD *)(a1 + 16) = *(_DWORD *)(v4 + 4) )
    {
      if ( v3 > 0.05 )
      {
        v3 = 0.050000001;
        v19 = 0.050000001;
      }
      v5 = *(float *)(v4 + 36) + v3;
      *(float *)(v4 + 36) = v5;
      if ( v5 <= *(float *)(v4 + 72) )
      {
        *(float *)(v4 + 64) = *(float *)(v4 + 68) * *(float *)(a1 + 8) + *(float *)(v4 + 64);
        if ( v5 >= 0.0 )
        {
          v6 = v3 * *(float *)(v4 + 28) + *(float *)(v4 + 16);
          v7 = v3 * *(float *)(v4 + 32) + *(float *)(v4 + 20);
          *(float *)(v4 + 12) = *(float *)(v4 + 24) * v3 + *(float *)(v4 + 12);
          *(float *)(v4 + 16) = v6;
          *(float *)(v4 + 20) = v7;
          v17 = *(float *)(v4 + 32) * *(float *)(v4 + 32)
              + *(float *)(v4 + 24) * *(float *)(v4 + 24)
              + *(float *)(v4 + 28) * *(float *)(v4 + 28);
          *(float *)(v4 + 48) = off_103EDFE0(v17) * v19 + *(float *)(v4 + 48);
          v18 = *(float *)(v4 + 32) * *(float *)(v4 + 32)
              + *(float *)(v4 + 24) * *(float *)(v4 + 24)
              + *(float *)(v4 + 28) * *(float *)(v4 + 28);
          v8 = off_103EDFE0(v18);
          v9 = 100.0 / (v8 * v19 * (v8 * v19) + 100.0);
          v10 = *(float *)(v4 + 24) * v9;
          v11 = v9;
          v12 = v9 * *(float *)(v4 + 28);
          v13 = v11 * *(float *)(v4 + 32);
          *(float *)(v4 + 24) = v10;
          *(float *)(v4 + 28) = v12;
          v3 = v19;
          *(float *)(v4 + 32) = v13;
          if ( v19 != flt_10445E5C )
          {
            flt_10445E5C = v19;
            v14 = __FYL2X__(0.300000011920929, 0.6931471805599453094) * v3 * 1.442695040888963407;
            _ST5 = v14;
            __asm { frndint }
            flt_10445E58 = __FSCALE__(__F2XM1__(v14 - _ST5) + 1.0, _ST5);
          }
          if ( fabs(*(float *)(v4 + 68)) > 0.2 )
            *(float *)(v4 + 68) = *(float *)(v4 + 68) * flt_10445E58;
        }
      }
      else
      {
        sub_100EB9C0(*(_DWORD *)a1, (_DWORD *)v4);
        v3 = v19;
      }
      v4 = *(_DWORD *)(a1 + 16);
      if ( v4 == *(_DWORD *)(a1 + 4) + 4 )
        break;
    }
  }
}
