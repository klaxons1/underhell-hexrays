int __thiscall sub_10234EE0(float *this)
{
  int v2; // edi
  int v3; // ecx
  int v4; // edi
  float v5; // eax
  float v6; // edx
  float v7; // ecx
  float *v8; // ecx
  int v9; // eax
  float v10; // edx
  int v11; // eax
  int v12; // edi
  float *v13; // eax
  double v14; // st7
  int v15; // edx
  double v16; // st7
  char *v17; // eax
  int v18; // ebx
  float v19; // ecx
  int v20; // eax
  float v21; // ecx
  int v22; // edx
  int v23; // eax
  float *v24; // ecx
  double v25; // st7
  float v26; // edx
  double v27; // st7
  float v28; // edx
  double v29; // st7
  int v30; // edi
  int result; // eax
  int v32; // ebx
  int v33; // ecx
  int *v34; // ecx
  int v35; // ecx
  int *v36; // edi
  double v37; // st7
  float v38; // edx
  double v39; // st7
  float v40; // edx
  double v41; // st7
  int v42; // edx
  int (__thiscall *v43)(int *, float *); // edx
  int v44; // [esp+88h] [ebp-38h]
  float v45; // [esp+90h] [ebp-30h] BYREF
  float v46; // [esp+94h] [ebp-2Ch]
  float v47; // [esp+98h] [ebp-28h]
  float v48[3]; // [esp+9Ch] [ebp-24h] BYREF
  float v49; // [esp+A8h] [ebp-18h] BYREF
  float v50; // [esp+ACh] [ebp-14h]
  float v51; // [esp+B0h] [ebp-10h]
  float v52; // [esp+B4h] [ebp-Ch]
  float v53; // [esp+B8h] [ebp-8h]
  int v54; // [esp+BCh] [ebp-4h]

  v2 = *((_DWORD *)this + 8) + *(_DWORD *)(dword_106C478C + 48) / dword_1064A4DC;
  if ( (*(int (**)(void))(*(_DWORD *)this + 24))() >= v2 )
  {
    v3 = *((_DWORD *)this + 14);
    *((_DWORD *)this + 8) = v2;
    if ( v3 < dword_1064A4DC )
    {
      *(float *)&v4 = 0.0;
      *(float *)&v44 = 0.0;
      v54 = 1;
      if ( *(int *)(dword_106B31C8 + 20) >= 1 )
      {
        do
        {
          v5 = COERCE_FLOAT(sub_1025FB50(v54));
          v6 = v5;
          v52 = v5;
          if ( v5 != 0.0 && (*(_DWORD *)(LODWORD(v5) + 256) & 0x100) != 0 )
          {
            v7 = *(float *)&v4;
            v53 = *(float *)&v4;
            if ( v4 + 1 > 0 )
            {
              sub_102ABFC0(v4 + 1);
              v4 = v44;
              v7 = v53;
              v6 = v52;
            }
            v44 = ++v4;
            if ( v4 - LODWORD(v7) - 1 > 0 )
            {
              memcpy((void *)(4 * LODWORD(v7) + 4), (const void *)(4 * LODWORD(v7)), 4 * (v4 - LODWORD(v7) - 1));
              v7 = v53;
              v6 = v52;
            }
            v8 = (float *)(4 * LODWORD(v7));
            if ( v8 )
              *v8 = v6;
          }
          ++v54;
        }
        while ( v54 <= *(_DWORD *)(dword_106B31C8 + 20) );
        if ( v4 > 0 )
        {
          v9 = *((_DWORD *)this + 19);
          if ( v9 > 0 )
          {
            v10 = *(float *)(*((_DWORD *)this + 16)
                           + 4 * (*(int (__thiscall **)(float *, _DWORD, int))(*(_DWORD *)this + 16))(this, 0, v9 - 1));
            v11 = *(_DWORD *)this;
            v53 = v10;
            v12 = (*(int (__thiscall **)(float *, _DWORD, int))(v11 + 16))(this, 0, v4 - 1);
            v13 = (float *)(*(int (__thiscall **)(_DWORD, float *))(**(_DWORD **)(4 * v12) + 504))(
                             *(_DWORD *)(4 * v12),
                             &v45);
            v49 = *v13;
            v52 = 0.0;
            v50 = v13[1];
            v51 = v13[2] + 50.0;
            while ( 1 )
            {
              v14 = ((double (__thiscall *)(float *, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 20))(
                      this,
                      -2000.0,
                      2000.0);
              v15 = *(_DWORD *)this;
              v45 = v14;
              v16 = ((double (__thiscall *)(float *, _DWORD, _DWORD))*(_DWORD *)(v15 + 20))(this, -2000.0, 2000.0);
              v48[0] = v49 + v45;
              v48[1] = v16 + v50;
              v48[2] = v51;
              v17 = sub_10208BF0(SLODWORD(v53), &v49, v48, *(_DWORD *)(4 * v12), 0, "prop_physics_multiplayer");
              v18 = (int)v17;
              if ( v17 )
                break;
              ++LODWORD(v52);
              if ( SLODWORD(v52) >= 15 )
                goto LABEL_26;
            }
            v19 = *(float *)(*(int (__thiscall **)(char *))(*(_DWORD *)v17 + 8))(v17);
            v20 = *((_DWORD *)this + 12);
            v53 = v19;
            v52 = this[14];
            v21 = v52;
            if ( LODWORD(v52) + 1 > v20 )
            {
              sub_102ABFC0(LODWORD(v52) - v20 + 1);
              v21 = v52;
            }
            ++*((_DWORD *)this + 14);
            v22 = *((_DWORD *)this + 11);
            v23 = *((_DWORD *)this + 14) - LODWORD(v21) - 1;
            *((_DWORD *)this + 15) = v22;
            if ( v23 > 0 )
            {
              memcpy((void *)(v22 + 4 * LODWORD(v21) + 4), (const void *)(v22 + 4 * LODWORD(v21)), 4 * v23);
              v21 = v52;
            }
            v24 = (float *)(*((_DWORD *)this + 11) + 4 * LODWORD(v21));
            if ( v24 )
              *v24 = v53;
            v25 = ((double (__thiscall *)(float *, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 20))(
                    this,
                    -500.0,
                    500.0);
            v26 = *this;
            v52 = v25;
            v27 = ((double (__thiscall *)(float *, _DWORD, _DWORD))*(_DWORD *)(LODWORD(v26) + 20))(this, -500.0, 500.0);
            v28 = *this;
            v53 = v27;
            v29 = ((double (__thiscall *)(float *, _DWORD, _DWORD))*(_DWORD *)(LODWORD(v28) + 20))(this, -500.0, 500.0);
            v45 = v52;
            v46 = v53;
            v47 = v29;
            sub_100DD660(v18, &v45);
          }
        }
      }
    }
  }
LABEL_26:
  v30 = *((_DWORD *)this + 9) + *(_DWORD *)(dword_106C478C + 48) / 20;
  result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 24))(this);
  if ( result >= v30 )
  {
    v32 = 0;
    for ( *((_DWORD *)this + 9) = v30; v32 < *((_DWORD *)this + 14); ++v32 )
    {
      v33 = *((_DWORD *)this + 11);
      result = *(_DWORD *)(v33 + 4 * v32);
      if ( result != -1 )
      {
        v34 = &off_1061BE18[4 * (*(_DWORD *)(v33 + 4 * v32) & 0xFFF) + 1];
        result = (unsigned int)result >> 12;
        if ( v34[1] == result )
        {
          v35 = *v34;
          if ( v35 )
          {
            v36 = *(int **)(v35 + 424);
            if ( v36 )
            {
              (*(void (__thiscall **)(float *, _DWORD, _DWORD))(*(_DWORD *)this + 20))(this, -300000.0, 300000.0);
              (*(void (__thiscall **)(float *, _DWORD, _DWORD))(*(_DWORD *)this + 20))(this, -300000.0, 300000.0);
              (*(void (__thiscall **)(float *, _DWORD, _DWORD))(*(_DWORD *)this + 20))(this, 300000.0, 300000.0);
              v37 = ((double (__thiscall *)(float *, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 20))(
                      this,
                      -500000.0,
                      500000.0);
              v38 = *this;
              v52 = v37;
              v39 = ((double (__thiscall *)(float *, _DWORD, _DWORD))*(_DWORD *)(LODWORD(v38) + 20))(
                      this,
                      -500000.0,
                      500000.0);
              v40 = *this;
              v53 = v39;
              v41 = ((double (__thiscall *)(float *, _DWORD, _DWORD))*(_DWORD *)(LODWORD(v40) + 20))(
                      this,
                      0.0,
                      500000.0);
              v42 = *v36;
              v45 = v52;
              v43 = *(int (__thiscall **)(int *, float *))(v42 + 236);
              v46 = v53;
              v47 = v41;
              result = v43(v36, &v45);
            }
          }
        }
      }
    }
  }
  return result;
}
