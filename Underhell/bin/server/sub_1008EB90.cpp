int __thiscall sub_1008EB90(_DWORD *this, float *a2, float *a3, float *a4, int a5, int a6, unsigned __int8 a7)
{
  double v8; // st7
  double v9; // st6
  int v10; // edx
  double v11; // st5
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int result; // eax
  double v18; // st6
  int v19; // ecx
  double v20; // st5
  int v21; // edx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  float v26; // [esp+Ch] [ebp-18h] BYREF
  float v27; // [esp+10h] [ebp-14h]
  float v28; // [esp+14h] [ebp-10h]
  float v29; // [esp+18h] [ebp-Ch] BYREF
  float v30; // [esp+1Ch] [ebp-8h]
  float v31; // [esp+20h] [ebp-4h]

  sub_1008E190(
    this,
    a2,
    a3,
    (unsigned __int8)byte_10609178[3 * a7],
    (unsigned __int8)byte_10609179[3 * a7],
    (unsigned __int8)byte_1060917A[3 * a7],
    0);
  sub_1008E190(
    this,
    a3,
    a4,
    (unsigned __int8)byte_10609178[3 * a7],
    (unsigned __int8)byte_10609179[3 * a7],
    (unsigned __int8)byte_1060917A[3 * a7],
    0);
  v8 = 10.0;
  if ( *(int *)a5 < 0 )
  {
    v9 = *(float *)(a5 + 4);
    v10 = (unsigned __int8)byte_1060917A[3 * a7];
    v11 = *(float *)(a5 + 8);
    v12 = (unsigned __int8)byte_10609178[3 * a7];
    v31 = *(float *)(a5 + 12);
    v13 = (unsigned __int8)byte_10609179[3 * a7];
    v28 = v31;
    v26 = v9 - 10.0;
    v27 = v11 - 10.0;
    v29 = v9 + 10.0;
    v30 = v11 + 10.0;
    sub_1008E190(this, &v26, &v29, v12, v13, v10, 0);
    v14 = (unsigned __int8)byte_1060917A[3 * a7];
    v15 = (unsigned __int8)byte_10609179[3 * a7];
    v16 = (unsigned __int8)byte_10609178[3 * a7];
    v26 = v26 + 20.0;
    v29 = v29 - 20.0;
    sub_1008E190(this, &v26, &v29, v16, v15, v14, 0);
    v8 = 10.0;
  }
  result = a6;
  if ( *(int *)a6 < 0 )
  {
    v18 = *(float *)(a6 + 4);
    v19 = (unsigned __int8)byte_10609179[3 * a7];
    v20 = *(float *)(a6 + 8);
    v21 = (unsigned __int8)byte_10609178[3 * a7];
    v28 = *(float *)(a6 + 12);
    v22 = (unsigned __int8)byte_1060917A[3 * a7];
    v31 = v28;
    v29 = v18 - v8;
    v30 = v20 - v8;
    v26 = v18 + v8;
    v27 = v8 + v20;
    sub_1008E190(this, &v29, &v26, v21, v19, v22, 0);
    v23 = (unsigned __int8)byte_1060917A[3 * a7];
    v24 = (unsigned __int8)byte_10609179[3 * a7];
    v25 = (unsigned __int8)byte_10609178[3 * a7];
    v29 = v29 + 20.0;
    v26 = v26 - 20.0;
    return sub_1008E190(this, &v29, &v26, v25, v24, v23, 0);
  }
  return result;
}
