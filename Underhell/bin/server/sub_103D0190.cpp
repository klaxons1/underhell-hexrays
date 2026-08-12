void __thiscall sub_103D0190(volatile signed __int32 *this, float a2, float a3, float a4)
{
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  int v8; // esi
  char v9; // dl
  char v10; // cl
  double v11; // st7
  double v12; // st6
  int v13; // eax
  float v14[3]; // [esp+8h] [ebp-24h] BYREF
  float v15[3]; // [esp+14h] [ebp-18h] BYREF
  float v16; // [esp+20h] [ebp-Ch]
  float v17; // [esp+24h] [ebp-8h]
  float v18; // [esp+28h] [ebp-4h]

  v5 = *((_DWORD *)this + 965);
  if ( v5 != -1 )
  {
    v6 = &off_1061BE18[4 * (v5 & 0xFFF) + 1];
    v7 = v5 >> 12;
    if ( v6[1] == v7 )
    {
      if ( *v6 )
      {
        if ( v6[1] == v7 )
          v8 = *v6;
        else
          v8 = 0;
        if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
          sub_100DAE60(v8);
        v16 = a2 - *(float *)(v8 + 580);
        v17 = a3 - *(float *)(v8 + 584);
        v18 = a4 - *(float *)(v8 + 588);
        off_10689714();
        (*(void (__thiscall **)(volatile signed __int32 *, float *, float *, _DWORD))(*this + 528))(this, v15, v14, 0);
        v9 = 0;
        v10 = 0;
        v11 = v15[2] * v18 + v15[1] * v17 + v15[0] * v16;
        v12 = v17 * v14[1] + v16 * v14[0] + v18 * v14[2];
        if ( v11 < 0.0 )
        {
          v9 = 1;
          v11 = v11 * -1.0;
        }
        if ( v12 < 0.0 )
        {
          v10 = 1;
          v12 = v12 * -1.0;
        }
        if ( v12 <= v11 )
        {
          v13 = dword_106EC888;
          if ( v9 != 1 )
            v13 = dword_106EC884;
        }
        else if ( v10 == 1 )
        {
          v13 = LODWORD(flt_106EC880);
        }
        else
        {
          v13 = dword_106EC87C;
        }
        sub_100C74B0(this, v13, 1);
        sub_103CF7A0(this, flt_106F1CA8, flt_106F1CAC, flt_106F1CB0);
        if ( *(float *)(dword_106B31C8 + 12) >= (double)*((float *)this + 960) )
          sub_103CFF40((int)this, 0);
        else
          sub_103CF190((float *)this);
      }
    }
  }
}
