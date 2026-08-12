float *sub_1024D150()
{
  int v0; // edi
  int v1; // eax
  float *v2; // esi
  double v3; // st7
  double v4; // st6
  float v6; // [esp+0h] [ebp-34h]
  float v7; // [esp+4h] [ebp-30h]
  float v8[4]; // [esp+10h] [ebp-24h] BYREF
  float v9; // [esp+20h] [ebp-14h]
  float v10; // [esp+24h] [ebp-10h]
  float v11; // [esp+2Ch] [ebp-8h]
  float v12; // [esp+30h] [ebp-4h]

  v0 = sub_10261B20();
  v1 = sub_10280AC0();
  v2 = (float *)v1;
  if ( v0 )
  {
    if ( !v1 )
      Error("Test_RandomPlayerPosition: no world entity.");
  }
  else
  {
    Error("Test_RandomPlayerPosition: no local player entity.");
  }
  v3 = v2[202];
  v9 = v2[203];
  v10 = v2[204];
  v4 = v2[205];
  v11 = v2[206];
  v12 = v2[207];
  v7 = v4;
  v6 = v3;
  v8[0] = RandomFloat(LODWORD(v6), LODWORD(v7));
  v8[1] = RandomFloat(LODWORD(v9), LODWORD(v11));
  v8[2] = RandomFloat(LODWORD(v10), LODWORD(v12));
  return sub_101E24D0(v0, v8);
}
