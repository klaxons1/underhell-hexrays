void __thiscall sub_10153050(int this, float a2, float a3, float a4)
{
  int v5; // edi
  double v6; // st7
  double v7; // st7
  int v8; // eax
  double v9; // st7
  int v10; // eax
  double v11; // st7
  double v12; // st5
  double v13; // st4
  double v14; // st6
  double v15; // st5
  float v16; // [esp+10h] [ebp-Ch] BYREF
  float v17; // [esp+14h] [ebp-8h]
  float v18; // [esp+18h] [ebp-4h]
  float v19; // [esp+28h] [ebp+Ch]

  v5 = 0;
  v19 = a3 * a4 * (a3 * a4);
  while ( 1 )
  {
    v6 = a2;
    if ( a2 < (double)*(float *)(this + 1196) )
      break;
    a2 = v6 - *(float *)(this + 1196);
    *(float *)(this + 1196) = *(float *)(this + 1192);
    if ( sub_100EB1D0((unsigned __int16 *)(*(_DWORD *)(this + 1212) + 8)) < *(_DWORD *)(dword_1043CFE4 + 48) )
    {
      v7 = RandomFloat(
             *(float *)(*(_DWORD *)(this + 1392) + 36 * *(_DWORD *)(this + 4 * v5 + 1260) + 12),
             *(float *)(*(_DWORD *)(this + 1392) + 36 * *(_DWORD *)(this + 4 * v5 + 1260) + 24));
      v8 = *(_DWORD *)(this + 4 * v5 + 1260);
      v16 = v7;
      v9 = RandomFloat(
             *(float *)(*(_DWORD *)(this + 1392) + 36 * v8 + 16),
             *(float *)(*(_DWORD *)(this + 1392) + 36 * v8 + 28));
      v10 = *(_DWORD *)(this + 4 * v5 + 1260);
      v17 = v9;
      v11 = RandomFloat(
              *(float *)(*(_DWORD *)(this + 1392) + 36 * v10 + 20),
              *(float *)(*(_DWORD *)(this + 1392) + 36 * v10 + 32));
      v18 = v11;
      v12 = *(float *)(this + 1220) - v17;
      v13 = *(float *)(this + 1216) - v16;
      v14 = v13 * v13 + v12 * v12;
      v15 = *(float *)(this + 1224) - v11;
      if ( v15 * v15 + v14 < v19 )
        sub_10151F30(this, this, &v16, *(_DWORD *)(this + 4 * v5 + 1260));
      v5 = (v5 + 1) % *(_DWORD *)(this + 1256);
    }
  }
  *(float *)(this + 1196) = *(float *)(this + 1196) - v6;
}
