void __thiscall sub_1013EF00(int this)
{
  double v2; // st7
  int v3; // ecx
  double v4; // st7
  double v5; // st7
  int v6; // eax
  double v7; // st7
  int v8; // edi
  double v9; // st7
  bool v10; // zf
  float v11; // [esp+8h] [ebp-240h]
  __int64 v12; // [esp+Ch] [ebp-23Ch]
  __int64 v13; // [esp+Ch] [ebp-23Ch]
  float v14; // [esp+10h] [ebp-238h]
  float v15[2]; // [esp+14h] [ebp-234h]
  _DWORD v16[128]; // [esp+1Ch] [ebp-22Ch] BYREF
  _DWORD v17[7]; // [esp+21Ch] [ebp-2Ch] BYREF
  int v18; // [esp+238h] [ebp-10h]
  char v19; // [esp+23Ch] [ebp-Ch]
  float v20; // [esp+240h] [ebp-8h]
  float v21; // [esp+244h] [ebp-4h]

  if ( *(_BYTE *)(this + 800) )
  {
    v2 = *(float *)(this + 812) * 0.25;
    v21 = v2;
    if ( v2 < 0.1 )
    {
      v2 = 0.1;
      v21 = 0.1;
    }
    v14 = v2 + *(float *)(dword_106B31C8 + 12);
    sub_100EC4A0((int *)this, v14, 0);
    v3 = *(_DWORD *)(this + 252) >> 11;
    v20 = 0.0;
    if ( (v3 & 1) != 0 )
      sub_100DAE60(this);
    v4 = *(float *)(this + 804);
    *(float *)&v17[1] = *(float *)(this + 580);
    *(float *)&v17[2] = *(float *)(this + 584);
    *(float *)&v17[3] = *(float *)(this + 588);
    v17[0] = &CFireSphere::`vftable';
    v17[5] = v16;
    v17[6] = 128;
    v18 = 0;
    *(float *)&v17[4] = v4 * v4;
    v19 = 1;
    v11 = v4;
    (*(void (__thiscall **)(int, int, int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)dword_106B31EC + 52))(
      dword_106B31EC,
      16,
      this + 580,
      LODWORD(v11),
      0,
      v17);
    v5 = v20;
    v6 = 0;
    if ( v18 >= 4 )
    {
      do
      {
        v7 = v5 + *(float *)(v16[v6] + 828);
        v8 = v16[v6 + 1];
        v6 += 4;
        v5 = v7 + *(float *)(v8 + 828) + *(float *)(LODWORD(v15[v6]) + 828) + *(float *)(LODWORD(v15[v6 + 1]) + 828);
      }
      while ( v6 < v18 - 3 );
    }
    for ( ; v6 < v18; ++v6 )
      v5 = v5 + *(float *)(v16[v6] + 828);
    if ( v5 < *(float *)(this + 808) )
    {
      v10 = *(_BYTE *)(this + 801) == 0;
      *(float *)(this + 816) = 0.0;
      if ( !v10 )
      {
        v15[0] = 0.0;
        HIDWORD(v13) = this;
        LODWORD(v13) = this;
        *(_BYTE *)(this + 801) = 0;
        sub_1010DD80((_DWORD *)(this + 844), v13, v15[0]);
      }
    }
    else
    {
      v9 = *(float *)(this + 816) + v21;
      *(float *)(this + 816) = v9;
      if ( v9 >= *(float *)(this + 812) && !*(_BYTE *)(this + 801) )
      {
        v15[0] = 0.0;
        HIDWORD(v12) = this;
        LODWORD(v12) = this;
        *(_BYTE *)(this + 801) = 1;
        sub_1010DD80((_DWORD *)(this + 820), v12, v15[0]);
      }
    }
  }
}
