void __thiscall sub_10162C50(int this, float a2)
{
  double v3; // st7
  int v4; // edi
  int v5; // eax
  double v6; // st7
  int (__thiscall *v7)(int); // edx
  float *v8; // eax
  int v9; // edx
  double v10; // st7
  int (__thiscall *v11)(int); // eax
  float *v12; // eax
  float *v13; // eax
  float *v14; // edi
  float *v15; // eax
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // rt0
  double v20; // st5
  double v21; // st7
  float v22; // [esp+8h] [ebp-74h]
  int v23; // [esp+Ch] [ebp-70h]
  float v24[3]; // [esp+1Ch] [ebp-60h] BYREF
  float v25[3]; // [esp+28h] [ebp-54h] BYREF
  float v26[3]; // [esp+34h] [ebp-48h] BYREF
  float v27; // [esp+40h] [ebp-3Ch] BYREF
  float v28; // [esp+44h] [ebp-38h]
  float v29; // [esp+48h] [ebp-34h]
  float v30; // [esp+4Ch] [ebp-30h]
  float v31; // [esp+50h] [ebp-2Ch]
  float v32; // [esp+54h] [ebp-28h]
  float v33; // [esp+58h] [ebp-24h] BYREF
  float v34; // [esp+5Ch] [ebp-20h]
  float v35; // [esp+60h] [ebp-1Ch]
  float v36; // [esp+64h] [ebp-18h] BYREF
  float v37; // [esp+68h] [ebp-14h]
  float v38; // [esp+6Ch] [ebp-10h]
  int v39; // [esp+70h] [ebp-Ch]
  float v40; // [esp+74h] [ebp-8h]
  int v41; // [esp+78h] [ebp-4h]

  if ( *(_DWORD *)(this + 368) )
  {
    if ( *(_DWORD *)(this + 260) )
    {
      v3 = a2;
      v4 = 0;
      while ( v3 >= *(float *)(this + 380) )
      {
        v3 = v3 - *(float *)(this + 380);
        ++v4;
        *(float *)(this + 380) = *(float *)(this + 376);
      }
      *(float *)(this + 380) = *(float *)(this + 380) - v3;
      if ( v4 > 0 )
      {
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)(this - 1192) + 40))(this - 1192);
        sub_101EE040(v5, &v36, &v33, v26);
        if ( *(_BYTE *)(this + 268) )
        {
          v30 = v36;
          v31 = v37;
          v32 = v38;
          v36 = -v33;
          v37 = -v34;
          v38 = -v35;
          v33 = v30;
          v34 = v31;
          v35 = v32;
        }
        v6 = *(float *)(this + 240);
        v7 = *(int (__thiscall **)(int))(*(_DWORD *)(this - 1192) + 36);
        v30 = v36 * v6;
        v31 = v37 * v6;
        v32 = v6 * v38;
        v8 = (float *)v7(this - 1192);
        v9 = *(_DWORD *)(this - 1192);
        v27 = *v8 + v30;
        v28 = v8[1] + v31;
        v10 = v8[2] + v32;
        v11 = *(int (__thiscall **)(int))(v9 + 36);
        v29 = v10;
        v12 = (float *)v11(this - 1192);
        sub_100158B0(v12, &v27, v24);
        v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 1192) + 36))(this - 1192);
        sub_10015910(v13, &v27, v25);
        sub_100EC3F0(this + 4, v24, v25, 1);
        if ( (*(_BYTE *)(this + 152) & 0x40) != 0 )
        {
          while ( 1 )
          {
            v23 = *(_DWORD *)(this + 372);
            v41 = v4 - 1;
            v14 = (float *)sub_100F06D0(this + 4, this, 56, v23);
            if ( v14 )
            {
              v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 1192) + 36))(this - 1192);
              v14[3] = *v15;
              v14[4] = v15[1];
              v14[5] = v15[2];
              v16 = *(float *)(this + 240);
              v27 = v36 * v16;
              v28 = v37 * v16;
              v29 = v16 * v38;
              *(float *)&v39 = -*(float *)(this + 236);
              v40 = *(float *)(this + 236);
              v17 = *(float *)&v39 + (v40 - *(float *)&v39) * ((double)sub_10115FB0() * 0.000030518509);
              v30 = v26[0] * v17;
              v31 = v26[1] * v17;
              v32 = v17 * v26[2];
              v40 = -*(float *)(this + 236);
              v39 = *(int *)(this + 236);
              v18 = v40 + (*(float *)&v39 - v40) * ((double)sub_10115FB0() * 0.000030518509);
              v19 = v34 * v18 + v31 + v28;
              v20 = v33 * v18 + v30 + v27;
              v21 = v18 * v35 + v32 + v29;
              v14[6] = v20;
              v14[7] = v19;
              v14[8] = v21;
              v14[11] = 0.0;
              v14[12] = *(float *)(this + 304);
              v39 = (int)*(float *)(this + 244);
              *((_BYTE *)v14 + 52) = v39;
              v39 = (int)*(float *)(this + 248);
              *((_BYTE *)v14 + 53) = v39;
              v14[9] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                         dword_10413198,
                         0.0,
                         360.0);
              v22 = -*(float *)(this + 276);
              v14[10] = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                          LODWORD(v22),
                          *(float *)(this + 276));
            }
            if ( !v41 )
              break;
            v4 = v41;
          }
        }
        sub_10162730((float *)(this - 1192));
      }
    }
  }
}
