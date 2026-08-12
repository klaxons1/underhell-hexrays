char __thiscall sub_100918D0(int *this, int a2, float a3)
{
  int v4; // ecx
  int (__thiscall *v5)(int); // edx
  float *v6; // eax
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  int v10; // ecx
  double v11; // st7
  int v12; // ebx
  _DWORD *v13; // edx
  int v14; // ecx
  _DWORD *v15; // edi
  double v16; // st7
  double v17; // st7
  int v18; // edx
  double v19; // st7
  double v20; // st6
  double v21; // st5
  double v22; // st4
  double v23; // rt0
  double v24; // st4
  double v25; // st5
  double v26; // st7
  long double v27; // st7
  double v28; // st6
  double v29; // st2
  long double v30; // st7
  double v31; // rt2
  long double v32; // st6
  long double v33; // rtt
  int v34; // ecx
  unsigned int v35; // eax
  _DWORD *v36; // edx
  int *v37; // ecx
  int v38; // ecx
  int v39; // ecx
  char result; // al
  float v41; // [esp+8h] [ebp-80h]
  float v42; // [esp+Ch] [ebp-7Ch]
  float v43; // [esp+Ch] [ebp-7Ch]
  float v44; // [esp+Ch] [ebp-7Ch]
  float v45; // [esp+10h] [ebp-78h]
  _DWORD v46[2]; // [esp+1Ch] [ebp-6Ch] BYREF
  float v47[4]; // [esp+24h] [ebp-64h] BYREF
  float v48; // [esp+34h] [ebp-54h]
  float v49; // [esp+38h] [ebp-50h]
  float v50; // [esp+40h] [ebp-48h] BYREF
  float v51; // [esp+44h] [ebp-44h]
  float v52; // [esp+48h] [ebp-40h]
  float v53; // [esp+4Ch] [ebp-3Ch] BYREF
  float v54; // [esp+50h] [ebp-38h]
  float v55; // [esp+54h] [ebp-34h]
  float v56; // [esp+58h] [ebp-30h]
  float v57; // [esp+5Ch] [ebp-2Ch]
  float v58; // [esp+60h] [ebp-28h]
  float v59; // [esp+64h] [ebp-24h] BYREF
  float v60; // [esp+68h] [ebp-20h]
  float v61; // [esp+6Ch] [ebp-1Ch]
  float v62; // [esp+70h] [ebp-18h]
  float i; // [esp+74h] [ebp-14h]
  int v64; // [esp+78h] [ebp-10h]
  float v65; // [esp+7Ch] [ebp-Ch]
  float v66; // [esp+80h] [ebp-8h]
  char v67; // [esp+87h] [ebp-1h]

  v4 = *this;
  v5 = *(int (__thiscall **)(int))(*(_DWORD *)v4 + 576);
  v67 = 0;
  v6 = (float *)v5(v4);
  v7 = *v6;
  v8 = v6[1];
  v9 = v6[2];
  v56 = v7;
  v10 = *this;
  v58 = v9;
  v57 = v8;
  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)(v10 + 320) + 60))(v10 + 320, &v50, &v53);
  v45 = (v50 - v53) * (v50 - v53) + (v51 - v54) * (v51 - v54);
  v11 = off_10689708(v45);
  v12 = 0;
  v64 = 0;
  for ( i = v11 * 0.5; v64 < this[17]; ++v64 )
  {
    v13 = (_DWORD *)(this[14] + v12 + 20);
    if ( *v13 == -1
      || off_1061BE18[4 * (*v13 & 0xFFF) + 2] != *v13 >> 12
      || !off_1061BE18[4 * (*v13 & 0xFFF) + 1]
      || (*v13 == -1 || off_1061BE18[4 * (*v13 & 0xFFF) + 2] != *v13 >> 12
        ? (v14 = 0)
        : (v14 = off_1061BE18[4 * (*v13 & 0xFFF) + 1]),
          v14 == -320) )
    {
      v17 = sub_100737D0(*(_DWORD *)(*this + 1676));
    }
    else
    {
      if ( *v13 == -1 || off_1061BE18[4 * (*v13 & 0xFFF) + 2] != *v13 >> 12 )
        v15 = 0;
      else
        v15 = (_DWORD *)off_1061BE18[4 * (*v13 & 0xFFF) + 1];
      if ( v15 == *(_DWORD **)(a2 + 52)
        && ((*(unsigned __int8 (__thiscall **)(_DWORD *))(*v15 + 284))(v15)
         || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v15 + 320))(v15)) )
      {
        goto LABEL_39;
      }
      (*(void (__thiscall **)(_DWORD *, float *, float *))(v15[80] + 60))(v15 + 80, &v50, &v53);
      v16 = sub_100737D0(*(_DWORD *)(*this + 1676));
      v17 = (v16 + v55 - v52) * 0.5;
    }
    v18 = this[14];
    if ( fabs(*(float *)(v18 + v12 + 8) - v58) <= v17 )
    {
      v19 = v56 - *(float *)(v18 + v12);
      v48 = v19;
      v20 = v57 - *(float *)(v18 + v12 + 4);
      v49 = v20;
      v21 = v20 * v20 + v19 * v19;
      v66 = v21;
      v22 = *(float *)(v18 + v12 + 12) + i;
      v65 = v22;
      v23 = v22;
      v24 = v21;
      v25 = v23;
      if ( v24 > 0.001 && (v25 + a3) * (v25 + a3) > v24 )
      {
        v59 = v19 * -1.0;
        v60 = -1.0 * v20;
        v61 = 0.0;
        v62 = off_10689714();
        v26 = v65 * v65;
        if ( *(float *)(a2 + 16) * v60 + *(float *)(a2 + 12) * v59 + *(float *)(a2 + 20) * v61 >= 0.0 )
        {
          if ( v66 <= v26 )
          {
            v27 = 210.0;
            v66 = 210.0;
            v28 = 1.0;
          }
          else
          {
            v42 = v66 - v26;
            v29 = off_10689708(v42);
            v30 = acos(
                    (v65 * v49 - v29 * v48) * (1.0 / v66) * v59
                  + 1.0 / v66 * (-(v49 * v29) - v48 * v65) * v60
                  + v61 * 0.0);
            v27 = v30 * 57.29578 + v30 * 57.29578;
            v66 = v27;
            v28 = 1.0 - (v62 - v65) / a3;
            if ( v28 > 0.75 )
            {
              v31 = v28;
              v32 = v27 + (v28 - 0.75) * (v27 * 0.5) * 4.0;
              v66 = v32;
              v33 = v32;
              v28 = v31;
              v27 = v33;
            }
          }
          goto LABEL_28;
        }
        if ( v26 >= v66 )
        {
          v27 = 210.0;
          v66 = 210.0;
          v28 = 1.0;
LABEL_28:
          v34 = this[14];
          v35 = *(_DWORD *)(v34 + v12 + 20);
          v36 = (_DWORD *)(v34 + v12 + 20);
          if ( v35 != -1 )
          {
            v37 = &off_1061BE18[4 * (*(_DWORD *)(v34 + v12 + 20) & 0xFFF) + 1];
            if ( v37[1] == v35 >> 12 )
            {
              if ( *v37 )
              {
                if ( *v36 == -1 || off_1061BE18[4 * (*v36 & 0xFFF) + 2] != *v36 >> 12 )
                  v38 = 0;
                else
                  v38 = off_1061BE18[4 * (*v36 & 0xFFF) + 1];
                v43 = v28;
                v28 = sub_10090930(this, v38, v43);
                v27 = v66;
              }
            }
          }
          v39 = *(_DWORD *)(this[14] + v12 + 16);
          v47[0] = 0.0;
          v47[1] = 0.0;
          v46[0] = v39;
          *(float *)&v46[1] = v28;
          v47[2] = NAN;
          v47[3] = 0.0;
          v44 = v27;
          v41 = sub_10265030(&v59);
          sub_100908B0(v47, v41, v44);
          sub_100911A0(this + 19, this[22], (int)v46);
          v67 = 1;
        }
      }
    }
LABEL_39:
    v12 += 24;
  }
  result = v67;
  this[17] = 0;
  return result;
}
