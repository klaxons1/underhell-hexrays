float *__usercall sub_1018B510@<eax>(int a1@<edx>, float *a2@<ecx>, float *a3@<esi>)
{
  float *v3; // eax
  float *v4; // ecx
  double v5; // st7
  double v6; // st3
  double v7; // rt0
  double v8; // st3
  double v9; // st5
  double v10; // st2
  double v11; // st4
  bool v12; // c0
  double v13; // st2
  float *result; // eax
  double v15; // st6
  double v16; // rt0
  double v17; // st2
  double v18; // st1
  double v19; // st2
  double v20; // st5
  float *v21; // ecx
  double v22; // st6
  float *v23; // ecx
  bool v24; // zf
  float v25; // [esp+4h] [ebp-20h]
  float v26; // [esp+8h] [ebp-1Ch]
  float v27; // [esp+Ch] [ebp-18h]
  float v28; // [esp+10h] [ebp-14h]
  float v29; // [esp+14h] [ebp-10h]
  int v30; // [esp+1Ch] [ebp-8h]
  float v31; // [esp+1Ch] [ebp-8h]
  int v32; // [esp+20h] [ebp-4h]
  float v33; // [esp+20h] [ebp-4h]

  v32 = 1;
  v30 = 1;
  switch ( a1 )
  {
    case 1:
      v32 = -1;
      break;
    case 2:
      v32 = -1;
      v30 = -1;
      break;
    case 3:
      v30 = -1;
      break;
  }
  v3 = sub_1018B480(a2, a1);
  v5 = (double)v32;
  v25 = *v3;
  v33 = v5;
  v26 = v3[1];
  v27 = v3[2];
  v6 = (double)v30;
  v31 = v6;
  v7 = v6;
  v8 = 12.5 * v6;
  v9 = v7;
  v10 = v5 * 12.5 + *v3;
  v11 = *v3;
  *a3 = v10;
  v29 = v8 + v26;
  a3[1] = v29;
  a3[2] = v27;
  if ( v4[1] > v10 )
  {
    v13 = v27;
  }
  else
  {
    v12 = v4[4] < v10;
    v13 = v27;
    if ( !v12 && v29 >= (double)v4[2] && v29 <= (double)v4[5] )
      return a3;
  }
  v15 = v13;
  v16 = v5 * 12.5 + v11;
  v17 = v9 * ((v4[5] - v4[2]) * 0.5);
  *a3 = v16;
  v18 = v17 + v26;
  v19 = v16;
  a3[1] = v18;
  a3[2] = v15;
  if ( v16 < v4[1] || v19 > v4[4] || v4[2] > v18 )
  {
    v20 = v26;
  }
  else
  {
    v20 = v26;
    if ( v4[5] >= v18 )
      return a3;
  }
  *a3 = v11 + v5 * ((v4[4] - v4[1]) * 0.5);
  v28 = v8;
  a3[1] = v20 + v28;
  a3[2] = v15;
  if ( sub_1018AC50(v4, a3, 0.0) )
    return a3;
  v22 = 0.5 * (v21[5] - v21[2]) * v31 + v26;
  *a3 = (v21[4] - v21[1]) * 0.5 * v33 + v25;
  a3[1] = v22;
  a3[2] = v27;
  if ( sub_1018AC50(v21, a3, 0.0) )
    return a3;
  *a3 = v33 + v25;
  a3[1] = v31 + v26;
  a3[2] = v27;
  v24 = !sub_1018AC50(v23, a3, 0.0);
  result = a3;
  if ( v24 )
  {
    *a3 = v25;
    a3[1] = v26;
    a3[2] = v27;
  }
  return result;
}
