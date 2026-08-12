char __thiscall sub_1029F780(_DWORD *this, int a2, float *a3, float *a4)
{
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  char *v8; // eax
  unsigned int v9; // esi
  int v10; // esi
  char *v12; // [esp+8h] [ebp-E0h]
  _BYTE v13[48]; // [esp+30h] [ebp-B8h] BYREF
  _BYTE v14[48]; // [esp+60h] [ebp-88h] BYREF
  int v15[3]; // [esp+90h] [ebp-58h] BYREF
  int v16[3]; // [esp+9Ch] [ebp-4Ch] BYREF
  _DWORD v17[3]; // [esp+A8h] [ebp-40h] BYREF
  int v18[3]; // [esp+B4h] [ebp-34h] BYREF
  float v19; // [esp+C0h] [ebp-28h] BYREF
  float v20; // [esp+C4h] [ebp-24h]
  float v21; // [esp+C8h] [ebp-20h]
  int v22; // [esp+CCh] [ebp-1Ch] BYREF
  float v23; // [esp+D0h] [ebp-18h]
  float v24; // [esp+D4h] [ebp-14h]
  int v25; // [esp+D8h] [ebp-10h] BYREF
  float v26; // [esp+DCh] [ebp-Ch]
  float v27; // [esp+E0h] [ebp-8h]
  char v28; // [esp+E7h] [ebp-1h]
  int savedregs; // [esp+E8h] [ebp+0h] BYREF

  v5 = this[1];
  v28 = 1;
  sub_100BFA80(v5, a2, 1.0, 0.0, (int)&v22, (int)v15);
  (*(void (__thiscall **)(_DWORD *, float *, int *))(*this + 280))(this, &v19, v18);
  v17[0] = v22;
  *(float *)&v17[1] = v23;
  *(float *)&v17[2] = v24;
  sub_10424E70(v17, v18, &v22);
  v19 = *(float *)&v22 + v19;
  v20 = v20 + v23;
  v21 = v24 + v21;
  if ( a3 )
  {
    v6 = this[17];
    if ( v6 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
    sub_1029E9F0(v7, &v19, a3);
    if ( !sub_1029EFC0((int)this, COERCE_FLOAT(&savedregs), (int)this, a3, 16.0, 64.0, (float *)&v25) )
    {
      if ( *(_DWORD *)(dword_106DB4EC + 48) )
      {
        v12 = sub_10073730(*(_DWORD *)(this[1] + 1676));
        v8 = sub_10073710(*(_DWORD *)(this[1] + 1676));
        sub_1011BA20((int)a3, (int)&v25, (int)v8, (int)v12, (int)&flt_106F1CB4, 255, 0, 0, 64, 2.0);
      }
      v28 = 0;
    }
    *a3 = *(float *)&v25;
    a3[1] = v26;
    a3[2] = v27;
  }
  if ( a4 )
  {
    *a4 = *(float *)v18;
    a4[2] = *(float *)&v18[2];
    a4[1] = (double)(unsigned __int16)(int)((*(float *)&v15[1] + *(float *)&v18[1]) * 182.04445) * 0.0054931641;
    sub_104227F0(a4);
    v9 = this[17];
    if ( v9 == -1 || off_1061BE18[4 * (v9 & 0xFFF) + 2] != v9 >> 12 )
      v10 = 0;
    else
      v10 = off_1061BE18[4 * (v9 & 0xFFF) + 1];
    if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
      sub_100DAE60(v10);
    sub_10421E30(v10 + 500, v14, v13);
    sub_10421A90(v13, a4);
  }
  if ( *(_DWORD *)(dword_106DB4EC + 48) && a3 && a4 )
  {
    sub_1011CB60(a3, (int)v18, 16.0, 1, 4.0);
    sub_1011C120((int)a3, 4.0, 255, 255, 0, 1, 4.0);
    sub_104222B0(a4, &v25, 0, 0);
    *(float *)v16 = *(float *)&v25 * 64.0 + *a3;
    *(float *)&v16[1] = v26 * 64.0 + a3[1];
    *(float *)&v16[2] = 64.0 * v27 + a3[2];
    sub_1011C3A0(a3, (float *)v16, 8.0, 0, 255, 0, 64, 1, 4.0);
  }
  return v28;
}
