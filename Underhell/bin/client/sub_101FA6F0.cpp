void __thiscall sub_101FA6F0(__m128 *this, float a2)
{
  int v3; // eax
  __int16 v4; // fps
  double v5; // st7
  bool v6; // c0
  char v7; // c2
  bool v8; // c3
  bool v9; // c0
  char v10; // c2
  bool v11; // c3
  __m128 v12; // xmm0
  __int32 v13; // ecx
  double v14; // st6
  double v15; // st5
  double v16; // st4
  __int32 v17; // edx
  double v18; // st7
  double v19; // st6
  double v20; // st5
  double v21; // rtt
  double v22; // rt0
  double v23; // st5
  double v24; // st7
  __int32 v25; // eax
  __int32 v26; // ecx
  double v27; // st7
  __int32 v28; // ecx
  _DWORD *i; // edi
  __int32 v30; // ecx
  bool v31; // sf
  float *v32; // eax
  double v33; // st7
  double v34; // rt2
  __int32 v35; // eax
  double v36; // rtt
  double v37; // st6
  __m128 v38; // xmm0
  int v39; // ebx
  double v40; // st7
  float *v41; // edi
  double v42; // st7
  int v43; // edi
  int v44; // ecx
  long double v45; // st7
  int v46; // ebx
  float *v47; // edi
  double v48; // st7
  int v49; // eax
  __int32 v50; // ecx
  __int32 v51; // eax
  int v52; // ebx
  bool v53; // zf
  int v54; // eax
  int v55; // edi
  long double v56; // st7
  double v57; // st7
  double v58; // st7
  int v59; // edi
  float v60; // [esp+10h] [ebp-38h]
  float v61; // [esp+14h] [ebp-34h]
  float v62; // [esp+14h] [ebp-34h]
  char v63; // [esp+2Bh] [ebp-1Dh]
  float v64; // [esp+2Ch] [ebp-1Ch]
  int v65; // [esp+30h] [ebp-18h]
  int v66; // [esp+30h] [ebp-18h]
  int v67; // [esp+30h] [ebp-18h]
  float v68; // [esp+34h] [ebp-14h]
  int v69; // [esp+38h] [ebp-10h] BYREF
  float v70; // [esp+3Ch] [ebp-Ch]
  float v71; // [esp+40h] [ebp-8h]
  float v72; // [esp+44h] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "CParticleCollection::Simulate", 0, "Particle Simulation", 0, 4);
  if ( a2 >= 0.0 && this[4].m128_i32[0] )
  {
    v5 = a2;
    v6 = this[2].m128_f32[1] > 0.0;
    v7 = 0;
    v8 = 0.0 == this[2].m128_f32[1];
    LOWORD(v3) = v4;
    if ( this[2].m128_f32[1] >= 0.0 )
    {
      if ( (this[412].m128_i8[0] & 1) != 0 )
      {
        sub_101FA200(v3, (int)this);
        v5 = a2;
        this[412].m128_i32[0] &= ~1u;
      }
      if ( v5 >= 1.0e-22 )
      {
        v72 = Plat_FloatTime();
        v63 = 0;
        if ( !this[416].m128_i32[3] )
        {
          sub_101F8B20((int)this);
          v63 = 1;
        }
        v13 = this[4].m128_i32[0];
        v14 = a2;
        v15 = 0.1;
        v68 = 0.1;
        v16 = 0.0;
        if ( *(float *)(v13 + 496) > 0.0 )
        {
          v68 = *(float *)(v13 + 496);
          v16 = 0.0;
          v15 = v68;
        }
        if ( v16 == *(float *)(v13 + 500) || (v17 = this[412].m128_i32[2], v17 > *(_DWORD *)(v13 + 508)) )
        {
          v18 = v16;
        }
        else
        {
          v18 = v16;
          if ( a2 + this[2].m128_f32[1] > *(float *)(v13 + 500) )
          {
            v19 = v15;
            v20 = *(float *)(v13 + 500) - this[2].m128_f32[1];
            if ( v20 < *(float *)(v13 + 504) )
              v20 = *(float *)(v13 + 504);
            v21 = v20;
            v15 = v19;
            v14 = v21;
          }
          this[412].m128_i32[2] = v17 + 1;
        }
        if ( 10.0 * v15 <= v14 )
          v14 = 10.0 * v15;
        v22 = v15;
        v23 = v18;
        v24 = v22;
        if ( v23 < v14 )
        {
          while ( 1 )
          {
            if ( v14 >= v24 )
            {
              v34 = v14;
              v14 = v24;
              v33 = v34;
            }
            else
            {
              v33 = v14;
            }
            v35 = this[4].m128_i32[0];
            v36 = v14;
            v37 = v33 - v14;
            v38 = 0;
            v39 = 0;
            v64 = v37;
            this[414].m128_i32[1] = 0;
            v40 = v37;
            this[2].m128_f32[3] = v36;
            this[2].m128_f32[1] = v36 + this[2].m128_f32[1];
            v38.m128_f32[0] = this[2].m128_f32[1];
            this[1] = _mm_shuffle_ps(v38, v38, 0);
            v65 = *(_DWORD *)(v35 + 580);
            if ( v65 > 0 )
            {
              do
              {
                v41 = *(float **)(*(_DWORD *)(this[4].m128_i32[0] + 568) + 4 * v39);
                if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v41 + 108))(v41)
                  && sub_101F7E80(this->m128_f32, v41, (float *)&v69) )
                {
                  v70 = Plat_FloatTime();
                  (*(void (__thiscall **)(float *, __m128 *, int, __int32))(*(_DWORD *)v41 + 28))(
                    v41,
                    this,
                    v69,
                    this[373].m128_i32[2] + *(_DWORD *)(*(_DWORD *)(this[4].m128_i32[0] + 708) + 4 * v39));
                  v42 = Plat_FloatTime() - v70;
                  v43 = *((_DWORD *)v41 + 6);
                  *(float *)(v43 + 12) = v42 + *(float *)(v43 + 12);
                  if ( v42 < *(float *)(v43 + 4) )
                    v42 = *(float *)(v43 + 4);
                  *(float *)(v43 + 4) = v42;
                  if ( this[416].m128_i32[2] )
                    sub_101F8BB0(this);
                  this[414].m128_i32[1] += 17;
                }
                ++v39;
              }
              while ( v39 < v65 );
              v40 = v64;
            }
            v44 = 0;
            v70 = *(float *)(this[4].m128_i32[0] + 640);
            v66 = 0;
            if ( SLODWORD(v70) > 0 )
            {
              do
              {
                v45 = this[2].m128_f32[1];
                v46 = this[2].m128_i32[2];
                v47 = *(float **)(4 * v44 + *(_DWORD *)(this[4].m128_i32[0] + 628));
                if ( v47[5] > 0.0 )
                  v45 = fmod(1.0 / v47[5] * this[2].m128_f32[1], 1.0);
                v61 = v45;
                v48 = sub_101F7DA0(v47[1], v47[2], v47[3], v47[4], v61);
                if ( v48 > 0.0 )
                {
                  v60 = v48;
                  v49 = (*(int (__thiscall **)(float *, __m128 *, _DWORD, __int32))(*(_DWORD *)v47 + 52))(
                          v47,
                          this,
                          LODWORD(v60),
                          *(_DWORD *)(4 * v66 + *(_DWORD *)(this[4].m128_i32[0] + 768)) + this[373].m128_i32[2]);
                  v50 = this[2].m128_i32[2];
                  if ( v46 != v50 )
                    sub_101F9E60((int)this, v46, v50 - v46, v49);
                }
                v44 = ++v66;
              }
              while ( v66 < SLODWORD(v70) );
              v40 = v64;
            }
            v51 = this[4].m128_i32[0];
            v52 = 0;
            v53 = this[2].m128_i32[2] == 0;
            this[414].m128_i32[1] = 0;
            v54 = *(_DWORD *)(v51 + 580);
            v67 = v54;
            if ( !v53 && v54 > 0 )
            {
              while ( 1 )
              {
                v55 = *(_DWORD *)(*(_DWORD *)(this[4].m128_i32[0] + 568) + 4 * v52);
                if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v55 + 108))(v55) )
                {
                  v56 = this[2].m128_f32[1];
                  if ( *(float *)(v55 + 20) > 0.0 )
                    v56 = fmod(1.0 / *(float *)(v55 + 20) * this[2].m128_f32[1], 1.0);
                  v62 = v56;
                  v57 = sub_101F7DA0(
                          *(float *)(v55 + 4),
                          *(float *)(v55 + 8),
                          *(float *)(v55 + 12),
                          *(float *)(v55 + 16),
                          v62);
                  v70 = v57;
                  if ( v57 > 0.0 )
                  {
                    v71 = Plat_FloatTime();
                    (*(void (__thiscall **)(int, __m128 *, float, __int32))(*(_DWORD *)v55 + 28))(
                      v55,
                      this,
                      COERCE_FLOAT(LODWORD(v70)),
                      this[373].m128_i32[2] + *(_DWORD *)(*(_DWORD *)(this[4].m128_i32[0] + 708) + 4 * v52));
                    v58 = Plat_FloatTime() - v71;
                    v59 = *(_DWORD *)(v55 + 24);
                    *(float *)(v59 + 12) = *(float *)(v59 + 12) + v58;
                    if ( v58 < *(float *)(v59 + 4) )
                      v58 = *(float *)(v59 + 4);
                    *(float *)(v59 + 4) = v58;
                    if ( this[416].m128_i32[2] )
                    {
                      sub_101F8BB0(this);
                      if ( !this[2].m128_i32[2] )
                      {
LABEL_72:
                        v40 = v64;
                        break;
                      }
                    }
                    this[414].m128_i32[1] += 17;
                  }
                }
                if ( ++v52 >= v67 )
                  goto LABEL_72;
              }
            }
            if ( v40 <= 0.0 )
              break;
            v14 = v40;
            v24 = v68;
          }
        }
        v25 = this[4].m128_i32[0];
        v26 = *(_DWORD *)(v25 + 840);
        if ( v26 <= this[2].m128_i32[2] )
          v26 = this[2].m128_i32[2];
        *(_DWORD *)(v25 + 840) = v26;
        v27 = Plat_FloatTime() - v72;
        *(float *)(this[4].m128_i32[0] + 832) = *(float *)(this[4].m128_i32[0] + 832) + v27;
        v28 = this[4].m128_i32[0];
        if ( v27 < *(float *)(v28 + 836) )
          v27 = *(float *)(v28 + 836);
        *(float *)(v28 + 836) = v27;
        for ( i = (_DWORD *)this[375].m128_i32[2]; i; i = (_DWORD *)i[1495] )
        {
          i[1666] = 0;
          i[1667] = this[416].m128_i32[3];
          sub_101FA6F0(a2);
          i[1667] = 0;
        }
        if ( v63 )
          sub_101F8AE0((int)this);
        v30 = 0;
        v31 = this[377].m128_i32[2] < 0;
        this[3].m128_f32[0] = a2;
        if ( !v31 )
        {
          v32 = &this[6].m128_f32[2];
          do
          {
            ++v30;
            *(v32 - 1) = *(v32 - 4);
            v32 += 17;
            *(v32 - 17) = *(v32 - 20);
            *(v32 - 16) = *(v32 - 19);
          }
          while ( v30 <= this[377].m128_i32[2] );
        }
        this[412].m128_i32[0] |= 2u;
        sub_101FA2F0(this);
      }
    }
    else
    {
      v9 = v5 < 1.0e-22;
      v10 = 0;
      v11 = v5 == 1.0e-22;
      LOWORD(v3) = v4;
      if ( v5 >= 1.0e-22 )
      {
        v12 = 0;
        this[2].m128_f32[1] = this[2].m128_f32[1] + v5;
        v12.m128_f32[0] = this[2].m128_f32[1];
        this[1] = _mm_shuffle_ps(v12, v12, 0);
        sub_101F7F00(v3, (int)this, a2);
      }
    }
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
