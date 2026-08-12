void __thiscall sub_10385950(float *this)
{
  int v2; // edi
  double v3; // st4
  double v4; // st7
  double v5; // st4
  double v6; // st5
  double v7; // st7
  bool v8; // zf
  int *v9; // edx
  double v10; // st7
  double v11; // st6
  double v12; // st4
  double v13; // st7
  float v14; // [esp+8h] [ebp-18h]
  int v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+18h] [ebp-8h] BYREF
  float v17; // [esp+1Ch] [ebp-4h]

  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
  {
    v2 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
      sub_100DAE60(v2);
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    v3 = this[145] - *(float *)(v2 + 580);
    v4 = v3 * v3;
    v5 = this[146] - *(float *)(v2 + 584);
    v6 = this[147] - *(float *)(v2 + 588);
    v14 = v6 * v6 + v5 * v5 + v4;
    v7 = off_10689708(v14);
  }
  else
  {
    v7 = 3.4028235e38;
  }
  v8 = ((_BYTE)this[62] & 2) == 0;
  v17 = v7;
  if ( v8 )
  {
    if ( *(float *)(dword_106B31C8 + 12) >= (double)this[957] )
    {
      if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this)
        && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 264))(this) )
      {
        v10 = v17;
        if ( v17 < 512.0 )
        {
          v11 = 1.0 - 0.001953125 * v10;
          v12 = 1.0;
          if ( v11 <= 1.0 )
            v12 = v11;
          v16 = (int)(v12 * 60.0 + 100.0);
          v13 = 1.0 - v10 * 0.0024999999;
          if ( v13 > 1.0 )
            v13 = 1.0;
          v15 = (int)(v13 * 105.0 + 85.0);
          sub_103856F0((_DWORD *)this + 979, &v16);
          *(float *)&v16 = *(float *)(dword_106B31C8 + 12) + 0.1;
          sub_10385790(this + 981, (float *)&v16);
          sub_10385740((_DWORD *)this + 980, &v15);
          *(float *)&v15 = *(float *)(dword_106B31C8 + 12) + 0.1;
          sub_103857E0(this + 982, (float *)&v15);
          *((_BYTE *)this + 3852) = 1;
          goto LABEL_25;
        }
      }
      else if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 264))(this) )
      {
        goto LABEL_25;
      }
      if ( !*((_BYTE *)this + 3852) )
      {
LABEL_25:
        if ( this[950] < (double)*(float *)(dword_106B31C8 + 12) && v17 < 48.0 )
        {
          this[950] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                        dword_106B31E4,
                        3.0,
                        10.0)
                    + *(float *)(dword_106B31C8 + 12);
          sub_1023C380(this, (int)"NPC_Manhack.EngineNoise", 0.0, 0);
        }
        return;
      }
      v15 = 100;
      sub_103856F0((_DWORD *)this + 979, &v15);
      *(float *)&v15 = *(float *)(dword_106B31C8 + 12) + 0.1;
      sub_10385790(this + 981, (float *)&v15);
      v15 = 85;
      sub_10385740((_DWORD *)this + 980, &v15);
      v9 = &v15;
      *(float *)&v15 = *(float *)(dword_106B31C8 + 12) + 0.2;
    }
    else
    {
      if ( !*((_BYTE *)this + 3852) )
        goto LABEL_25;
      v16 = 85;
      sub_103856F0((_DWORD *)this + 979, &v16);
      *(float *)&v16 = *(float *)(dword_106B31C8 + 12) + 0.5;
      sub_10385790(this + 981, (float *)&v16);
      v16 = 90;
      sub_10385740((_DWORD *)this + 980, &v16);
      v9 = &v16;
      *(float *)&v16 = *(float *)(dword_106B31C8 + 12) + 0.5;
    }
    sub_103857E0(this + 982, (float *)v9);
    *((_BYTE *)this + 3852) = 0;
    goto LABEL_25;
  }
}
