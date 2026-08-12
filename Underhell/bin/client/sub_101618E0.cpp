int __thiscall sub_101618E0(int this, int a2)
{
  int result; // eax
  bool v4; // cl
  int v5; // edi
  int v6; // eax
  int v7; // esi
  double v8; // st7
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st4
  double v13; // st3
  double v14; // st7
  float *v15; // eax
  float v16; // [esp+4h] [ebp-14h]
  float v17; // [esp+8h] [ebp-10h]
  float v18; // [esp+10h] [ebp-8h]
  float v19; // [esp+10h] [ebp-8h]
  bool v20; // [esp+17h] [ebp-1h]

  result = *(_DWORD *)(this + 152);
  v4 = (result & 0x40) != 0;
  v20 = v4;
  if ( (result & 0x40) == 0 && *(_BYTE *)(this + 512) == 1 || !*(_DWORD *)(this + 340) || (result & 0x50) != 0 )
  {
    v5 = a2;
    v6 = *(_DWORD *)(a2 + 4);
    v7 = *(_DWORD *)(v6 + 8);
    result = v6 + 4;
    if ( v7 != result )
    {
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(v7 + 4);
      while ( 1 )
      {
        v8 = *(float *)(v5 + 8) + *(float *)(v7 + 48);
        *(float *)(v7 + 48) = v8;
        if ( v8 * *(float *)(this + 460) < 1.0 )
        {
          if ( *(_DWORD *)(this + 452) )
          {
            v18 = *(float *)(v7 + 12);
            v16 = v18 - *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 1192) + 36))(this - 1192);
            v19 = *(float *)(v7 + 16);
            v17 = v19 - *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)(this - 1192) + 36))(this - 1192) + 4);
            *(float *)(v7 + 12) = *(float *)(this + 440) * v17
                                + *(float *)(this + 436) * v16
                                + *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 1192) + 36))(this - 1192);
            v5 = a2;
            *(float *)(v7 + 16) = *(float *)(this + 448) * v17
                                + *(float *)(this + 444) * v16
                                + *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)(this - 1192) + 36))(this - 1192)
                                           + 4);
          }
          v9 = *(float *)(v5 + 8);
          v10 = *(float *)(v7 + 36) * v9;
          v11 = *(float *)(v7 + 40) * v9;
          v12 = v9;
          v13 = *(float *)(v7 + 28) * v9 + *(float *)(v7 + 16);
          v14 = v9 * *(float *)(v7 + 44) + v9 * *(float *)(v7 + 32) + *(float *)(v7 + 20);
          *(float *)(v7 + 12) = v10 + *(float *)(v7 + 24) * v12 + *(float *)(v7 + 12);
          *(float *)(v7 + 16) = v11 + v13;
          *(float *)(v7 + 20) = v14;
          *(float *)(v7 + 52) = *(float *)(v7 + 56) * *(float *)(v5 + 8) + *(float *)(v7 + 52);
          v15 = *(float **)(this + 464);
          *(float *)(v7 + 60) = v15[33] * *(float *)(v7 + 16)
                              + v15[32] * *(float *)(v7 + 12)
                              + v15[34] * *(float *)(v7 + 20)
                              + v15[35];
        }
        else
        {
          sub_100EB9C0(*(_DWORD *)v5, (_DWORD *)v7);
        }
        v7 = *(_DWORD *)(v5 + 16);
        result = *(_DWORD *)(v5 + 4) + 4;
        if ( v7 == result )
          break;
        *(_DWORD *)(v5 + 16) = *(_DWORD *)(v7 + 4);
      }
      v4 = v20;
    }
    *(_BYTE *)(this + 512) = v4;
  }
  return result;
}
