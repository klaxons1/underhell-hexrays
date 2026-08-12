void __thiscall sub_100D7D80(float *this, char a2)
{
  int v3; // esi
  double v4; // st6
  float *v5; // eax
  float *v6; // eax
  int v7; // edx
  float *v8; // eax
  float *v9; // ebx
  float *v10; // eax
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // st2
  double v15; // rtt
  double v16; // st3
  double v17; // st5
  double v18; // st7
  float *v19; // eax
  int v20; // esi
  float *v21; // ebx
  double v22; // st7
  double v23; // st7
  float v24; // [esp+Ch] [ebp-108h]
  int v25; // [esp+10h] [ebp-104h]
  int v26; // [esp+14h] [ebp-100h]
  float v27; // [esp+18h] [ebp-FCh]
  _BYTE v28[12]; // [esp+28h] [ebp-ECh] BYREF
  float v29; // [esp+34h] [ebp-E0h]
  float v30; // [esp+38h] [ebp-DCh]
  float v31; // [esp+3Ch] [ebp-D8h]
  _BYTE v32[12]; // [esp+7Ch] [ebp-98h] BYREF
  _BYTE v33[12]; // [esp+88h] [ebp-8Ch] BYREF
  _BYTE v34[12]; // [esp+94h] [ebp-80h] BYREF
  float v35[3]; // [esp+A0h] [ebp-74h] BYREF
  float v36[3]; // [esp+ACh] [ebp-68h] BYREF
  int v37[3]; // [esp+B8h] [ebp-5Ch] BYREF
  float v38; // [esp+C4h] [ebp-50h] BYREF
  float v39; // [esp+C8h] [ebp-4Ch]
  float v40; // [esp+CCh] [ebp-48h]
  float v41; // [esp+D0h] [ebp-44h] BYREF
  float v42; // [esp+D4h] [ebp-40h]
  float v43; // [esp+D8h] [ebp-3Ch]
  float v44[3]; // [esp+DCh] [ebp-38h] BYREF
  float v45; // [esp+E8h] [ebp-2Ch] BYREF
  float v46; // [esp+ECh] [ebp-28h]
  float v47; // [esp+F0h] [ebp-24h]
  float v48; // [esp+F4h] [ebp-20h] BYREF
  float v49; // [esp+F8h] [ebp-1Ch]
  float v50; // [esp+FCh] [ebp-18h]
  int v51; // [esp+100h] [ebp-14h] BYREF
  int v52; // [esp+104h] [ebp-10h] BYREF
  float v53; // [esp+108h] [ebp-Ch] BYREF
  float v54; // [esp+10Ch] [ebp-8h]
  float v55; // [esp+110h] [ebp-4h]
  int savedregs; // [esp+114h] [ebp+0h] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 56))(off_103ED0FC)
    || (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 60))(off_103ED0FC) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 8))(this) )
    {
      v3 = sub_100422D0();
      if ( v3 )
      {
        (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1041315C + 20))(dword_1041315C, &v52, &v51);
        v4 = this[8] + 1.0;
        v52 = (int)((this[7] + 1.0) * 0.5 * (double)v52);
        v51 = (int)(0.5 * v4 * (double)v51);
        v26 = sub_101356E0();
        v25 = sub_101356D0();
        v24 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v3 + 952))(v3);
        sub_10070AD0(v52, v51, v24, v25, v26, (float *)v37);
        v53 = *(float *)v37 * 56755.84;
        v54 = *(float *)&v37[1] * 56755.84;
        v55 = 56755.84 * *(float *)&v37[2];
        v5 = (float *)sub_101356D0();
        v44[0] = v53 + *v5;
        v44[1] = v5[1] + v54;
        v44[2] = v5[2] + v55;
        v6 = (float *)sub_101356D0();
        sub_1000FCE0((int)&savedregs, v3, v6, v44, 1174421507, v3, 0, (int)v28);
        v53 = v29;
        v7 = *(_DWORD *)v3;
        v54 = v30;
        v55 = v31;
        v8 = (float *)(*(int (__thiscall **)(int, float *))(v7 + 532))(v3, v44);
        v41 = v53 - *v8;
        v42 = v54 - v8[1];
        v43 = v55 - v8[2];
        sub_101EE040(this + 1, &v38, 0, 0);
        v9 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v3 + 532))(v3, v44);
        v10 = (float *)sub_101356D0();
        v11 = *v10 - *v9;
        v45 = v11;
        v12 = v10[1] - v9[1];
        v46 = v12;
        v13 = v10[2] - v9[2];
        v14 = v11 * v38 + v39 * v12 + v40 * v13;
        v15 = v39 * v14;
        v16 = v11 - v38 * v14;
        v45 = v16;
        v46 = v12 - v15;
        v17 = v13 - v14 * v40;
        v47 = v17;
        v27 = v42 * v42 + v41 * v41 + v43 * v43 - (v16 * v16 + (v12 - v15) * (v12 - v15) + v17 * v17);
        v18 = off_103EDFE0(v27);
        v36[0] = v38 * v18 + v45;
        v36[1] = v39 * v18 + v46;
        v36[2] = v18 * v40 + v47;
        sub_101EE190(v36, v32);
        sub_101EE190(&v41, v34);
        sub_101F1340(v32, v34, v33);
        sub_101F0A40(&v45, v33, v35);
        v48 = v53 - v35[0];
        v49 = v54 - v35[1];
        v50 = v55 - v35[2];
        v19 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v3 + 532))(v3, v44);
        v48 = v48 - *v19;
        v49 = v49 - v19[1];
        v50 = v50 - v19[2];
        if ( a2 )
        {
          sub_101EE190(&v48, v44);
          v20 = 0;
          v21 = this + 4;
          do
          {
            v22 = v44[v20];
            sub_101F0610(v44[v20], *(v21 - 3));
            *v21 = v22;
            ++v20;
            ++v21;
          }
          while ( v20 < 2 );
          this[6] = 0.0;
          if ( this[5] <= 180.0 )
          {
            if ( this[5] < -180.0 )
              this[5] = -180.0;
          }
          else
          {
            this[5] = 180.0;
          }
          if ( sub_1000E2E0(this + 4) )
          {
            v23 = -this[8];
            this[10] = -this[7];
            this[11] = v23;
          }
          else
          {
            this[4] = 0.0;
            this[5] = 0.0;
            this[6] = 0.0;
          }
        }
        else
        {
          this[4] = 0.0;
          this[5] = 0.0;
          this[6] = 0.0;
          this[10] = 0.0;
          this[11] = 0.0;
          sub_101EE190(&v48, &v53);
          if ( sub_1000E2E0(&v53) )
          {
            this[1] = v53;
            this[2] = v54;
            this[3] = v55;
            if ( this[1] <= 180.0 )
            {
              if ( this[1] < -180.0 )
                this[1] = this[1] + 360.0;
              this[7] = 0.0;
              this[8] = 0.0;
            }
            else
            {
              this[1] = this[1] - 360.0;
              this[7] = 0.0;
              this[8] = 0.0;
            }
          }
        }
      }
    }
  }
}
