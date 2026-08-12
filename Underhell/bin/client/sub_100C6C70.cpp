void __thiscall sub_100C6C70(int this)
{
  float *v2; // eax
  float *v3; // eax
  unsigned __int8 (__thiscall *v4)(int *); // edx
  double v5; // st7
  double v6; // st6
  double v7; // st6
  double v8; // st7
  _DWORD *v9; // edi
  float v10[3]; // [esp+4h] [ebp-40h] BYREF
  float v11[3]; // [esp+10h] [ebp-34h] BYREF
  float v12[3]; // [esp+1Ch] [ebp-28h] BYREF
  float v13[3]; // [esp+28h] [ebp-1Ch] BYREF
  float v14; // [esp+34h] [ebp-10h] BYREF
  float v15; // [esp+38h] [ebp-Ch]
  int v16; // [esp+3Ch] [ebp-8h]
  float v17; // [esp+40h] [ebp-4h]

  if ( *(_DWORD *)(this + 208) && (unsigned __int8)sub_10142320() )
  {
    v2 = (float *)sub_101422D0();
    *(float *)(this + 232) = *v2;
    *(float *)(this + 236) = v2[1];
    *(float *)(this + 240) = v2[2];
    v3 = (float *)sub_101422C0();
    *(float *)(this + 244) = *v3;
    *(float *)(this + 248) = v3[1];
    *(float *)(this + 252) = v3[2];
    v17 = (float)(sub_10076740() / 2);
    v16 = sub_10076720() / 2;
    v4 = *(unsigned __int8 (__thiscall **)(int *))(*off_103ED0D8 + 8);
    *(float *)&v16 = (float)v16;
    if ( v4(off_103ED0D8) )
    {
      (*(void (__thiscall **)(int *, float *))(*off_103ED0D8 + 12))(off_103ED0D8, &v14);
      v17 = (v14 + 1.0) * v17;
      v5 = (v15 + 1.0) * *(float *)&v16;
      *(float *)&v16 = v5;
    }
    else
    {
      v5 = *(float *)&v16;
    }
    v6 = 0.5;
    if ( *(float *)(this + 220) != flt_1045924C
      || *(float *)(this + 224) != flt_10459250
      || *(float *)(this + 228) != flt_10459254 )
    {
      v7 = *(float *)(this + 224) + *(float *)(this + 236);
      v8 = *(float *)(this + 228) + *(float *)(this + 240);
      v13[0] = *(float *)(this + 232) + *(float *)(this + 220);
      v13[1] = v7;
      v13[2] = v8;
      sub_101EDFB0(v13, v12);
      v11[0] = *(float *)(this + 244) + v12[0];
      v11[1] = *(float *)(this + 248) + v12[1];
      v11[2] = *(float *)(this + 252) + v12[2];
      sub_1013B9F0(v11, v10);
      v15 = COERCE_FLOAT(sub_10076740());
      v17 = v10[0] * 0.5 * (double)SLODWORD(v15) + 0.5 + v17;
      v15 = COERCE_FLOAT(sub_10076720());
      v6 = 0.5;
      v5 = v10[1] * 0.5 * (double)SLODWORD(v15) + 0.5 + *(float *)&v16;
    }
    v9 = *(_DWORD **)(this + 208);
    sub_100B3BE0(
      v9,
      (int)(v17 - v6 * (double)(v9[40] - v9[39])),
      (int)(v5 - (double)(v9[42] - v9[41]) * v6),
      (_DWORD *)(this + 216));
  }
}
