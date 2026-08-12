int __thiscall sub_1007D1F0(_DWORD *this, float *a2)
{
  int result; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // ebx
  float *v7; // edi
  double v8; // st7
  int v9; // eax
  int v10; // eax
  int v11; // eax
  double v12; // st7
  double v13; // st6
  float v14; // [esp+0h] [ebp-6Ch]
  int v15[3]; // [esp+10h] [ebp-5Ch] BYREF
  int v16; // [esp+1Ch] [ebp-50h]
  int v17; // [esp+20h] [ebp-4Ch]
  int v18[3]; // [esp+24h] [ebp-48h] BYREF
  int v19[3]; // [esp+30h] [ebp-3Ch] BYREF
  int v20[3]; // [esp+3Ch] [ebp-30h] BYREF
  int v21; // [esp+48h] [ebp-24h] BYREF
  float v22; // [esp+4Ch] [ebp-20h]
  float v23; // [esp+50h] [ebp-1Ch]
  int v24; // [esp+54h] [ebp-18h] BYREF
  float v25; // [esp+58h] [ebp-14h]
  float v26; // [esp+5Ch] [ebp-10h]
  int v27; // [esp+60h] [ebp-Ch] BYREF
  float v28; // [esp+64h] [ebp-8h]
  float v29; // [esp+68h] [ebp-4h]
  float v30; // [esp+74h] [ebp+8h]

  result = 0;
  if ( this[3] )
  {
    memset(v15, 0, sizeof(v15));
    v16 = 0;
    v17 = 0;
    sub_1007D150(v15, this);
    v3 = v16;
    v4 = v15[0];
    sub_1007CE50((float *)v15[0], (float *)(v15[0] + 24 * v16));
    v5 = v3 - 1;
    if ( v5 >= 0 )
    {
      v7 = (float *)(v4 + 24 * v5 + 8);
      do
      {
        v8 = v7[1] * 0.5;
        v30 = v8 + *v7;
        v14 = *v7 - v8;
        v9 = sub_102650F0((int)v20, v14);
        v24 = *(int *)v9;
        v25 = *(float *)(v9 + 4);
        v26 = *(float *)(v9 + 8);
        v10 = sub_102650F0((int)v19, v30);
        v21 = *(int *)v10;
        v22 = *(float *)(v10 + 4);
        v23 = *(float *)(v10 + 8);
        v11 = sub_102650F0((int)v18, *v7);
        v12 = *(float *)v11;
        v27 = *(int *)v11;
        v28 = *(float *)(v11 + 4);
        v29 = *(float *)(v11 + 8);
        if ( *(v7 - 1) < 0.0 )
        {
          v13 = *(v7 - 1) * -1.0 * 40.0 + 10.0;
          *(float *)&v27 = v12 * v13;
          v28 = v28 * v13;
          *(float *)&v24 = *(float *)&v24 * v13 + *a2;
          v25 = v25 * v13 + a2[1];
          v26 = v26 * v13 + a2[2];
          *(float *)&v21 = *(float *)&v21 * v13 + *a2;
          v22 = v22 * v13 + a2[1];
          v23 = v23 * v13 + a2[2];
          *(float *)&v27 = *a2 + *(float *)&v27;
          v28 = a2[1] + v28;
          v29 = v13 * v29 + a2[2];
          sub_1011BE00((int)a2, (int)&v27, (int)&v24, 255, 0, 0, 48, 1, 0.1);
          sub_1011BE00((int)a2, (int)&v21, (int)&v27, 255, 0, 0, 48, 1, 0.1);
        }
        v7 -= 6;
        --v5;
      }
      while ( v5 >= 0 );
    }
    return sub_102375F0(v15);
  }
  return result;
}
