// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_102B1140(
        __int16 *a1@<ecx>,
        float a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        float a6,
        float a7,
        float a8,
        float a9)
{
  double v9; // st6
  double v11; // st7
  float v12; // edx
  float v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  double v18; // st7
  float v20; // [esp+30h] [ebp-24h] BYREF
  float v21; // [esp+34h] [ebp-20h]
  float v22; // [esp+38h] [ebp-1Ch]
  float v23; // [esp+3Ch] [ebp-18h] BYREF
  float v24; // [esp+40h] [ebp-14h]
  float v25; // [esp+44h] [ebp-10h]
  float v26; // [esp+48h] [ebp-Ch] BYREF
  float v27; // [esp+4Ch] [ebp-8h]
  float v28; // [esp+50h] [ebp-4h]
  float v29; // [esp+68h] [ebp+14h]
  float v30; // [esp+6Ch] [ebp+18h]
  float v31; // [esp+6Ch] [ebp+18h]

  v9 = a8;
  if ( a8 > (double)a9 )
    v9 = a9;
  v30 = v9 / a9;
  sub_100F7AD0((float *)a5, 10.0);
  v11 = v30 * a7;
  v26 = -(v11 + 0.2);
  v27 = (v11 + 0.2) * -0.33333334;
  v28 = v11 * 0.125 + 0.1;
  if ( (*(int (__thiscall **)(int, int, int, int, int, float, float, float, float, float, float, float, float, float))(*(_DWORD *)dword_106B31E4 + 8))(
         dword_106B31E4,
         -1,
         1,
         a3,
         a4,
         COERCE_FLOAT(LODWORD(v20)),
         COERCE_FLOAT(LODWORD(v21)),
         COERCE_FLOAT(LODWORD(v22)),
         COERCE_FLOAT(LODWORD(v23)),
         COERCE_FLOAT(LODWORD(v24)),
         COERCE_FLOAT(LODWORD(v25)),
         COERCE_FLOAT(LODWORD(v26)),
         COERCE_FLOAT(LODWORD(v27)),
         COERCE_FLOAT(LODWORD(v28))) >= 0 )
    v27 = v27 * -1.0;
  if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -1, 1) >= 0 )
    v28 = v28 * -1.0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 1) )
  {
    v26 = v26 * a6;
    v27 = v27 * a6;
    v28 = a6 * v28;
  }
  v28 = a2;
  sub_1025F4E0(&v26, (float *)(a5 + 2304), &v20);
  v20 = v26 * 0.5;
  v21 = COERCE_FLOAT(&v20) * 0.5;
  v22 = 0.5 * v28;
  sub_100F7A60((float *)a5, &v20);
  v12 = *(float *)(a5 + 732);
  v13 = *(float *)(a5 + 736);
  v23 = *(float *)(a5 + 728);
  v24 = v12;
  v25 = v13;
  v14 = *(_DWORD *)dword_106B31E4;
  v27 = *(float *)(sub_100D0CC0(a1) + 28);
  v15 = sub_100D0CC0(a1);
  v31 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(v14 + 4))(dword_106B31E4, *(float *)(v15 + 24));
  v16 = *(_DWORD *)dword_106B31E4;
  v25 = *(float *)(sub_100D0CC0(a1) + 36);
  v17 = sub_100D0CC0(a1);
  v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v16 + 4))(
          dword_106B31E4,
          *(float *)(v17 + 32),
          LODWORD(v25));
  if ( *(_BYTE *)(a5 + 2272) )
  {
    v31 = *(float *)(sub_100D0CC0(a1) + 40) * v31;
    v29 = v18;
    v18 = *(float *)(sub_100D0CC0(a1) + 40) * v29;
  }
  v23 = v23 + v31;
  v24 = v24 + v18;
  if ( 0.0 != v31 || 0.0 != v18 )
    sub_101E1CC0(a5, &v23, 0);
}
