void __thiscall sub_10166740(int this, int a2)
{
  int v3; // eax
  float *v4; // eax
  double v5; // st6
  double v6; // rt1
  long double v7; // st7
  int v8; // eax
  float v9; // [esp+Ch] [ebp-74h]
  _BYTE v10[84]; // [esp+14h] [ebp-6Ch] BYREF
  float v11; // [esp+68h] [ebp-18h] BYREF
  float v12; // [esp+6Ch] [ebp-14h]
  float v13; // [esp+70h] [ebp-10h]
  float v14; // [esp+74h] [ebp-Ch] BYREF
  long double v15; // [esp+78h] [ebp-8h]
  int savedregs; // [esp+80h] [ebp+0h] BYREF

  if ( !*(_DWORD *)(this + 424) )
  {
    if ( (*(_BYTE *)(this + 256) & 1) != 0 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      v11 = *(float *)(this + 476) * 0.89999998;
      v12 = *(float *)(this + 480) * 0.89999998;
      v13 = 0.89999998 * *(float *)(this + 484);
      sub_100DD660(this, &v11);
      v3 = *(_DWORD *)(this + 732);
      v14 = 0.0;
      *((float *)&v15 + 1) = 0.0;
      LODWORD(v15) = v3;
      sub_100E11A0(this, &v14);
      sub_100D7260((float *)this, &flt_106F1CB4);
    }
    else
    {
      if ( *(_DWORD *)(dword_106B3D0C + 48) != 1 && *(int *)(this + 1124) > 0 && *(_DWORD *)(this + 1148) != -1 )
      {
        v4 = (float *)sub_10019640((_DWORD *)this);
        v5 = v4[1];
        v6 = v4[2] + 8.0;
        v14 = *v4;
        v11 = v14;
        *(float *)&v15 = v5;
        v12 = v5;
        *((float *)&v15 + 1) = v6;
        v13 = v6 - 24.0;
        sub_1002A5F0((int)&savedregs, this, &v14, &v11, 16395, this, 0, (int)v10);
        sub_10265C30(v10, *(_DWORD *)(this + 1148));
        --*(_DWORD *)(this + 1124);
      }
      if ( *(_DWORD *)(this + 1128) != 10
        && !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2) )
      {
        if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
          sub_100DAFD0(this);
        v7 = fabs(*(float *)(this + 484)) * 0.0022222223;
        if ( v7 <= 1.0 )
          v15 = v7;
        else
          v15 = 1.0;
        v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
               dword_106B31D0,
               *(_DWORD *)(this + 24));
        v9 = v15 * 0.800000011920929;
        sub_101496A0(v8, *(_DWORD *)(this + 1128), v9);
      }
    }
  }
}
