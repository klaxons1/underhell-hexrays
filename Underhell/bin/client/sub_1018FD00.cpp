void __thiscall sub_1018FD00(int *this, float a2)
{
  int v3; // esi
  float *v4; // eax
  float *v5; // esi
  float *v6; // eax
  int v7; // eax
  double X; // st7
  int v9; // ebx
  double v10; // st7
  double v11; // st7
  double (__thiscall *v12)(int, int, _DWORD); // edx
  double v13; // st7
  double v14; // st7
  int v15; // eax
  float *v16; // eax
  int v17; // esi
  int v18; // eax
  float *v19; // eax
  float *v20; // esi
  char v21; // al
  double v22; // st7
  float v23; // [esp+Ch] [ebp-64h]
  float v24[3]; // [esp+2Ch] [ebp-44h] BYREF
  float v25[3]; // [esp+38h] [ebp-38h] BYREF
  float v26[3]; // [esp+44h] [ebp-2Ch] BYREF
  float v27; // [esp+50h] [ebp-20h] BYREF
  float v28; // [esp+54h] [ebp-1Ch]
  float v29; // [esp+58h] [ebp-18h]
  int v30; // [esp+5Ch] [ebp-14h]
  int v31; // [esp+60h] [ebp-10h]
  float v32; // [esp+64h] [ebp-Ch]
  float v33; // [esp+68h] [ebp-8h]
  float v34; // [esp+6Ch] [ebp-4h]

  if ( (this[302] & 1) == 0 && a2 < 1.0 )
  {
    if ( (unsigned __int8)sub_10190E10() )
    {
      v3 = this[303];
      v4 = (float *)(*(int (__thiscall **)(int *))(*this + 36))(this);
      sub_100F3060(v3, v4);
      v5 = (float *)this[304];
      v6 = (float *)(*(int (__thiscall **)(int *))(*this + 36))(this);
      sub_100F0D40(v5, v6);
      v7 = (*(int (__thiscall **)(int *))(*this + 40))(this);
      sub_101EE040(v7, v26, v25, v24);
      X = a2 * 4.0;
      v32 = X;
      v9 = 0;
      v30 = (int)floor(X);
      if ( v30 > 0 )
      {
        v33 = a2 * 64.0;
        do
        {
          v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  LODWORD(v32),
                  LODWORD(v33));
          v27 = v26[0] * v10;
          v28 = v26[1] * v10;
          v29 = v26[2] * v10;
          v23 = v10;
          v11 = sub_100260E0(v23, v32, v33, 6.0, 1.0);
          v12 = *(double (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10413198 + 4);
          v34 = 4.0 * v11;
          *(float *)&v31 = v11 * -4.0;
          v13 = v12(dword_10413198, v31, LODWORD(v34));
          v27 = v25[0] * v13 + v27;
          v28 = v25[1] * v13 + v28;
          v29 = v13 * v25[2] + v29;
          v14 = ((double (__thiscall *)(int, int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  v31,
                  LODWORD(v34));
          v15 = *this;
          v27 = v24[0] * v14 + v27;
          v28 = v24[1] * v14 + v28;
          v29 = v14 * v24[2] + v29;
          v16 = (float *)(*(int (__thiscall **)(int *))(v15 + 36))(this);
          v17 = this[304];
          v27 = v27 + *v16;
          v28 = v16[1] + v28;
          v29 = v16[2] + v29;
          v18 = sub_100F29B0(v17, (int)this, v17, "effects/strider_muzzle");
          v19 = sub_100F2B60(v17, v17, 60, v18, &v27);
          v20 = v19;
          if ( !v19 )
            break;
          v19[6] = 0.0;
          v19[7] = 0.0;
          v19[8] = 8.0;
          v19[10] = 0.5;
          v19[11] = 0.0;
          v19[9] = (float)sub_100EB330(0, 360);
          v20[14] = 0.0;
          v31 = (int)(a2 * 255.0);
          v21 = v31;
          *((_BYTE *)v20 + 48) = v31;
          *((_BYTE *)v20 + 49) = v21;
          *((_BYTE *)v20 + 50) = v21;
          *((_BYTE *)v20 + 51) = v21;
          *((_BYTE *)v20 + 52) = 0;
          v22 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  1.0,
                  2.0);
          ++v9;
          *((_BYTE *)v20 + 54) = 0;
          v31 = (int)v22;
          *((_BYTE *)v20 + 53) = (int)v22;
        }
        while ( v9 < v30 );
      }
    }
  }
}
