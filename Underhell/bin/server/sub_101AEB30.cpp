int __userpurge sub_101AEB30@<eax>(int a1@<ecx>, int a2@<edi>, int a3, int a4, float a5, float *a6, float *a7)
{
  int result; // eax
  float *v9; // eax
  double v10; // st7
  float *v11; // eax
  double v12; // st7
  _BYTE v13[48]; // [esp+1Ch] [ebp-54h] BYREF
  int v14[3]; // [esp+4Ch] [ebp-24h] BYREF
  int v15[3]; // [esp+58h] [ebp-18h] BYREF
  int v16[3]; // [esp+64h] [ebp-Ch] BYREF
  int v17; // [esp+84h] [ebp+14h]

  if ( !*(_BYTE *)(a1 + 44) )
    return 0;
  *a6 = 0.0;
  a6[1] = 0.0;
  a6[2] = 0.0;
  (*(void (__thiscall **)(int, _DWORD, int *, int))(*(_DWORD *)a4 + 204))(a4, 0, v16, a2);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a4 + 192))(a4, v13);
  sub_10421C60(a1 + 4, v13, v15);
  *(float *)&v17 = 1.0 / a5;
  if ( *(_BYTE *)(a1 + 45) )
  {
    v9 = sub_101AE040(
           (float *)v14,
           (float *)(a1 + 16),
           (float *)v15,
           (float *)v16,
           0.0,
           *(float *)&v17,
           *(float *)(a1 + 40));
    *a7 = *v9;
    a7[1] = v9[1];
    v10 = v9[2];
    result = 1;
    a7[2] = v10;
    *a7 = (*a7 - *(float *)v16) * *(float *)&v17;
    a7[1] = (a7[1] - *(float *)&v16[1]) * *(float *)&v17;
    a7[2] = *(float *)&v17 * (a7[2] - *(float *)&v16[2]);
  }
  else
  {
    v11 = sub_101AE040(
            (float *)v14,
            (float *)(a1 + 16),
            (float *)v15,
            (float *)v16,
            1.0,
            *(float *)&v17,
            *(float *)(a1 + 40));
    *a7 = *v11;
    a7[1] = v11[1];
    v12 = v11[2];
    result = 1;
    a7[2] = v12;
    *a7 = *a7 * *(float *)&v17;
    a7[1] = *(float *)&v17 * a7[1];
    a7[2] = *(float *)&v17 * a7[2];
  }
  return result;
}
