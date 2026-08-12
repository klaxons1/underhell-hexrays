float *__usercall sub_101760A0@<eax>(int a1@<ecx>, float *a2@<esi>)
{
  float v3; // eax
  float v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  float *result; // eax
  double v9; // st7
  int v10; // ebx
  double v11; // st4
  double v12; // st4
  char v13; // al
  int v14; // edx
  double v15; // st7
  char v16; // al
  int v17; // [esp+38h] [ebp-40h]
  _DWORD v18[5]; // [esp+3Ch] [ebp-3Ch]
  float v19[3]; // [esp+50h] [ebp-28h] BYREF
  float v20; // [esp+5Ch] [ebp-1Ch] BYREF
  float v21; // [esp+60h] [ebp-18h]
  float v22; // [esp+64h] [ebp-14h]
  float *v23; // [esp+68h] [ebp-10h]
  int v24; // [esp+6Ch] [ebp-Ch]
  float *v25; // [esp+70h] [ebp-8h]
  float *v26; // [esp+74h] [ebp-4h]

  v3 = *(float *)(a1 + 224);
  v4 = *(float *)(a1 + 232);
  v19[1] = *(float *)(a1 + 228);
  v5 = *(_DWORD *)(a1 + 300);
  v19[0] = v3;
  v19[2] = v4;
  v6 = sub_1007A730(off_103DCD78, v5);
  if ( v6 )
  {
    v7 = *(_DWORD *)(a1 + 304);
    if ( v7 )
    {
      a2 = v19;
      (*(void (__thiscall **)(int, int, float *, float *))(*(_DWORD *)v6 + 148))(v6, v7, v19, &v20);
      sub_100F3060(a1, v19);
    }
  }
  result = (float *)RandomInt(1, 2);
  v23 = result;
  v25 = 0;
  if ( (int)result > 0 )
  {
    do
    {
      result = sub_100F2B60(a1, (int)a2, 60, dword_1043DF20[0], v19);
      a2 = result;
      if ( !result )
        break;
      result[11] = 0.0;
      result[10] = RandomFloat(0.5, 1.0);
      v26 = (float *)sub_10115FB0();
      v20 = (double)(int)v26 * 0.000030518509 * 0.2 - 0.1;
      v26 = (float *)sub_10115FB0();
      v21 = (double)(int)v26 * 0.000030518509 * 0.2 - 0.1;
      v26 = (float *)sub_10115FB0();
      v20 = *(float *)(a1 + 272) + v20;
      v21 = *(float *)(a1 + 276) + v21;
      v22 = (double)(int)v26 * 0.000030518509 * 0.2 - 0.1 + *(float *)(a1 + 280);
      off_103EDFEC();
      v9 = RandomFloat(160.0, 640.0);
      v10 = 0;
      v26 = (float *)(a1 + 284);
      v20 = v20 * v9;
      v21 = v21 * v9;
      v22 = v9 * v22;
      a2[6] = v20;
      a2[7] = v21;
      a2[8] = v22;
      do
      {
        v11 = *v26 - 64.0;
        if ( v11 < 0.0 )
          v11 = 0.0;
        v18[2 * v10 - 1] = (int)v11;
        v12 = *v26 + 64.0;
        if ( v12 > 255.0 )
          v12 = 255.0;
        ++v26;
        v18[2 * v10++] = (int)v12;
      }
      while ( v10 < 3 );
      v13 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, v17, v18[0]);
      v14 = v18[2];
      *((_BYTE *)a2 + 48) = v13;
      *((_BYTE *)a2 + 49) = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                              dword_10413198,
                              v18[1],
                              v14);
      *((_BYTE *)a2 + 50) = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 8))(
                              dword_10413198,
                              v18[3],
                              v18[4]);
      v15 = *(float *)(a1 + 296);
      *((_BYTE *)a2 + 52) = 0;
      v24 = (int)v15;
      *((_BYTE *)a2 + 51) = (int)v15;
      v16 = RandomInt(50, 60);
      *((_BYTE *)a2 + 53) = v16;
      *((_BYTE *)a2 + 54) = 3 * v16;
      a2[9] = RandomFloat(0.0, 360.0);
      a2[14] = RandomFloat(-4.0, 4.0);
      result = (float *)((char *)v25 + 1);
      v25 = result;
    }
    while ( (int)result < (int)v23 );
  }
  *(float *)(a1 + 264) = *((float *)off_103DC81C + 3) + *(float *)(a1 + 268);
  return result;
}
