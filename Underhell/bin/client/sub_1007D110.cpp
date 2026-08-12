void __stdcall sub_1007D110(float *a1, float *a2, _DWORD *a3, int a4)
{
  int v4; // edi
  int v6; // esi
  int (__thiscall *v7)(int); // edx
  float *v8; // eax
  int v9; // edi
  int v10; // edx
  float *v11; // esi
  double v12; // st7
  float *v13; // eax
  float v14; // ebx
  float *v15; // ecx
  float v16; // edi
  float v17; // ecx
  float v18[4097]; // [esp+0h] [ebp-402Ch] BYREF
  float v19[3]; // [esp+4004h] [ebp-28h] BYREF
  int i; // [esp+4010h] [ebp-1Ch]
  float v21; // [esp+4014h] [ebp-18h]
  float v22; // [esp+4018h] [ebp-14h]
  float v23; // [esp+401Ch] [ebp-10h]
  float v24; // [esp+4020h] [ebp-Ch] BYREF
  float v25; // [esp+4024h] [ebp-8h]
  float v26; // [esp+4028h] [ebp-4h]
  _DWORD *v27; // [esp+4034h] [ebp+8h]
  int v28; // [esp+4034h] [ebp+8h]
  int v29; // [esp+4038h] [ebp+Ch]

  if ( a4 > 1 )
  {
    v4 = 0;
    v27 = a3;
    do
    {
      v6 = *v27;
      (*(void (__thiscall **)(_DWORD, float *, float *))(*(_DWORD *)*v27 + 80))(*v27, &v24, v19);
      v7 = *(int (__thiscall **)(int))(*(_DWORD *)v6 + 4);
      v21 = v19[0] + v24;
      v22 = v19[1] + v25;
      v23 = v19[2] + v26;
      v8 = (float *)v7(v6);
      v27 += 3;
      v18[++v4] = (v21 * 0.5 + *v8 - *a1) * *a2
                + (v22 * 0.5 + v8[1] - a1[1]) * a2[1]
                + (0.5 * v23 + v8[2] - a1[2]) * a2[2];
    }
    while ( v4 < a4 );
    v9 = 4;
    v28 = 4;
    do
    {
      v29 = -v9;
      v10 = 0;
      for ( i = a4 - v9; v10 < i; v10 += v9 )
      {
        v11 = &v18[v9 + 1 + v10];
        if ( *v11 < (double)v18[v10 + 1] )
        {
          v12 = v18[v10 + 1];
          v13 = (float *)&a3[3 * v9 + 3 * v10];
          v18[v10 + 1] = *v11;
          v14 = *(float *)&a3[3 * v10 + 1];
          *v11 = v12;
          v15 = (float *)&a3[3 * v10];
          v16 = *v15;
          v25 = v14;
          v26 = v15[2];
          *v15 = *v13;
          v15[1] = v13[1];
          v15[2] = v13[2];
          v17 = v25;
          *v13 = v16;
          v9 = v28;
          v13[1] = v17;
          v13[2] = v26;
          if ( v10 )
            v10 -= 2 * v28;
          else
            v10 = v29;
        }
      }
      v9 >>= 1;
      v28 = v9;
    }
    while ( v9 );
  }
}
