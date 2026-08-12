void __thiscall sub_103D0390(int this)
{
  double v2; // st7
  unsigned int v3; // eax
  float *v4; // eax
  double v5; // st7
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  float *v9; // edi
  float *v10; // eax
  double v11; // st7
  double v12; // st6
  double v13; // st5
  float v14; // [esp+14h] [ebp-30h]
  float v15; // [esp+18h] [ebp-2Ch]
  _BYTE v16[12]; // [esp+20h] [ebp-24h] BYREF
  int v17[3]; // [esp+2Ch] [ebp-18h] BYREF
  float v18; // [esp+38h] [ebp-Ch]
  float v19; // [esp+3Ch] [ebp-8h]
  float v20; // [esp+40h] [ebp-4h]

  sub_103CF560((int *)this);
  if ( *(float *)(this + 3800) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 2320))(this) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 1620))(this);
      v15 = 15.0;
      v2 = 10.0;
    }
    else
    {
      v15 = 5.0;
      v2 = 2.5;
    }
    v14 = v2;
    *(float *)(this + 3800) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                LODWORD(v14),
                                LODWORD(v15))
                            + *(float *)(dword_106B31C8 + 12);
  }
  v3 = *(_DWORD *)(this + 3860);
  if ( v3 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 3860) & 0xFFF) + 2] == v3 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 3860) & 0xFFF) + 1] )
  {
    v4 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 536))(this, v16);
    v18 = *v4 * 0.5;
    v19 = v4[1] * 0.5;
    v5 = 0.5 * v4[2];
    v6 = *(_DWORD *)(this + 252) >> 11;
    v20 = v5;
    if ( (v6 & 1) != 0 )
      sub_100DAE60(this);
    *(float *)v17 = v18 + *(float *)(this + 580);
    *(float *)&v17[1] = *(float *)(this + 584) + v19;
    *(float *)&v17[2] = *(float *)(this + 588) + v20;
    sub_1023D4B0(8, (float *)v17, 256, 0.1, this, 9, 0);
    if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 3840) )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 220))(v7) == 3 && sub_10023D10((_DWORD *)this, 10) )
        {
          v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
          v9 = (float *)sub_10019640(v8);
          v10 = (float *)sub_10019640((_DWORD *)this);
          v11 = *v10 - *v9;
          v12 = v10[1] - v9[1];
          v13 = v10[2] - v9[2];
          if ( v11 * v11 + v12 * v12 + v13 * v13 < 20736.0 )
            sub_103CF190((float *)this);
        }
      }
    }
  }
  sub_1032CF60(this);
}
