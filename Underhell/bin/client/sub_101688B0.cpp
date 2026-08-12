int __cdecl sub_101688B0(int a1)
{
  int v1; // edi
  int v2; // eax
  int v4[3]; // [esp+30h] [ebp-1Ch] BYREF
  int v5; // [esp+48h] [ebp-4h] BYREF

  sub_1022A940("originx", 0.0);
  *(float *)v4 = 0.0;
  sub_1022A940("originy", 0.0);
  *(float *)&v4[1] = 0.0;
  sub_1022A940("originz", 0.0);
  *(float *)&v4[2] = 0.0;
  sub_1022A940("duration", 0.0);
  sub_1022AA10((int)&v5, "color");
  v1 = sub_1022A800("exponent", 0);
  sub_1022A940("radius", 0.0);
  sub_1022A940("decay", 0.0);
  v2 = sub_1022A800("lightindex", 0x10000000);
  return sub_10168680(a1, COERCE_INT(0.0), (float *)v4, v5, SBYTE1(v5), SBYTE2(v5), v1, 0.0, 0.0, 0.0, v2);
}
