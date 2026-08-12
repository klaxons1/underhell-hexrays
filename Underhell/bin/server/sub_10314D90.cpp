void __thiscall sub_10314D90(int *this, float *a2, float *a3)
{
  int v3; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  bool v8; // c0
  double v9; // st7
  double v10; // st7
  bool v11; // c0
  bool v12; // c3
  double v13; // st7
  int v15; // eax
  float *v16; // eax
  float *v17; // eax
  float v18; // ecx
  void (__thiscall *v19)(int *, _DWORD *); // edx
  double v20; // st7
  int v22; // eax
  float *v23; // eax
  void (__thiscall *v24)(int *, float *); // edx
  int v25; // ebx
  int v26; // ebx
  int v27; // eax
  float v28; // ecx
  int i; // ebx
  float v30; // ecx
  float v31; // eax
  int v32; // edx
  void (__thiscall *v33)(int *, float *); // edx
  double v34; // st7
  float v35; // [esp+8h] [ebp-100h]
  float v36; // [esp+Ch] [ebp-FCh]
  float v37; // [esp+14h] [ebp-F4h]
  float v38; // [esp+14h] [ebp-F4h]
  float v39; // [esp+14h] [ebp-F4h]
  _BYTE v40[12]; // [esp+24h] [ebp-E4h] BYREF
  float v41[12]; // [esp+30h] [ebp-D8h] BYREF
  int v42; // [esp+60h] [ebp-A8h]
  int v43; // [esp+68h] [ebp-A0h]
  int v44; // [esp+6Ch] [ebp-9Ch]
  int v45; // [esp+70h] [ebp-98h]
  float v46; // [esp+74h] [ebp-94h]
  int v47; // [esp+78h] [ebp-90h]
  int v48; // [esp+7Ch] [ebp-8Ch]
  char v49; // [esp+80h] [ebp-88h]
  __int16 v50; // [esp+84h] [ebp-84h]
  _DWORD v51[6]; // [esp+88h] [ebp-80h] BYREF
  float v52[14]; // [esp+A0h] [ebp-68h] BYREF
  char v53; // [esp+D8h] [ebp-30h]
  __int16 v54; // [esp+DCh] [ebp-2Ch]
  float v55; // [esp+E0h] [ebp-28h] BYREF
  float v56; // [esp+E4h] [ebp-24h]
  float v57; // [esp+E8h] [ebp-20h]
  float v58; // [esp+ECh] [ebp-1Ch] BYREF
  float v59; // [esp+F0h] [ebp-18h]
  float v60; // [esp+F4h] [ebp-14h]
  int v61; // [esp+F8h] [ebp-10h]
  int v62; // [esp+FCh] [ebp-Ch] BYREF
  float v63; // [esp+100h] [ebp-8h]
  float v64; // [esp+104h] [ebp-4h]
  int v65; // [esp+110h] [ebp+8h]
  int v66; // [esp+110h] [ebp+8h]
  float v67; // [esp+114h] [ebp+Ch]

  v3 = *(_DWORD *)(dword_106E3584 + 48);
  (*(void (__thiscall **)(int *))(*this + 1116))(this);
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    v5 = (*(int (__thiscall **)(int *))(*this + 368))(this);
    if ( v5 )
    {
      v6 = (*(int (__thiscall **)(int *))(*this + 368))(this);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6) )
      {
        v7 = (*(int (__thiscall **)(int *))(*this + 368))(this);
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1096))(v7);
      }
      else
      {
        v5 = 0;
      }
    }
    (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v5 + 540))(v5, &v58, 0);
    v37 = v59 * v59 + v58 * v58 + v60 * v60;
    v8 = off_10689708(v37) > 400.0;
    v9 = 400.0;
    if ( !v8 )
    {
      v38 = v59 * v59 + v58 * v58 + v60 * v60;
      v10 = off_10689708(v38);
      v11 = v10 > 0.0;
      v12 = 0.0 == v10;
      v9 = 0.0;
      if ( v11 || v12 )
      {
        v39 = v59 * v59 + v58 * v58 + v60 * v60;
        v9 = off_10689708(v39);
      }
    }
    v13 = v9 * 0.94999999 * 0.0024999999 + 0.050000001;
    v67 = v13;
    if ( v3 > 0 )
    {
      v65 = v3;
      while ( 1 )
      {
        if ( v13 > 0.1 )
        {
          v36 = 120.0 * v13;
          v35 = v13 * 36.0;
          v17 = (float *)(*(int (__thiscall **)(int *))(*this + 368))(this);
          sub_103149E0(v17, v35, v36, a2, (float *)&v62);
        }
        else
        {
          v15 = (*(int (__thiscall **)(int *))(*this + 368))(this);
          v16 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v15 + 504))(v15, v40);
          *(float *)&v62 = *v16 - *a2;
          v63 = v16[1] - a2[1];
          v64 = v16[2] - a2[2];
          v61 = sub_10219A30();
          v55 = (double)v61 * 0.000030518509 * 80.0 - 40.0;
          v61 = sub_10219A30();
          v56 = (double)v61 * 0.000030518509 * 80.0 - 40.0;
          v61 = sub_10219A30();
          *(float *)&v62 = v55 + *(float *)&v62;
          v63 = v56 + v63;
          v64 = (double)v61 * 0.000030518509 * 80.0 - 40.0 + v64;
          off_10689714();
        }
        v18 = *((float *)this + 1017);
        *(float *)&v51[1] = *a2;
        v19 = *(void (__thiscall **)(int *, _DWORD *))(*this + 432);
        *(float *)&v51[2] = a2[1];
        v20 = a2[2];
        memset(&v52[8], 0, 12);
        *(float *)&v51[3] = v20;
        v52[12] = 0.0;
        v51[4] = v62;
        v52[13] = 0.0;
        *(float *)&v51[5] = v63;
        v54 = 0;
        v52[0] = v64;
        v52[5] = v18;
        v52[1] = flt_106F1CA8;
        v52[2] = flt_106F1CAC;
        v51[0] = 1;
        v53 = 1;
        v52[3] = flt_106F1CB0;
        LODWORD(v52[6]) = 1;
        v52[4] = 16384.0;
        v52[11] = 1.0;
        v19(this, v51);
        if ( !--v65 )
          break;
        v13 = v67;
      }
    }
  }
  else
  {
    if ( this[1027] < this[1028] )
    {
      v22 = (*(int (__thiscall **)(int *))(*this + 368))(this);
      v23 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v22 + 504))(v22, v40);
      *(float *)&v62 = *v23 - *a2;
      v63 = v23[1] - a2[1];
      v64 = v23[2] - a2[2];
      sub_1001EF40(&v55, -5.0, 5.0);
      *(float *)&v62 = v55 + *(float *)&v62;
      v63 = v56 + v63;
      v64 = v57 + v64;
      off_10689714();
      sub_10312E60(v41, 1, a2, (float *)&v62, &flt_106F1CA8, 16384.0, this[1017], 1);
      v24 = *(void (__thiscall **)(int *, float *))(*this + 432);
      v42 = 1;
      v24(this, v41);
      --v3;
    }
    v61 = v3 - (v3 >> 1);
    if ( v3 >> 1 > 0 )
    {
      v25 = v3 >> 1;
      do
      {
        sub_10314B80((int)this, a2, a3);
        --v25;
      }
      while ( v25 );
    }
    v26 = 0;
    v66 = sub_103144D0(this, 16, (int)v52);
    if ( v66 > 0 )
    {
      do
      {
        v27 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, v66 - 1);
        v28 = v52[v26];
        v52[v26++] = v52[v27];
        v52[v27] = v28;
      }
      while ( v26 < v66 );
    }
    for ( i = v61 - 1; i >= 0; --i )
    {
      if ( v66 <= i )
      {
        sub_10314B80((int)this, a2, a3);
      }
      else
      {
        v55 = 0.75;
        v56 = 0.75;
        v57 = 0.75;
        v30 = v52[i];
        v58 = 0.25;
        v59 = 0.25;
        v60 = 0.25;
        sub_10111860(LODWORD(v30) + 320, &v58, &v55, (float *)&v62);
        *(float *)&v62 = *(float *)&v62 - *a2;
        v63 = v63 - a2[1];
        v64 = v64 - a2[2];
        off_10689714();
        v31 = *((float *)this + 1017);
        v32 = *this;
        v41[1] = *a2;
        v33 = *(void (__thiscall **)(int *, float *))(v32 + 432);
        v34 = a2[1];
        v41[11] = v31;
        v41[2] = v34;
        v41[3] = a2[2];
        v43 = 0;
        v44 = 0;
        v41[4] = *(float *)&v62;
        v47 = 0;
        v45 = 0;
        v41[5] = v63;
        v48 = 0;
        v50 = 0;
        v41[6] = v64;
        LODWORD(v41[0]) = 1;
        v41[7] = flt_106F1CA8;
        v49 = 1;
        v42 = 1;
        v41[8] = flt_106F1CAC;
        v41[9] = flt_106F1CB0;
        v41[10] = 16384.0;
        v46 = 1.0;
        v33(this, v41);
      }
    }
  }
}
