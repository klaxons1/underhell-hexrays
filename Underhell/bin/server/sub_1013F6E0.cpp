void __thiscall sub_1013F6E0(int this, float *a2, float a3, float a4, float a5, int a6, int a7)
{
  int *v8; // ecx
  double v9; // st6
  int v10; // ebx
  int *v11; // ecx
  float v12; // eax
  float v13; // edx
  unsigned int v14; // ecx
  int *v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  bool v18; // zf
  double v19; // st7
  float v20[16]; // [esp+0h] [ebp-58h] BYREF
  float v21[3]; // [esp+40h] [ebp-18h] BYREF
  float v22; // [esp+4Ch] [ebp-Ch] BYREF
  float v23; // [esp+50h] [ebp-8h]
  float v24; // [esp+54h] [ebp-4h]

  *(float *)(this + 848) = a4;
  if ( *(_DWORD *)(this + 248) != a6 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 248);
    }
    *(_DWORD *)(this + 248) = a6;
  }
  *(_DWORD *)(this + 808) = a7;
  if ( (a6 & 1) != 0 )
    v9 = 0.0;
  else
    v9 = a5;
  *(float *)(this + 812) = v9;
  if ( v9 != 0.0 )
  {
    v10 = *(_DWORD *)(this + 248) | 0x80;
    if ( *(_DWORD *)(this + 248) != v10 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v11 = *(int **)(this + 24);
        if ( v11 )
          sub_100194B0(v11, 248);
      }
      *(_DWORD *)(this + 248) = v10;
    }
  }
  v12 = *a2;
  v13 = a2[2];
  v23 = a2[1];
  v14 = *(_DWORD *)(this + 308);
  v22 = v12;
  v24 = v13;
  if ( v14 != -1 )
  {
    v15 = &off_1061BE18[4 * (v14 & 0xFFF) + 1];
    v16 = v14 >> 12;
    if ( v15[1] == v16 )
    {
      if ( *v15 )
      {
        if ( v15[1] == v16 )
          v17 = *v15;
        else
          v17 = 0;
        sub_102608F0(v17, 0);
        sub_100D5C50(v20, v21, a2);
        v22 = v21[0];
        v23 = v21[1];
        v24 = v21[2];
      }
    }
  }
  sub_1025F370(this, &v22, 0);
  sub_10112C00(this + 320, 0);
  v18 = (*(_BYTE *)(this + 248) & 8) == 0;
  *(float *)(this + 824) = a3;
  v19 = a3 * 0.00390625 * 64.0;
  *(float *)(this + 840) = v19;
  if ( !v18 )
    *(float *)(this + 828) = v19;
  *(float *)(this + 844) = 0.0;
}
