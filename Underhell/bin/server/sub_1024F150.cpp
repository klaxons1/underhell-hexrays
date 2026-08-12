void __thiscall sub_1024F150(int this, int a2, int a3, int a4, float a5)
{
  float *v6; // ecx
  float v7; // edx
  double v8; // st7
  double v9; // st7
  bool v10; // c3
  double v11; // st7
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // rt0
  double v16; // st5
  double v17; // st7
  double v18; // st5
  int *v19; // eax
  float v20; // edx
  float v21; // eax
  float v22; // [esp+0h] [ebp-54h]
  float v23; // [esp+0h] [ebp-54h]
  _DWORD v24[3]; // [esp+10h] [ebp-44h] BYREF
  int v25; // [esp+1Ch] [ebp-38h] BYREF
  float v26; // [esp+20h] [ebp-34h]
  float v27; // [esp+24h] [ebp-30h]
  int v28; // [esp+28h] [ebp-2Ch] BYREF
  float v29; // [esp+2Ch] [ebp-28h]
  float v30; // [esp+30h] [ebp-24h]
  float v31; // [esp+34h] [ebp-20h] BYREF
  float v32; // [esp+38h] [ebp-1Ch]
  float v33; // [esp+3Ch] [ebp-18h]
  int v34; // [esp+40h] [ebp-14h] BYREF
  float v35; // [esp+44h] [ebp-10h]
  float v36; // [esp+48h] [ebp-Ch]
  int v37; // [esp+4Ch] [ebp-8h]
  int v38; // [esp+50h] [ebp-4h] BYREF

  v6 = *(float **)(this + 800);
  if ( v6 )
  {
    v7 = *(float *)(this + 720);
    v34 = *(int *)(this + 716);
    v8 = *(float *)(this + 724) - *(float *)(this + 864);
    v35 = v7;
    v38 = 0;
    v36 = v8;
    v9 = *(float *)(this + 872);
    v10 = 1.0 == v9;
    if ( *(float *)(this + 804) <= 0.0 )
    {
      v37 = 1.0 == v9 ? 100 : -100;
      v23 = (float)v37;
      sub_101ACF40(v6, (float *)&v34, v23, 0, &v38);
    }
    else
    {
      v11 = *(float *)(this + 804);
      if ( !v10 )
        v11 = -v11;
      v22 = v11;
      sub_101ACF40(v6, (float *)&v34, v22, 0, &v38);
    }
    v12 = *(float *)(this + 864) + v36;
    v36 = v12;
    v13 = *(float *)&v34 - *(float *)(this + 716);
    v31 = v13;
    v14 = v35 - *(float *)(this + 720);
    v32 = v14;
    v15 = v14;
    v16 = v12;
    v17 = v15;
    v18 = v16 - *(float *)(this + 724);
    v33 = v18;
    if ( 1.0 != *(float *)(this + 872) )
    {
      v31 = v13 * -1.0;
      v32 = v17 * -1.0;
      v33 = v18 * -1.0;
    }
    sub_10422540(&v31, &v28);
    sub_101887F0((float *)&v28);
    if ( *(_BYTE *)(this + 972) && v38 && sub_101ACB70((_DWORD *)v38) == 2 )
    {
      v19 = sub_101AD430((float *)v38, v24, 1.0 == *(float *)(this + 872));
      v28 = *v19;
      v29 = *((float *)v19 + 1);
      v30 = *((float *)v19 + 2);
    }
    v20 = *(float *)(this + 732);
    v21 = *(float *)(this + 736);
    v25 = *(int *)(this + 728);
    v26 = v20;
    v27 = v21;
    sub_101887F0((float *)&v25);
    if ( !a2 || 0.0 == v31 && v32 == 0.0 )
    {
      v28 = v25;
      v29 = v26;
      v30 = v27;
    }
    sub_1024E260(this, (float *)&v25, (float *)&v28, a5);
  }
}
