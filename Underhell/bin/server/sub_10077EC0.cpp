char __thiscall sub_10077EC0(int this, int a2, int a3, float *a4, float a5, char a6)
{
  int v6; // ebx
  int v8; // eax
  unsigned __int8 v9; // al
  int v10; // ecx
  char v11; // bl
  float *v12; // edx
  double v13; // st4
  double v14; // st6
  double v15; // st4
  double v16; // st5
  double v17; // st6
  double v18; // st7
  char result; // al
  float *v20; // eax
  float *v21; // esi
  bool v22; // zf
  float *v23; // eax
  double v24; // st7
  double v25; // st6
  int *v26; // eax
  int v27; // [esp+Ch] [ebp-8h] BYREF
  float *v28; // [esp+10h] [ebp-4h]

  v6 = a3;
  if ( a3 == 800 )
    v6 = 0;
  v8 = v6;
  if ( v6 == 800 )
    v8 = 0;
  v27 = v8;
  v9 = sub_10076390((_BYTE *)this, (int)&v27);
  if ( v9 == 0xFF || (v10 = *(_DWORD *)(*(_DWORD *)(this + 4) + 12 * v9 + 8)) == 0 )
  {
    v20 = (float *)sub_10184390(56);
    if ( v20 )
      v21 = sub_10075720(v20);
    else
      v21 = 0;
    v22 = a6 == 0;
    v23 = a4;
    v21[1] = *a4;
    v21[2] = v23[1];
    v21[3] = v23[2];
    if ( v22 )
    {
      v25 = *(float *)(dword_106B31C8 + 12) - (*(float *)(this + 24) + 0.01);
      v21[7] = v25;
      v21[8] = v25;
      v21[9] = v25;
      v21[12] = -3.4028235e38;
    }
    else
    {
      v24 = *(float *)(dword_106B31C8 + 12);
      v21[12] = *(float *)(dword_106B31C8 + 12);
      v21[7] = v24;
      v21[8] = v24;
      v21[9] = v24;
    }
    if ( a5 > 0.0 )
      v21[10] = a5 + *(float *)(dword_106B31C8 + 12);
    *((_BYTE *)v21 + 53) = 0;
    if ( v6 )
      *v21 = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
    else
      *v21 = NAN;
    *((_BYTE *)v21 + 52) = v6 == 0;
    v27 = v6;
    v28 = v21;
    sub_10075A60((_BYTE *)this, (int)&v27, (unsigned __int8 *)&a4, &a6);
    v26 = (int *)(*(_DWORD *)(this + 4) + 12 * sub_10076F20(this, (unsigned __int8)a4, a6) + 4);
    if ( v26 )
    {
      *v26 = v27;
      v26[1] = (int)v28;
    }
    result = 1;
    ++*(_DWORD *)(this + 56);
  }
  else
  {
    v11 = a6;
    if ( a6 )
      *(float *)(v10 + 28) = *(float *)(dword_106B31C8 + 12);
    v12 = a4;
    *(_BYTE *)(v10 + 53) = 0;
    v13 = *(float *)(v10 + 8) - v12[1];
    v14 = v13 * v13;
    v15 = *(float *)(v10 + 4) - *v12;
    v16 = v14;
    v17 = *(float *)(v10 + 12) - v12[2];
    v18 = v15 * v15 + v16 + v17 * v17;
    if ( v18 > 57600.0 || v18 > 2304.0 && *(float *)(dword_106B31C8 + 12) - *(float *)(v10 + 28) > 4.0 )
      *(float *)(v10 + 36) = *(float *)(dword_106B31C8 + 12);
    if ( v18 > 144.0 )
    {
      *(float *)(v10 + 4) = *v12;
      *(float *)(v10 + 8) = v12[1];
      *(float *)(v10 + 12) = v12[2];
    }
    if ( v11 )
    {
      if ( -3.402823466385289e38 == *(float *)(v10 + 48) )
        *(float *)(v10 + 48) = *(float *)(dword_106B31C8 + 12);
    }
    return 0;
  }
  return result;
}
