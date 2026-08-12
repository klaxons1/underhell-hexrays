char __thiscall sub_10080210(int this, int a2, int a3, float *a4, float a5, char a6, int a7, _DWORD *a8)
{
  int v9; // esi
  double v11; // st6
  float *v12; // esi
  double v13; // st7
  double v14; // st7
  double v15; // st4
  double v16; // st6
  float v18; // [esp+1Ch] [ebp-18h]
  float v19; // [esp+20h] [ebp-14h]
  float v20; // [esp+24h] [ebp-10h]
  int v21; // [esp+28h] [ebp-Ch] BYREF
  float v22; // [esp+2Ch] [ebp-8h]
  float v23; // [esp+30h] [ebp-4h]
  int v24; // [esp+3Ch] [ebp+8h]
  float v25; // [esp+48h] [ebp+14h]

  v9 = *(_DWORD *)(a3 + 40);
  if ( !(_BYTE)a7 )
    LOBYTE(a7) = *(_BYTE *)(a3 + 32) & 1;
  if ( a5 > 0.0 && v9 && *(_DWORD *)(a3 + 36) == *(_DWORD *)(v9 + 36) && (*(_BYTE *)(a3 + 32) & 0x2A) == 0 )
  {
    sub_10079A70(*(_DWORD *)(this + 12), a4, (float *)v9);
    if ( *(float *)(a2 + 8) * 1.1 <= 0.0 )
    {
      v18 = *(float *)v9 - *(float *)a3;
      v19 = *(float *)(v9 + 4) - *(float *)(a3 + 4);
      v20 = *(float *)(v9 + 8) - *(float *)(a3 + 8);
      off_10689714();
      v12 = a4;
      v14 = *(float *)(a2 + 8);
      v24 = a3;
      v15 = a4[2];
      v16 = v19 * v14 + a4[1];
      *(float *)&v21 = v18 * v14 + *a4;
      v22 = v16;
      v23 = v14 * v20 + v15;
      v13 = a5 - *(float *)(a2 + 8);
    }
    else
    {
      v24 = v9;
      v21 = *(int *)v9;
      v22 = *(float *)(v9 + 4);
      v11 = *(float *)(v9 + 8);
      v12 = a4;
      v23 = v11;
      v13 = a5 - 0.0;
    }
    v25 = v13;
    sub_10079A70(*(_DWORD *)(this + 12), (float *)(*(_DWORD *)(this + 4) + 716), (float *)&v21);
    if ( (unsigned __int8)sub_10080210(a2, v24, (int)&v21, v25, *(float *)(a2 + 4) + 0.1 < v13, a7, (int)a8) )
      return 1;
  }
  else
  {
    v12 = a4;
  }
  if ( a6 )
    return 0;
  if ( *a8 >= *(_DWORD *)(a2 + 12) )
    return 0;
  if ( !sub_100800C0(this, v12) )
    return 0;
  ++*a8;
  if ( !sub_10080170(this, a7, v12) )
    return 0;
  sub_1007E160((_DWORD **)this, a3, v12);
  return 1;
}
