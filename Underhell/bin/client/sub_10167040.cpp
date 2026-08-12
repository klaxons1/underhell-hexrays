void __cdecl sub_10167040(int a1)
{
  int v1; // eax
  float v2[3]; // [esp+24h] [ebp-1Ch] BYREF
  float v3[3]; // [esp+30h] [ebp-10h] BYREF
  int v4; // [esp+3Ch] [ebp-4h] BYREF

  sub_1022A940("originx", 0.0);
  v2[0] = 0.0;
  sub_1022A940("originy", 0.0);
  v2[1] = 0.0;
  sub_1022A940("originz", 0.0);
  v2[2] = 0.0;
  sub_1022A940("directionx", 0.0);
  v3[0] = 0.0;
  sub_1022A940("directiony", 0.0);
  v3[1] = 0.0;
  sub_1022A940("directionz", 0.0);
  v3[2] = 0.0;
  sub_1022AA10((int)&v4, "color");
  v1 = sub_1022A800("amount", 0);
  sub_10166BA0(a1, COERCE_INT(0.0), v2, v3, (unsigned __int8)v4, BYTE1(v4), BYTE2(v4), HIBYTE(v4), v1);
}
