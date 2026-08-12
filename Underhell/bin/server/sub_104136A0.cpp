void __thiscall sub_104136A0(int this)
{
  double v2; // st7
  int v3; // eax
  double v4; // st7
  int v5; // eax
  double v6; // st7
  int *v7; // edi
  unsigned int v8; // eax
  int *v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  char *v12; // eax
  __int64 v13; // [esp+10h] [ebp-50h]
  float v14[3]; // [esp+24h] [ebp-3Ch] BYREF
  float v15[3]; // [esp+30h] [ebp-30h] BYREF
  float v16[3]; // [esp+3Ch] [ebp-24h] BYREF
  float v17[3]; // [esp+48h] [ebp-18h] BYREF
  float v18; // [esp+54h] [ebp-Ch] BYREF
  float v19; // [esp+58h] [ebp-8h]
  float v20; // [esp+5Ch] [ebp-4h]

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 1784) )
  {
    if ( (int)--*(_DWORD *)(this + 1780) <= 0 )
    {
      *(_DWORD *)(this + 1780) = 5;
      v2 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             3.0,
             4.0)
         + *(float *)(dword_106B31C8 + 12);
    }
    else
    {
      v2 = *(float *)(dword_106B31C8 + 12) + 1.5;
    }
    v3 = *(_DWORD *)(this + 1788);
    *(float *)(this + 1784) = v2;
    sub_100BD6D0((void *)this, v3, (int)v14, 0, 0, 0);
    (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, v17, 0, 0);
    v4 = v17[2] * 0.0;
    v5 = *(_DWORD *)(this + 1792) + 1;
    v20 = 1.0;
    v18 = (v4 - v17[1]) * flt_10688AEC[v5];
    v6 = (v17[0] - v4) * flt_10688AEC[v5];
    *(_DWORD *)(this + 1792) = v5;
    v19 = v6;
    if ( v5 >= 6 )
      *(_DWORD *)(this + 1792) = 0;
    off_10689714();
    v16[0] = v18 * 800.0;
    v16[1] = v19 * 800.0;
    v16[2] = 800.0 * v20;
    sub_10422540(&v18, v15);
    v7 = sub_10403C30(v14, v15, v16, this);
    sub_104083B0((int)v7);
    v8 = *(_DWORD *)(this + 1796);
    if ( v8 != -1
      && (v9 = &off_1061BE18[4 * (*(_DWORD *)(this + 1796) & 0xFFF) + 1],
          v10 = v8 >> 12,
          off_1061BE18[4 * (*(_DWORD *)(this + 1796) & 0xFFF) + 2] == v10)
      && *v9 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 1796) & 0xFFF) + 2] == v10 )
        v11 = *v9;
      else
        v11 = 0;
      sub_10404040(v7, v11);
      *(_DWORD *)(this + 1796) = -1;
    }
    else if ( *(_DWORD *)(this + 1800) )
    {
      v12 = *(char **)(this + 1800);
      if ( !v12 )
        v12 = (char *)String;
      sub_10403CA0(v7, v12);
    }
    sub_1023C380((_DWORD *)this, (int)"PropAPC.FireRocket", 0.0, 0);
    HIDWORD(v13) = this;
    LODWORD(v13) = this;
    sub_1010DD80((_DWORD *)(this + 1828), v13, 0.0);
  }
}
