void __thiscall sub_1025B870(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  void *v7; // eax
  float *v8; // edi
  _DWORD *v9; // eax
  float *v10; // eax
  float *v11; // eax
  float v12; // eax
  float v13; // ecx
  double v14; // st6
  double v15; // st7
  double v16; // st6
  double v17; // rt1
  double v18; // st7
  float v19; // [esp+14h] [ebp-24h] BYREF
  float v20; // [esp+18h] [ebp-20h]
  float v21; // [esp+1Ch] [ebp-1Ch]
  float v22; // [esp+20h] [ebp-18h] BYREF
  float v23; // [esp+24h] [ebp-14h]
  float v24; // [esp+28h] [ebp-10h]
  float v25; // [esp+2Ch] [ebp-Ch] BYREF
  float v26; // [esp+30h] [ebp-8h]
  float v27; // [esp+34h] [ebp-4h]

  v2 = *(_DWORD *)(this + 800);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      if ( *v3 )
      {
        if ( *(_DWORD *)(this + 804) != -1
          && off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] == *(_DWORD *)(this + 804) >> 12
          && off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1]
          && ((*(_DWORD *)(this + 248) & 8) != 0
           || !(unsigned __int8)sub_102DC130(this + 804)
           && *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(this + 820)) )
        {
          v4 = *(_DWORD *)(this + 868);
          v5 = this + 804;
          if ( v4 )
          {
            v6 = sub_1026A890(v5);
            v7 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 208))(v6);
            sub_100BD6D0(v7, v4, (int)&v22, 0, 0, 0);
            if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
              sub_100DAE60(this);
            v19 = v22 - *(float *)(this + 580);
            v20 = v23 - *(float *)(this + 584);
            v21 = v24 - *(float *)(this + 588);
            sub_10422540(&v19, &v25);
          }
          else if ( sub_1026A890(v5) )
          {
            v8 = (float *)sub_10019640((_DWORD *)this);
            v9 = (_DWORD *)sub_1026A890(this + 804);
            v10 = (float *)sub_10019640(v9);
            v19 = *v10 - *v8;
            v20 = v10[1] - v8[1];
            v21 = v10[2] - v8[2];
            sub_10422540(&v19, &v25);
          }
          else
          {
            v11 = (float *)sub_1001F410((_DWORD *)this);
            v25 = *v11;
            v26 = v11[1];
            v27 = v11[2];
          }
          if ( *(_BYTE *)(this + 872) )
          {
            sub_100E0EA0(this, &v25);
            *(_BYTE *)(this + 872) = 0;
          }
          else
          {
            v12 = *(float *)(this + 736);
            v13 = *(float *)(this + 728);
            v23 = *(float *)(this + 732);
            v14 = v23;
            v24 = v12;
            v22 = v13;
            if ( v23 > 360.0 )
            {
              v14 = v14 - 360.0;
              v23 = v14;
            }
            if ( v14 < 0.0 )
              v23 = v14 + 360.0;
            sub_100E11A0(this, &v22);
            v15 = v25 - *(float *)(this + 728);
            v16 = v26 - *(float *)(this + 732);
            if ( v15 < -180.0 )
              v15 = v15 + 360.0;
            if ( v15 > 180.0 )
              v15 = v15 - 360.0;
            if ( v16 < -180.0 )
              v16 = v16 + 360.0;
            if ( v16 > 180.0 )
              v16 = v16 - 360.0;
            v17 = v16 * 40.0 * *(float *)(dword_106B31C8 + 16);
            v19 = 40.0 * v15 * *(float *)(dword_106B31C8 + 16);
            v20 = v17;
            v21 = *(float *)(this + 496);
            sub_100D7260((float *)this, &v19);
          }
          if ( (*(_DWORD *)(this + 248) & 4) == 0 )
          {
            if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
              sub_100DAFD0(this);
            v19 = *(float *)(this + 476) * 0.80000001;
            v20 = *(float *)(this + 480) * 0.80000001;
            v18 = 0.80000001 * *(float *)(this + 484);
            v21 = v18;
            sub_100DD660(this, &v19);
            if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
              sub_100DAFD0(this);
            sub_100D7A40((float *)(this + 476));
            if ( v18 < 10.0 )
              sub_100DD660(this, &flt_106F1CA8);
          }
          sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
          sub_1025A080(this);
        }
        else
        {
          sub_10259E20(this);
        }
      }
    }
  }
}
