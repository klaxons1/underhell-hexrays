int __thiscall sub_10060D50(_DWORD *this)
{
  int v2; // eax
  float *v3; // ecx
  float *v4; // edx
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  float *v14; // eax
  int v15; // edx
  double v16; // st7
  int (__thiscall *v17)(_DWORD *); // eax
  float *v18; // eax
  float v20; // [esp+8h] [ebp-18h] BYREF
  float v21; // [esp+Ch] [ebp-14h]
  float v22; // [esp+10h] [ebp-10h]
  float v23; // [esp+14h] [ebp-Ch] BYREF
  float v24; // [esp+18h] [ebp-8h]
  float v25; // [esp+1Ch] [ebp-4h]

  v2 = this[317];
  v3 = (float *)this[316];
  v4 = &v3[9 * v2 - 9];
  if ( *v4 <= (double)*v3 )
    v5 = *v4;
  else
    v5 = *v3;
  v20 = v5;
  if ( v4[1] <= (double)v3[1] )
    v6 = v4[1];
  else
    v6 = v3[1];
  v21 = v6;
  if ( v4[2] <= (double)v3[2] )
    v7 = v4[2];
  else
    v7 = v3[2];
  v22 = v7;
  if ( *v4 >= (double)*v3 )
    v8 = *v4;
  else
    v8 = *v3;
  v23 = v8;
  if ( v4[1] >= (double)v3[1] )
    v9 = v4[1];
  else
    v9 = v3[1];
  v24 = v9;
  if ( v4[2] >= (double)v3[2] )
    v10 = v4[2];
  else
    v10 = v3[2];
  v11 = this[317];
  v25 = v10;
  v12 = 1;
  if ( v11 - 1 > 1 )
  {
    v13 = 36;
    do
    {
      sub_101EE6C0(v13 + this[316], &v20, &v23);
      ++v12;
      v13 += 36;
    }
    while ( v12 < this[317] - 1 );
  }
  v14 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
  v15 = *this;
  v20 = v20 - *v14;
  v21 = v21 - v14[1];
  v16 = v22 - v14[2];
  v17 = *(int (__thiscall **)(_DWORD *))(v15 + 36);
  v22 = v16;
  v18 = (float *)v17(this);
  v23 = v23 - *v18;
  v24 = v24 - v18[1];
  v25 = v25 - v18[2];
  return sub_1008FC00(&v20, &v23);
}
