void __thiscall sub_102C9450(float *this, int a2, float *a3, float *a4, int a5, int a6)
{
  int *v7; // eax
  int v8; // eax
  double v9; // st7
  double v10; // st7
  int v11; // [esp+0h] [ebp-5Ch]
  _DWORD v12[7]; // [esp+4h] [ebp-58h] BYREF
  float v13; // [esp+20h] [ebp-3Ch]
  float v14; // [esp+24h] [ebp-38h]
  float v15; // [esp+28h] [ebp-34h]
  float v16; // [esp+2Ch] [ebp-30h]
  int v17; // [esp+30h] [ebp-2Ch]
  int v18; // [esp+34h] [ebp-28h]
  int v19; // [esp+38h] [ebp-24h]
  int v20; // [esp+3Ch] [ebp-20h]
  int v21; // [esp+40h] [ebp-1Ch]
  int v22; // [esp+44h] [ebp-18h]
  float v23; // [esp+48h] [ebp-14h]
  int v24; // [esp+4Ch] [ebp-10h]
  int v25; // [esp+50h] [ebp-Ch]
  __int16 v26; // [esp+54h] [ebp-8h]
  char v27; // [esp+57h] [ebp-5h]
  __int16 v28; // [esp+58h] [ebp-4h]

  v7 = (int *)sub_102D9B20(v11);
  v8 = sub_100B9D10(v7, "AirboatGun");
  v13 = 0.0;
  v14 = 0.0;
  v20 = 0;
  v15 = 0.0;
  v21 = 0;
  v24 = 0;
  v23 = 1.0;
  v22 = 0;
  v25 = 0;
  v19 = 0;
  v28 = 0;
  v27 = 0;
  v9 = *a3;
  v17 = v8;
  *(float *)&v12[1] = v9;
  *(float *)&v12[2] = a3[1];
  v12[0] = 1;
  *(float *)&v12[3] = a3[2];
  v18 = 4;
  v10 = *a4;
  v26 = 1;
  *(float *)&v12[4] = v10;
  *(float *)&v12[5] = a4[1];
  *(float *)&v12[6] = a4[2];
  v16 = 4096.0;
  if ( this[350] > (double)*(float *)(dword_106B31C8 + 12) )
  {
    v12[0] = 2;
    v13 = 0.043620002;
    v14 = 0.043620002;
    v15 = 0.043620002;
  }
  else
  {
    v12[0] = 1;
    v13 = flt_106F1CA8;
    v14 = flt_106F1CAC;
    v15 = flt_106F1CB0;
    v23 = 1000.0;
  }
  (*(void (__thiscall **)(float *, _DWORD *))(*(_DWORD *)this + 432))(this, v12);
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 736))(this);
  if ( this[350] <= (double)*(float *)(dword_106B31C8 + 12) )
    this[350] = *(float *)(dword_106B31C8 + 12) + 0.2;
}
