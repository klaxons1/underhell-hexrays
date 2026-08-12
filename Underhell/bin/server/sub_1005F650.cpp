char __thiscall sub_1005F650(_DWORD *this, float *a2)
{
  int v3; // esi
  int v4; // ecx
  double v5; // st6
  double v6; // rt0
  int v7; // edi
  int v9; // edi
  int v10; // [esp+10h] [ebp-28h] BYREF
  float v11; // [esp+14h] [ebp-24h]
  float v12; // [esp+18h] [ebp-20h]
  int v13; // [esp+1Ch] [ebp-1Ch] BYREF
  float v14; // [esp+20h] [ebp-18h]
  float v15; // [esp+24h] [ebp-14h]
  float v16; // [esp+28h] [ebp-10h]
  float v17; // [esp+2Ch] [ebp-Ch]
  float v18; // [esp+30h] [ebp-8h]
  int v19; // [esp+34h] [ebp-4h]

  sub_1005F3E0((int)this);
  v3 = 0;
  v19 = 0;
  if ( (int)this[48] <= 0 )
  {
LABEL_5:
    if ( *(_DWORD *)(dword_10692474 + 48) )
    {
      *(float *)&v10 = 48.0;
      v11 = 48.0;
      v12 = 4.0;
      *(float *)&v13 = -48.0;
      v14 = -48.0;
      v15 = -4.0;
      sub_1011BB20((int)a2, (int)&v13, (int)&v10, 255, 0, 0, 8, 1.0);
      v7 = this[1];
      if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
        sub_100DAE60(v7);
      sub_1011BC50((int)a2, v7 + 580, 255, 0, 0, 1, 1.0);
    }
    return 1;
  }
  else
  {
    v4 = this[45];
    while ( 1 )
    {
      v5 = a2[1] - *(float *)(v3 + v4 + 4);
      v6 = a2[2] - *(float *)(v3 + v4 + 8);
      v16 = *a2 - *(float *)(v3 + v4);
      v17 = v5;
      v18 = v6;
      off_10689714();
      v4 = this[45];
      v18 = 0.0;
      if ( *(float *)(v3 + v4 + 16) * v17 + *(float *)(v3 + v4 + 12) * v16 + *(float *)(v3 + v4 + 20) * 0.0 > 0.0 )
        break;
      v3 += 24;
      if ( ++v19 >= this[48] )
        goto LABEL_5;
    }
    if ( *(_DWORD *)(dword_10692474 + 48) )
    {
      *(float *)&v13 = 48.0;
      v14 = 48.0;
      v15 = 4.0;
      *(float *)&v10 = -48.0;
      v11 = -48.0;
      v12 = -4.0;
      sub_1011BB20((int)a2, (int)&v10, (int)&v13, 0, 255, 0, 8, 1.0);
      v9 = this[1];
      if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
        sub_100DAE60(v9);
      sub_1011BC50((int)a2, v9 + 580, 0, 255, 0, 1, 1.0);
    }
    return 0;
  }
}
