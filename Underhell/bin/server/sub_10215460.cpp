int __usercall sub_10215460@<eax>(float *a1@<eax>, float *a2@<ecx>, int a3)
{
  float v3; // edx
  float v4; // ecx
  double v5; // st7
  float v6; // edx
  float v7; // ecx
  float v8; // edx
  int v9; // esi
  int v10; // ecx
  int v11; // eax
  double v12; // st7
  int v13; // ecx
  int result; // eax
  int v15; // ebx
  int v16; // edi
  _DWORD v17[2]; // [esp+0h] [ebp-3Ch]
  int v18; // [esp+8h] [ebp-34h]
  _DWORD v19[3]; // [esp+Ch] [ebp-30h]
  _BYTE v20[12]; // [esp+18h] [ebp-24h] BYREF
  float v21; // [esp+24h] [ebp-18h] BYREF
  float v22; // [esp+28h] [ebp-14h]
  float v23; // [esp+2Ch] [ebp-10h]
  float v24; // [esp+30h] [ebp-Ch] BYREF
  float v25; // [esp+34h] [ebp-8h]
  float v26; // [esp+38h] [ebp-4h]

  v21 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v22 = v3;
  v5 = v3;
  v6 = *a1;
  v23 = v4;
  v7 = a1[1];
  v24 = v6;
  v8 = a1[2];
  v9 = 0;
  v25 = v7;
  v26 = v8;
  if ( v21 <= v5 )
  {
    v10 = 1;
    if ( v5 > v23 )
      goto LABEL_6;
  }
  else if ( v21 > (double)v23 )
  {
    v10 = 0;
    goto LABEL_6;
  }
  v10 = 2;
LABEL_6:
  if ( v24 <= (double)v25 )
  {
    v11 = 1;
    if ( v25 > (double)v26 )
      goto LABEL_11;
  }
  else if ( v24 > (double)v26 )
  {
    v11 = 0;
    goto LABEL_11;
  }
  v11 = 2;
LABEL_11:
  if ( v10 != v11 )
  {
    v12 = *(&v24 + v10);
    v18 = v10;
    *(&v24 + v11) = v12;
    v19[0] = v11;
    v9 = 1;
  }
  *(&v21 + v10) = 0.0;
  *(&v24 + v10) = 0.0;
  if ( v21 <= (double)v22 )
  {
    v13 = 1;
    if ( v22 > (double)v23 )
      goto LABEL_18;
  }
  else if ( v21 > (double)v23 )
  {
    v13 = 0;
    goto LABEL_18;
  }
  v13 = 2;
LABEL_18:
  if ( v24 <= (double)v25 )
  {
    result = 1;
    if ( v25 > (double)v26 )
      goto LABEL_23;
  }
  else if ( v24 > (double)v26 )
  {
    result = 0;
    goto LABEL_23;
  }
  result = 2;
LABEL_23:
  if ( v13 != result )
  {
    v19[2 * v9 - 1] = v13;
    v19[2 * v9++] = result;
  }
  for ( ; v9 > 0; result = sub_10421D00(&v24, v16, a3) )
  {
    v15 = v17[2 * v9];
    v16 = v17[2 * v9-- + 1];
    sub_10421CE0(a3, v15, &v21);
    sub_10421CE0(a3, v16, v20);
    sub_10421D00(v20, v15, a3);
    v24 = -v21;
    v25 = -v22;
    v26 = -v23;
  }
  return result;
}
