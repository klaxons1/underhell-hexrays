void __thiscall sub_100527A0(float *this)
{
  int v1; // ebx
  int (__thiscall *v3)(void *); // edx
  float *v4; // edi
  float *v5; // eax
  double v6; // st6
  int (__thiscall *v7)(void *); // edx
  double v8; // rt0
  float *v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // eax
  float *v13; // edi
  double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // st6
  double v18; // st5
  float v19[3]; // [esp+8h] [ebp-30h] BYREF
  float v20; // [esp+14h] [ebp-24h]
  float v21; // [esp+18h] [ebp-20h]
  float v22; // [esp+1Ch] [ebp-1Ch]
  float v23; // [esp+20h] [ebp-18h]
  float v24; // [esp+24h] [ebp-14h]
  float v25; // [esp+28h] [ebp-10h]
  int v26; // [esp+2Ch] [ebp-Ch]
  float v27; // [esp+30h] [ebp-8h]
  float v28; // [esp+34h] [ebp-4h]

  v1 = 0;
  if ( dword_103DAFA8 > 0 )
  {
    while ( 1 )
    {
      v27 = COERCE_FLOAT(sub_10115FB0());
      v23 = (double)SLODWORD(v27) * 0.000030518509;
      v27 = COERCE_FLOAT(sub_10115FB0());
      v24 = (double)SLODWORD(v27) * 0.000030518509;
      v27 = COERCE_FLOAT(sub_10115FB0());
      v3 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 260);
      v25 = (double)SLODWORD(v27) * 0.000030518509;
      v4 = (float *)v3(this);
      v5 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 264))(this);
      v6 = v5[1] - v4[1];
      v7 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 260);
      v8 = v5[2] - v4[2];
      v20 = (*v5 - *v4) * v23;
      v21 = v6 * v24;
      v22 = v8 * v25;
      v9 = (float *)v7(this);
      v10 = *(_DWORD *)this;
      v19[0] = v20 + *v9;
      v19[1] = v9[1] + v21;
      v19[2] = v9[2] + v22;
      v11 = *(_DWORD *)dword_104131A0;
      v12 = (*(int (__thiscall **)(float *, float *))(v10 + 12))(this, v19);
      if ( ((*(int (__thiscall **)(int, int))(v11 + 4))(dword_104131A0, v12) & 1) != 0 )
        break;
      if ( ++v1 >= dword_103DAFA8 )
        return;
    }
    v13 = (float *)sub_100F2B60(10, *((_DWORD *)this + 372), v19);
    if ( v13 )
    {
      v28 = this[302];
      v14 = (double)-LODWORD(v28);
      v27 = v14;
      v28 = (double)SLODWORD(v28) - v14;
      v26 = sub_10115FB0();
      v20 = (double)v26 * 0.000030518509 * v28 + v27;
      v26 = sub_10115FB0();
      v21 = (double)v26 * 0.000030518509 * v28 + v27;
      v26 = sub_10115FB0();
      v15 = (double)v26 * 0.000030518509 * v28 + v27;
      v13[6] = v20;
      v13[7] = v21;
      v13[8] = v15;
      v13[8] = v13[8] - this[306];
      v13[9] = 0.0;
      v26 = sub_10115FB0();
      v13[10] = (double)*((int *)this + 303)
              + (double)v26 * ((double)*((int *)this + 304) - (double)*((int *)this + 303)) * 0.000030518509;
      if ( ((_BYTE)this[307] & 2) != 0 )
      {
        v26 = sub_10115FB0();
        v16 = (double)v26;
        v17 = this[300] * 0.000099999997;
        v18 = 0.000099999997 * this[301];
      }
      else
      {
        v26 = sub_10115FB0();
        v16 = (double)v26;
        v17 = this[300];
        v18 = this[301];
      }
      v13[11] = v17 + v16 * (v18 - v17) * 0.000030518509;
      v13[12] = this[298];
    }
  }
}
