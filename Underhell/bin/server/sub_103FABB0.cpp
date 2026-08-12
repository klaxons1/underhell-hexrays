double __thiscall sub_103FABB0(int this)
{
  double result; // st7
  unsigned int v3; // eax
  int v4; // edi
  int *v5; // ecx
  int v6; // ecx
  double v7; // st7
  double v8; // st4
  double v9; // st5
  double v10; // st7
  double v11; // st6
  float v12; // [esp+8h] [ebp-18h]
  float v13[3]; // [esp+14h] [ebp-Ch] BYREF

  result = 0.0;
  if ( *(float *)(this + 56) > 0.0 )
  {
    v3 = *(_DWORD *)(this + 8272);
    if ( v3 == -1
      || (v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 8272) & 0xFFF) + 1], off_1061BE18[4 * (v3 & 0xFFF) + 2] != v3 >> 12) )
    {
      v4 = 0;
    }
    else
    {
      v4 = *v5;
      if ( *v5 )
      {
        v6 = *(_DWORD *)(v4 + 424);
        if ( !v6 )
        {
          DevMsg("Object attached to Physcannon has no physics object\n");
          sub_103FA2C0((_DWORD *)this, 0);
          return 9999.0;
        }
        (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v6 + 276))(v6, v13, 0);
        v7 = *(float *)(this + 4) - v13[0];
        v8 = *(float *)(this + 8) - v13[1];
        v9 = *(float *)(this + 12) - v13[2];
        v12 = v9 * v9 + v8 * v8 + v7 * v7;
        v10 = off_10689708(v12);
        if ( *(float *)(this + 56) <= 0.0 )
        {
          result = 0.0;
        }
        else
        {
          if ( *(float *)(this + 56) > 1.0 )
            *(float *)(this + 56) = 1.0;
          if ( v10 / *(float *)(this + 56) > *(float *)(this + 36) )
            v10 = v10 * 0.5;
          v11 = (1.0 - *(float *)(this + 56)) * *(float *)(this + 60) + v10 * *(float *)(this + 56);
          result = 0.0;
          *(float *)(this + 60) = v11;
        }
      }
    }
    if ( (*(_DWORD *)(v4 + 252) & 0x100000) != 0 )
      *(float *)(this + 60) = *(float *)(this + 60) * 3.0;
    *(float *)(this + 56) = result;
    return *(float *)(this + 60);
  }
  return result;
}
