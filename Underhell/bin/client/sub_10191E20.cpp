void __thiscall sub_10191E20(void *this, float a2)
{
  float *v2; // esi
  double i; // st7
  double (__thiscall *v5)(int, _DWORD, _DWORD); // edx
  double v6; // st7
  float v7; // eax
  float *v8; // eax
  int v9; // esi
  int v10; // eax
  float *v11; // esi
  double v12; // st7
  double v13; // st7
  double v14; // st7
  char v15; // al
  float v16; // [esp+24h] [ebp-44h]
  float v17; // [esp+28h] [ebp-40h]
  float v18; // [esp+2Ch] [ebp-3Ch]
  float v19; // [esp+48h] [ebp-20h] BYREF
  float v20; // [esp+4Ch] [ebp-1Ch]
  float v21; // [esp+50h] [ebp-18h]
  float v22; // [esp+54h] [ebp-14h]
  int v23; // [esp+58h] [ebp-10h]
  float v24; // [esp+5Ch] [ebp-Ch]
  float v25; // [esp+60h] [ebp-8h]
  float v26; // [esp+64h] [ebp-4h]

  v2 = (float *)off_103DC81C;
  v25 = *((float *)this + 302) * 0.25 * a2;
  v16 = *((float *)this + 301) + *((float *)this + 303);
  v24 = sub_100260E0(*((float *)off_103DC81C + 3), *((float *)this + 303), v16, 0.0, 1.0);
  for ( i = v2[4]; i >= *((float *)this + 300); i = v22 )
  {
    v22 = i - *((float *)this + 300);
    *((float *)this + 300) = *((float *)this + 299);
    v5 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
    v26 = -v25;
    v19 = v5(dword_10413198, LODWORD(v26), LODWORD(v25));
    v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            LODWORD(v26),
            LODWORD(v25));
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           -8.0,
           8.0);
    v7 = *(float *)this;
    v21 = v6;
    v8 = (float *)(*(int (__thiscall **)(void *))(LODWORD(v7) + 36))(this);
    v9 = *((_DWORD *)this + 298);
    v19 = *v8 + v19;
    v20 = v8[1] + v20;
    v21 = v8[2] + v21;
    v10 = sub_100F29B0(v9, (int)this, v9, "effects/spark");
    v11 = sub_100F2B60(v9, v9, 60, v10, &v19);
    if ( !v11 )
      return;
    sub_100EB300(-4.0, 4.0);
    sub_100EB300(-4.0, 4.0);
    v12 = v24;
    sub_101EE8A0(v24, 0.25);
    v26 = v12;
    sub_100EB300(32.0, 256.0);
    v13 = 32.0 * v26;
    v11[6] = -4.0;
    v11[7] = -4.0;
    v11[8] = v13;
    v23 = (int)(((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  4.0,
                  8.0)
              * a2);
    *((_BYTE *)v11 + 53) = v23;
    v11[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.5,
                1.0);
    v11[11] = 0.0;
    v11[9] = (float)sub_100EB330(0, 360);
    *(float *)&v23 = 255.0 * a2;
    v18 = 8.0 * a2;
    v14 = a2 * -8.0;
    v17 = v14;
    sub_100EB300(v17, v18);
    v11[14] = v14;
    v23 = (int)*(float *)&v23;
    v15 = v23;
    *((_BYTE *)v11 + 48) = v23;
    *((_BYTE *)v11 + 49) = v15;
    *((_BYTE *)v11 + 50) = v15;
    *((_BYTE *)v11 + 51) = v15;
    *((_BYTE *)v11 + 52) = 0;
    *((_BYTE *)v11 + 54) = 0;
  }
  *((float *)this + 300) = *((float *)this + 300) - i;
}
