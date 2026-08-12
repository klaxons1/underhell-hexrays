void __thiscall sub_10205BC0(int this, char *a2, int a3, int a4, int a5, int a6)
{
  int v6; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  float *v11; // edi
  float *v12; // ebx
  float *v13; // eax
  double v14; // st7
  double v15; // st7
  int v16; // eax
  double v17; // st7
  int v18; // eax
  float v20; // [esp+1Ch] [ebp-60h] BYREF
  float v21; // [esp+20h] [ebp-5Ch]
  float v22; // [esp+24h] [ebp-58h]
  float v23; // [esp+28h] [ebp-54h] BYREF
  __int64 v24; // [esp+2Ch] [ebp-50h]
  float v25[3]; // [esp+34h] [ebp-48h] BYREF
  float v26[3]; // [esp+40h] [ebp-3Ch] BYREF
  int v27[12]; // [esp+4Ch] [ebp-30h] BYREF
  float *v28; // [esp+80h] [ebp+4h]

  if ( a4 )
  {
    v6 = a3;
    do
    {
      v8 = v6 / 4;
      v9 = v6 / 4 * *((_DWORD *)a2 + 1581);
      v10 = v6 & 3;
      v11 = (float *)(*((_DWORD *)a2 + 1517) + 4 * (v10 + v9));
      v12 = (float *)(*((_DWORD *)a2 + 1519) + 4 * (v10 + v8 * *((_DWORD *)a2 + 1583)));
      --a4;
      v28 = (float *)(*((_DWORD *)a2 + 1525) + 4 * (v10 + v8 * *((_DWORD *)a2 + 1589)));
      v13 = (float *)(*((_DWORD *)a2 + 1520) + 4 * (v10 + v8 * *((_DWORD *)a2 + 1584)));
      if ( *(_BYTE *)(this + 73) )
      {
        v14 = *v13;
        v25[0] = *(float *)(this + 56) * v14;
        v25[1] = *(float *)(this + 60) * v14;
        v25[2] = v14 * *(float *)(this + 64);
        v15 = *v13;
        v16 = *((_DWORD *)a2 + 1655);
        v26[0] = *(float *)(this + 44) * v15;
        v26[1] = *(float *)(this + 48) * v15;
        v17 = v15 * *(float *)(this + 52);
        *((_DWORD *)a2 + 1655) = v16 + 1;
        v26[2] = v17;
        sub_10204B20(a2, v16, v26, v25, &v20);
      }
      else
      {
        v18 = *((_DWORD *)a2 + 1655);
        *((_DWORD *)a2 + 1655) = v18 + 1;
        sub_10204B20(a2, v18, (float *)(this + 44), (float *)(this + 56), &v20);
      }
      if ( *(_BYTE *)(this + 72) )
      {
        sub_101F8FA0(a2, *(_DWORD *)(this + 68), *v28, (float *)v27);
        v23 = flt_10459240;
        v24 = qword_10459244;
        sub_101ED920(&v20, (float *)v27, &v23);
        v20 = v23;
        v21 = *(float *)&v24;
        v22 = *((float *)&v24 + 1);
      }
      v6 = ++a3;
      *v11 = *v11 + v20;
      v11[4] = v11[4] + v21;
      v11[8] = v11[8] + v22;
      *v12 = v20 + *v12;
      v12[4] = v12[4] + v21;
      v12[8] = v12[8] + v22;
    }
    while ( a4 );
  }
}
