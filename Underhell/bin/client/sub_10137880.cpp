int __thiscall sub_10137880(
        int *this,
        int a2,
        float *a3,
        int a4,
        float *a5,
        int a6,
        int a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        int a16,
        float a17,
        float a18,
        float a19,
        float a20)
{
  float *v21; // eax
  double v22; // st7
  int result; // eax
  float *v24; // eax
  double v25; // st7
  int v26; // edx
  int (__thiscall *v27)(int *, int *); // edx
  int v28; // [esp+Ch] [ebp-90h] BYREF
  int v29; // [esp+10h] [ebp-8Ch]
  int v30; // [esp+14h] [ebp-88h]
  int v31; // [esp+18h] [ebp-84h]
  int v32; // [esp+1Ch] [ebp-80h]
  float v33; // [esp+20h] [ebp-7Ch]
  float v34; // [esp+24h] [ebp-78h]
  float v35; // [esp+28h] [ebp-74h]
  float v36; // [esp+2Ch] [ebp-70h]
  float v37; // [esp+30h] [ebp-6Ch]
  float v38; // [esp+34h] [ebp-68h]
  int v39; // [esp+38h] [ebp-64h]
  int v40; // [esp+3Ch] [ebp-60h]
  int v41; // [esp+40h] [ebp-5Ch]
  int v42; // [esp+44h] [ebp-58h]
  float v43; // [esp+48h] [ebp-54h]
  float v44; // [esp+4Ch] [ebp-50h]
  float v45; // [esp+50h] [ebp-4Ch]
  float v46; // [esp+54h] [ebp-48h]
  float v47; // [esp+58h] [ebp-44h]
  float v48; // [esp+5Ch] [ebp-40h]
  float v49; // [esp+60h] [ebp-3Ch]
  float v50; // [esp+64h] [ebp-38h]
  int v51; // [esp+68h] [ebp-34h]
  float v52; // [esp+6Ch] [ebp-30h]
  float v53; // [esp+70h] [ebp-2Ch]
  float v54; // [esp+74h] [ebp-28h]
  float v55; // [esp+78h] [ebp-24h]
  char v56; // [esp+7Ch] [ebp-20h]
  int v57; // [esp+80h] [ebp-1Ch]
  int v58; // [esp+84h] [ebp-18h]

  v28 = 0;
  v57 = -1;
  v40 = 0;
  v42 = 0;
  v39 = -1;
  v41 = -1;
  v56 = 1;
  v58 = 0;
  if ( a2 > 0 )
  {
    result = sub_1007A6A0(off_103DCD78, a2 & 0xFFF);
    v29 = result;
    v30 = (a2 >> 12) & 0xF;
    if ( !result )
      return result;
  }
  else
  {
    v21 = a3;
    if ( !a3 )
      v21 = &flt_10459240;
    v22 = *v21;
    v29 = 0;
    v33 = v22;
    v34 = v21[1];
    v35 = v21[2];
  }
  if ( a4 > 0 )
  {
    result = sub_1007A6A0(off_103DCD78, a4 & 0xFFF);
    v31 = result;
    v32 = (a4 >> 12) & 0xF;
    if ( !result )
      return result;
  }
  else
  {
    v24 = a5;
    if ( !a5 )
      v24 = &flt_10459240;
    v25 = *v24;
    v31 = 0;
    v36 = v25;
    v37 = v24[1];
    v38 = v24[2];
  }
  v43 = a8;
  v44 = a9;
  v39 = a6;
  v26 = *this;
  v45 = a10;
  v27 = *(int (__thiscall **)(int *, int *))(v26 + 40);
  v41 = a7;
  v46 = a11;
  v51 = a16;
  v47 = a12;
  v48 = a13;
  v49 = a14;
  v50 = a15;
  v52 = a17;
  v53 = a18;
  v54 = a19;
  v55 = a20;
  return v27(this, &v28);
}
