void __userpurge sub_10328BE0(float *a1@<ecx>, int a2@<ebx>, int a3@<edi>, float a4, float *a5)
{
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  double v11; // st7
  double v12; // st6
  double v13; // st7
  double v14; // st5
  double v15; // rt1
  double v16; // st5
  double v17; // st7
  double v18; // st7
  double v19; // st7
  double v20; // st6
  double v21; // st7
  double v22; // st7
  float v23; // [esp+10h] [ebp-58h]
  float v24; // [esp+14h] [ebp-54h]
  float v25; // [esp+18h] [ebp-50h]
  _BYTE v26[12]; // [esp+20h] [ebp-48h] BYREF
  _BYTE v27[12]; // [esp+2Ch] [ebp-3Ch] BYREF
  _BYTE v28[12]; // [esp+38h] [ebp-30h] BYREF
  float v29[3]; // [esp+44h] [ebp-24h] BYREF
  float v30; // [esp+50h] [ebp-18h]
  float v31; // [esp+54h] [ebp-14h]
  float v32; // [esp+58h] [ebp-10h]
  int v33; // [esp+5Ch] [ebp-Ch] BYREF
  float v34; // [esp+60h] [ebp-8h]
  float v35; // [esp+64h] [ebp-4h]
  float v36; // [esp+70h] [ebp+8h]

  if ( *(float *)(dword_106B31C8 + 12) >= (double)a1[949] )
  {
    v6 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)a1 + 368))(a1, a2);
    v7 = *(_DWORD *)a1;
    if ( v6 )
    {
      v8 = (*(int (__thiscall **)(float *, int))(v7 + 368))(a1, a3);
      v9 = *(_DWORD *)a1;
      v10 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 504))(v8, v28);
      (*(void (__thiscall **)(float *, _DWORD, int))(v9 + 2212))(a1, LODWORD(a4), v10);
    }
    else
    {
      (*(void (__thiscall **)(float *, _DWORD))(v7 + 2212))(a1, LODWORD(a4));
    }
    v30 = a1[906];
    v31 = a1[907];
    v32 = a1[908];
    off_10689714();
    if ( ((_DWORD)a1[63] & 0x800) != 0 )
      sub_100DAE60((int)a1);
    *(float *)&v33 = *a5 - a1[145];
    v34 = a5[1] - a1[146];
    v35 = a5[2] - a1[147];
    v11 = off_10689714();
    if ( v31 * v34 + v30 * *(float *)&v33 + v35 * v32 <= 0.25 )
      v12 = 128.0;
    else
      v12 = 250.0;
    v13 = v11 / a4;
    v14 = v12;
    if ( v12 > v13 )
      v14 = v13;
    v15 = v14;
    v16 = v13;
    v17 = v15;
    if ( v16 >= 400.0 )
      v16 = (float)400.0;
    v24 = v16;
    v23 = v17;
    sub_10328520(a1, a4, (float *)&v33, v23, v24, 0.15000001);
    (*(void (__thiscall **)(float *, _BYTE *, float *, _BYTE *))(*(_DWORD *)a1 + 528))(a1, v26, v29, v27);
    v18 = *(float *)&v33;
    a1[909] = *(float *)&v33;
    a1[911] = (v18 * v29[0] + v29[1] * v34 + v29[2] * v35) * 120.0;
    a1[910] = 0.0;
    v25 = a1[908] * a1[908] + a1[906] * a1[906] + a1[907] * a1[907];
    v36 = off_10689708(v25);
    v19 = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)a1 + 2232))(a1);
    if ( v19 == 0.0 )
    {
      v20 = v19;
      v21 = 0.0;
      if ( v20 <= v36 )
        v21 = 1.0;
    }
    else
    {
      v22 = v36 / v19;
      v21 = 3.0 * (v22 * v22) - v22 * (v22 * v22 + v22 * v22);
      if ( v21 <= 1.0 )
      {
        if ( v21 < 0.0 )
          v21 = 0.0;
      }
      else
      {
        v21 = 1.0;
      }
    }
    a1[909] = a1[909] * v21;
    a1[910] = a1[910] * v21;
    a1[911] = v21 * a1[911];
  }
}
