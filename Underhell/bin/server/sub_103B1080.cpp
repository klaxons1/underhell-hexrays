void __thiscall sub_103B1080(int *this, int a2)
{
  int v4; // ecx
  float v5; // edx
  int v6; // edi
  int *v7; // eax
  int v8; // ebx
  double v9; // st7
  double v10; // st6
  double v11; // st7
  double v12; // st5
  double v13; // st5
  double v14; // st6
  int v15[2]; // [esp+14h] [ebp-18h] BYREF
  float v16; // [esp+1Ch] [ebp-10h]
  float v17; // [esp+20h] [ebp-Ch]
  float v18; // [esp+24h] [ebp-8h]
  float v19; // [esp+28h] [ebp-4h]
  int v20; // [esp+34h] [ebp+8h]

  sub_1007F6F0(this, a2);
  v4 = *(_DWORD *)(a2 + 4);
  v5 = *(float *)(a2 + 8);
  v6 = this[1];
  v15[0] = *(_DWORD *)a2;
  v7 = *(int **)(a2 + 60);
  v16 = v5;
  v15[1] = v4;
  v20 = *v7;
  if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
    sub_100DAE60(v6);
  sub_103AF710((float *)(v6 + 580), v20, flt_106EAD5C, (int)v15);
  v8 = this[1];
  v17 = flt_106EAD5C * *(float *)(a2 + 12);
  v18 = *(float *)(a2 + 16) * flt_106EAD5C;
  v19 = flt_106EAD5C * *(float *)(a2 + 20);
  if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
    sub_100DAE60(v8);
  v19 = v16 - *(float *)(v8 + 588);
  off_10689714();
  v9 = flt_106EAD5C;
  *(_DWORD *)(a2 + 56) |= 0x18u;
  v10 = v19;
  v11 = v9 * v19;
  if ( v11 < -1.0 )
  {
    v12 = 0.0;
    if ( v11 > 0.0 || (v12 = -192.0, v11 < -192.0) )
      v11 = v12;
    *(float *)(a2 + 8) = *(float *)(a2 + 8) + v11;
    v13 = flt_106EAD5C * v18 * 0.1;
    v14 = v10 * flt_106EAD5C * 0.1;
    *(float *)(a2 + 12) = v17 * flt_106EAD5C * 0.1;
    *(float *)(a2 + 16) = v13;
    *(float *)(a2 + 20) = v14;
    *(float *)(a2 + 20) = v11 + *(float *)(a2 + 20);
    off_10689714();
  }
}
