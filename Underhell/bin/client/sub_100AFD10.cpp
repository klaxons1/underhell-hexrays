void __thiscall sub_100AFD10(int this, float a2, char a3)
{
  double v4; // st5
  double v5; // st7
  float *v6; // eax
  double v7; // st6
  double v8; // rt1
  double v9; // st5
  float *v10; // eax
  float *v11; // eax
  _BYTE v12[84]; // [esp+4h] [ebp-88h] BYREF
  float v13[6]; // [esp+58h] [ebp-34h] BYREF
  __int16 v14; // [esp+70h] [ebp-1Ch]
  float v15[3]; // [esp+74h] [ebp-18h] BYREF
  float v16; // [esp+80h] [ebp-Ch]
  float v17; // [esp+84h] [ebp-8h]
  float v18; // [esp+88h] [ebp-4h]
  int savedregs; // [esp+8Ch] [ebp+0h] BYREF

  if ( a3 )
  {
    if ( *(_BYTE *)(this + 153) )
      return;
    *(_BYTE *)(this + 153) = 1;
  }
  else if ( *(_BYTE *)(this + 153) )
  {
    *(_BYTE *)(this + 153) = 0;
  }
  if ( sub_1005A760() )
  {
    v4 = *(float *)(this + 24) * a2;
    v5 = a2 * *(float *)(this + 28);
    v16 = a2 * *(float *)(this + 20) * 0.99900001;
    v17 = v4 * 0.99900001;
    v18 = v5 * 0.99900001;
    v6 = (float *)sub_101422C0();
    v7 = v6[1] + v17;
    v8 = v6[2] + v18;
    v9 = *v6 + v16;
    v14 = 257;
    v13[0] = v9;
    v13[1] = v7;
    v13[2] = v8;
    v13[3] = *(float *)(this + 140);
    v13[4] = 1.0;
    v13[5] = 0.0625;
    *(float *)(this + 36) = sub_1005BF10(v13, (int *)(this + 160));
  }
  else
  {
    v16 = *(float *)(this + 20) * 56755.84;
    v17 = *(float *)(this + 24) * 56755.84;
    v18 = 56755.84 * *(float *)(this + 28);
    v10 = (float *)sub_101422C0();
    v15[0] = *v10 + v16;
    v15[1] = v10[1] + v17;
    v15[2] = v10[2] + v18;
    v11 = (float *)sub_101422C0();
    sub_1000FCE0((int)&savedregs, this, v11, v15, 1, 0, 0, (int)v12);
    if ( (v12[66] & 4) != 0 )
      *(float *)(this + 36) = 1.0;
    else
      *(float *)(this + 36) = 0.0;
  }
}
