char __usercall sub_101BF6F0@<al>(
        unsigned __int16 *a1@<edx>,
        _WORD *a2@<ecx>,
        unsigned __int8 *a3@<edi>,
        unsigned __int8 *a4@<esi>,
        _BYTE *a5,
        _BYTE *a6)
{
  unsigned int v6; // eax
  __int16 v7; // ax
  __int16 v8; // ax
  __int16 v9; // ax
  __int16 v10; // ax
  __int16 v11; // ax
  int v12; // eax
  int v13; // kr00_4
  int v14; // kr04_4
  int v15; // kr08_4
  unsigned __int8 v17; // [esp+Bh] [ebp-9h]
  unsigned int v18; // [esp+Ch] [ebp-8h]

  v6 = *a1;
  v18 = a1[1];
  a4[2] = 8 * ((unsigned __int16)v6 >> 11);
  *a4 = 8 * v6;
  a4[1] = 4 * (v6 >> 5);
  a4[3] = -1;
  v17 = 8 * ((unsigned __int16)v18 >> 11);
  a3[2] = v17;
  *a3 = 8 * v18;
  a3[3] = -1;
  a3[1] = 4 * (v18 >> 5);
  if ( (unsigned __int16)v6 <= (unsigned __int16)v18 )
  {
    v13 = a4[2] + v17;
    *a2 = v13 / 2;
    a5[2] = v13 / 2;
    v14 = a3[1] + a4[1];
    *a2 = v14 / 2;
    a5[1] = v14 / 2;
    v15 = *a3 + *a4;
    *a2 = v15 / 2;
    *a5 = v15 / 2;
    a5[3] = -1;
    LOBYTE(v12) = 0;
    a6[2] = 0;
    a6[1] = -1;
    *a6 = -1;
    a6[3] = 0;
  }
  else
  {
    v7 = (__int16)(v17 + 2 * a4[2]) / 3;
    *a2 = v7;
    a5[2] = v7;
    v8 = (__int16)(a3[1] + 2 * a4[1]) / 3;
    *a2 = v8;
    a5[1] = v8;
    v9 = (__int16)(*a3 + 2 * *a4) / 3;
    *a2 = v9;
    *a5 = v9;
    a5[3] = -1;
    v10 = (__int16)(a4[2] + 2 * a3[2]) / 3;
    *a2 = v10;
    a6[2] = v10;
    v11 = (__int16)(a4[1] + 2 * a3[1]) / 3;
    *a2 = v11;
    a6[1] = v11;
    v12 = (*a4 + 2 * *a3) / 3;
    *a2 = v12;
    *a6 = v12;
    a6[3] = -1;
  }
  return v12;
}
