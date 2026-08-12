void __fastcall sub_100A2A20(int a1, int a2, float *a3, float a4, float *a5, float *a6)
{
  float *v7; // edi
  double v8; // st7
  bool v9; // zf
  float v10[19]; // [esp+10h] [ebp-4Ch] BYREF
  int savedregs; // [esp+5Ch] [ebp+0h] BYREF
  int v12; // [esp+6Ch] [ebp+10h]

  v10[0] = 1.0;
  v10[1] = 0.0;
  v10[2] = 0.0;
  LODWORD(v10[18]) = a1;
  v10[3] = -1.0;
  v7 = v10;
  v10[10] = -1.0;
  v12 = 6;
  v10[17] = -1.0;
  v10[4] = 0.0;
  v10[5] = 0.0;
  v10[6] = 0.0;
  v10[8] = 0.0;
  v10[9] = 0.0;
  v10[11] = 0.0;
  v10[12] = 0.0;
  v10[13] = 0.0;
  v10[15] = 0.0;
  v10[16] = 0.0;
  v10[7] = 1.0;
  v10[14] = 1.0;
  *a5 = 0.0;
  a5[1] = 0.0;
  a5[2] = 0.0;
  *a6 = 1.0;
  do
  {
    v8 = sub_100A2930(COERCE_FLOAT(&savedregs), (int)a5, a3, v7, a4);
    v7 += 3;
    v9 = v12-- == 1;
    *a6 = v8 + *a6;
    *a5 = *a5 + *(v7 - 3);
    a5[1] = *(v7 - 2) + a5[1];
    a5[2] = a5[2] + *(v7 - 1);
  }
  while ( !v9 );
  if ( *a5 == flt_10459240 && a5[1] == *(float *)&qword_10459244 && a5[2] == *((float *)&qword_10459244 + 1) )
  {
    *a5 = 0.0;
    a5[1] = 0.0;
    a5[2] = 1.0;
    *a6 = 2.0;
  }
  off_103EDFEC();
}
