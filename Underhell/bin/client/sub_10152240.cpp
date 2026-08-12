void __thiscall sub_10152240(int this, float a2, int a3)
{
  int v4; // eax
  float v5; // esi
  double v6; // st7
  float *v7; // eax
  void *v8; // eax
  double v9; // st7
  double v10; // st6
  void *v11; // eax
  long double v12; // st6
  double v13; // st5
  double v14; // st4
  double v15; // st5
  long double v16; // st7
  float v17; // [esp+0h] [ebp-6Ch]
  float v18; // [esp+4h] [ebp-68h]
  float v19; // [esp+8h] [ebp-64h]
  int v20[4]; // [esp+18h] [ebp-54h] BYREF
  float v21; // [esp+28h] [ebp-44h] BYREF
  float v22; // [esp+2Ch] [ebp-40h]
  float v23; // [esp+30h] [ebp-3Ch]
  float v24[3]; // [esp+34h] [ebp-38h] BYREF
  int v25; // [esp+40h] [ebp-2Ch] BYREF
  float v26; // [esp+44h] [ebp-28h]
  float v27; // [esp+48h] [ebp-24h]
  int v28; // [esp+4Ch] [ebp-20h] BYREF
  float v29; // [esp+50h] [ebp-1Ch]
  float v30; // [esp+54h] [ebp-18h]
  float v31; // [esp+58h] [ebp-14h]
  float **v32; // [esp+5Ch] [ebp-10h]
  float *v33; // [esp+60h] [ebp-Ch]
  float v34; // [esp+64h] [ebp-8h]
  float v35; // [esp+68h] [ebp-4h] BYREF

  v4 = *(_DWORD *)(this + 1232);
  if ( v4 != 2 && v4 != 3 )
  {
    v5 = a2;
    v6 = *(float *)(this + 1212) - (*((float *)off_103DC81C + 3) - *(float *)(LODWORD(a2) + 24));
    if ( v6 >= *(float *)(dword_1043D614 + 44) )
      v6 = *(float *)(dword_1043D614 + 44);
    v34 = v6 * *(float *)(LODWORD(a2) + 32);
    v17 = *(float *)LODWORD(a2);
    v18 = *(float *)(LODWORD(a2) + 4);
    v19 = *(float *)(LODWORD(a2) + 8);
    v7 = (float *)sub_10142310();
    sub_10056890(v7, v17, v18, v19, (float *)&v25);
    if ( v27 <= -1.0 )
    {
      v8 = sub_10142310();
      sub_101F2270(v8, LODWORD(v5) + 12, &v28);
      v9 = 1.0;
      if ( *(_DWORD *)(this + 1232) == 1 )
      {
        if ( *(float *)(LODWORD(v5) + 28) > 1.0 )
        {
          v10 = *(float *)(LODWORD(v5) + 28) * 0.1;
          v32 = (float **)&a2;
          v33 = &v35;
          v31 = (v10 + 1.0) * (*((float *)off_103DC81C + 3) * 3.141592653589793) + *(float *)(LODWORD(v5) + 28) * 5.0;
          a2 = cos(v31);
          v35 = sin(v31);
          v24[0] = a2 * 28.0;
          v24[1] = 28.0 * v35;
          v24[2] = 0.0;
          v11 = sub_10142310();
          sub_101F2270(v11, v24, &v21);
          *(float *)&v25 = *(float *)&v25 + v21;
          v26 = v26 + v22;
          v27 = v27 + v23;
          *(float *)&v28 = v21 + *(float *)&v28;
          v29 = v22 + v29;
          v30 = v23 + v30;
          v9 = 1.0;
        }
        *(float *)(LODWORD(v5) + 32) = 0.30000001;
      }
      *(float *)&v28 = *(float *)&v28 * v34;
      v29 = v29 * v34;
      v30 = v34 * v30;
      v12 = *(float *)(dword_1043D6A4 + 44);
      v13 = *(float *)(dword_1043D5CC + 44);
      a2 = *(float *)(dword_1043D5CC + 44);
      v14 = -(v13 * *(float *)(this + 1236) / v27);
      if ( flt_103E8C14 > v14 )
      {
        v12 = v12 * (v14 / flt_103E8C14);
        a2 = -(v27 * flt_103E8C14 / *(float *)(this + 1236));
      }
      v15 = v9;
      v16 = *(float *)(dword_1043D6EC + 44);
      *(float *)v20 = v15;
      *(float *)&v20[1] = v15;
      *(float *)&v20[2] = v15;
      *(float *)&v20[3] = pow(v12, v16);
      sub_10175AF0(a3, (int)&v25, (int)&v28, a2, (int)v20, 1.0, 1.0);
    }
  }
}
