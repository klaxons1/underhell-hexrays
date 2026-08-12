void __thiscall sub_10380940(float *this, float a2, float *a3, int a4)
{
  int v5; // eax
  int v6; // edi
  float v7; // eax
  float v8; // edx
  double v9; // st7
  double v10; // st7
  float v11; // [esp+Ch] [ebp-6Ch]
  float v12; // [esp+Ch] [ebp-6Ch]
  float v13; // [esp+Ch] [ebp-6Ch]
  float v14[3]; // [esp+18h] [ebp-60h] BYREF
  float v15[3]; // [esp+24h] [ebp-54h] BYREF
  float v16[3]; // [esp+30h] [ebp-48h] BYREF
  float v17; // [esp+3Ch] [ebp-3Ch] BYREF
  float v18; // [esp+40h] [ebp-38h]
  float v19; // [esp+44h] [ebp-34h]
  float v20[3]; // [esp+48h] [ebp-30h] BYREF
  float v21[3]; // [esp+54h] [ebp-24h] BYREF
  float v22; // [esp+60h] [ebp-18h] BYREF
  float v23; // [esp+64h] [ebp-14h]
  float v24; // [esp+68h] [ebp-10h]
  float v25; // [esp+6Ch] [ebp-Ch] BYREF
  float v26; // [esp+70h] [ebp-8h]
  float v27; // [esp+74h] [ebp-4h]
  int v28; // [esp+84h] [ebp+Ch]

  v5 = *(_DWORD *)this;
  *((_DWORD *)this + 679) &= ~0x2000u;
  (*(void (__thiscall **)(float *, float *, float *, float *))(v5 + 528))(this, v14, v15, v16);
  if ( *((_DWORD *)this + 593) == 64 && (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
  {
    v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
      sub_100DAE60(v6);
    sub_1037F6A0((int)this, &v22, (float *)(v6 + 580));
  }
  else if ( a4 == 1 )
  {
    sub_1037F5A0((int)this, &v22, a3);
  }
  else
  {
    sub_1037F6A0((int)this, &v22, a3);
  }
  if ( ((_DWORD)this[63] & 0x1000) != 0 )
    sub_100DAFD0((int)this);
  if ( sub_10380010(this, v21, this + 119, (int)v14, (int)v15, (int)v16) )
  {
    v22 = v21[0];
    v23 = v21[1];
    v24 = v21[2];
  }
  sub_1037ECC0(&v22, &v17, v14, v15, v16);
  v20[0] = v22 * a2;
  v20[1] = v23 * a2;
  v20[2] = a2 * v24;
  sub_100EA150((int)this, v20);
  if ( ((_DWORD)this[63] & 0x1000) != 0 )
    sub_100DAFD0((int)this);
  v7 = this[119];
  v8 = this[121];
  v26 = this[120];
  v25 = v7;
  v27 = v8;
  v11 = v26 * v26 + v7 * v7 + v8 * v8;
  v9 = off_10689708(v11);
  *(float *)&v28 = v9;
  if ( v9 > this[200] )
  {
    v10 = this[200] / v9;
    v25 = v25 * v10;
    v26 = v26 * v10;
    v27 = v10 * v27;
    v28 = *((int *)this + 200);
  }
  v22 = v25;
  v23 = v26;
  v24 = v27;
  sub_1037EC50(this, &v22);
  sub_1037F160((int)this, v17, v18, v19, *(float *)&v28);
  if ( *((_DWORD *)this + 905) )
  {
    v12 = v22 * a2 * (v22 * a2) + v23 * a2 * (v23 * a2) + a2 * v24 * (a2 * v24);
    v13 = off_10689708(v12);
    sub_1037FEC0((int)this, v13);
  }
  v17 = v22 * a2;
  v18 = v23 * a2;
  v19 = a2 * v24;
  if ( !sub_10029420((int)this, &v17, 33701899) )
  {
    v17 = v22 * 0.5 * a2;
    v18 = v23 * 0.5 * a2;
    v19 = a2 * (0.5 * v24);
    sub_10029420((int)this, &v17, 33701899);
    v25 = v25 * 0.5;
    v26 = v26 * 0.5;
    v27 = 0.5 * v27;
  }
  sub_100DD660((int)this, &v25);
}
