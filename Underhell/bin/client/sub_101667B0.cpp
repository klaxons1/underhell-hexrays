int __cdecl sub_101667B0(int a1)
{
  int v1; // eax
  float v3[3]; // [esp+24h] [ebp-1Ch] BYREF
  float v4[3]; // [esp+30h] [ebp-10h] BYREF
  int v5; // [esp+3Ch] [ebp-4h] BYREF

  sub_1022A940("originx", 0.0);
  v3[0] = 0.0;
  sub_1022A940("originy", 0.0);
  v3[1] = 0.0;
  sub_1022A940("originz", 0.0);
  v3[2] = 0.0;
  sub_1022A940("directionx", 0.0);
  v4[0] = 0.0;
  sub_1022A940("directiony", 0.0);
  v4[1] = 0.0;
  sub_1022A940("directionz", 0.0);
  v4[2] = 0.0;
  sub_1022AA10((int)&v5, "color");
  v1 = sub_1022A800("size", 0);
  return sub_10166610(a1, COERCE_INT(0.0), v3, v4, (unsigned __int8)v5, BYTE1(v5), BYTE2(v5), HIBYTE(v5), v1);
}
