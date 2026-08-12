void __thiscall sub_10346BD0(float *this, int *a2)
{
  float *v3; // eax
  int v4; // eax
  float *v5; // eax
  float *v6; // eax
  int v7[3]; // [esp+1Ch] [ebp-60h] BYREF
  float v8[3]; // [esp+28h] [ebp-54h] BYREF
  float v9[3]; // [esp+34h] [ebp-48h] BYREF
  int v10[3]; // [esp+40h] [ebp-3Ch] BYREF
  int v11; // [esp+4Ch] [ebp-30h] BYREF
  float v12; // [esp+50h] [ebp-2Ch]
  float v13; // [esp+54h] [ebp-28h]
  int v14; // [esp+58h] [ebp-24h] BYREF
  float v15; // [esp+5Ch] [ebp-20h]
  float v16; // [esp+60h] [ebp-1Ch]
  float v17[3]; // [esp+64h] [ebp-18h] BYREF
  int v18[3]; // [esp+70h] [ebp-Ch] BYREF

  if ( a2 )
  {
    (*(void (__thiscall **)(float *, int *))(*(_DWORD *)this + 504))(this, v18);
    (*(void (__thiscall **)(int *, int *, int *, int))(*a2 + 520))(a2, v10, v18, 1);
    v3 = (float *)(*(int (__thiscall **)(int *))(*a2 + 576))(a2);
    v17[0] = *v3 - *(float *)v18;
    v17[1] = v3[1] - *(float *)&v18[1];
    v17[2] = v3[2] - *(float *)&v18[2];
    off_10689714();
    sub_10422540(v17, v9);
    if ( *(_DWORD *)(dword_106E669C + 48) )
    {
      *(float *)&v14 = 2.0;
      v15 = 2.0;
      v16 = 2.0;
      *(float *)&v11 = -2.0;
      v12 = -2.0;
      v13 = -2.0;
      sub_1011C000((float *)v18, (float *)&v11, (float *)&v14, 0, 255, 0, 0, 0.050000001);
      v4 = *a2;
      *(float *)&v11 = 2.0;
      v12 = 2.0;
      v13 = 2.0;
      *(float *)&v14 = -2.0;
      v15 = -2.0;
      v16 = -2.0;
      v5 = (float *)(*(int (__thiscall **)(int *))(v4 + 576))(a2);
      sub_1011C000(v5, (float *)&v14, (float *)&v11, 0, 255, 0, 0, 0.050000001);
      v6 = (float *)(*(int (__thiscall **)(int *))(*a2 + 576))(a2);
      sub_1011BC50((float *)v18, v6, 0, 255, 0, 0, 0.050000001);
      *(float *)&v11 = 2.0;
      v12 = 2.0;
      v13 = 2.0;
      *(float *)&v14 = -2.0;
      v15 = -2.0;
      v16 = -2.0;
      sub_1011C000((float *)v18, (float *)&v14, (float *)&v11, 0, 255, 0, 0, 0.050000001);
      *(float *)&v11 = 2.0;
      v12 = 2.0;
      v13 = 2.0;
      *(float *)&v14 = -2.0;
      v15 = -2.0;
      v16 = -2.0;
      sub_1011C000((float *)v10, (float *)&v14, (float *)&v11, 0, 255, 0, 0, 0.050000001);
      sub_1011BC50((float *)v18, (float *)v10, 0, 255, 0, 0, 0.050000001);
    }
    sub_100BF1B0(this, "eyes", (int)v7, v8, 0, 0);
    sub_10039F40((int *)this, dword_106E6670);
    this[919] = v9[1];
    this[918] = v9[0];
    sub_103467B0((int)this);
  }
}
