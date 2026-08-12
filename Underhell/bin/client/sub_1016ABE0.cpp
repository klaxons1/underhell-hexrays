void __cdecl sub_1016ABE0(int a1)
{
  int v1; // eax
  int v2[3]; // [esp+40h] [ebp-44h] BYREF
  int v3[3]; // [esp+4Ch] [ebp-38h] BYREF
  int v4[3]; // [esp+58h] [ebp-2Ch] BYREF
  int v5[3]; // [esp+64h] [ebp-20h] BYREF
  int v6; // [esp+7Ch] [ebp-8h] BYREF
  int v7; // [esp+80h] [ebp-4h] BYREF

  sub_1022A940("originx", 0.0);
  *(float *)v2 = 0.0;
  sub_1022A940("originy", 0.0);
  *(float *)&v2[1] = 0.0;
  sub_1022A940("originz", 0.0);
  *(float *)&v2[2] = 0.0;
  sub_1022A940("anglesx", 0.0);
  *(float *)v3 = 0.0;
  sub_1022A940("anglesy", 0.0);
  *(float *)&v3[1] = 0.0;
  sub_1022A940("anglesz", 0.0);
  *(float *)&v3[2] = 0.0;
  sub_1022A940("forcex", 0.0);
  *(float *)v4 = 0.0;
  sub_1022A940("forcey", 0.0);
  *(float *)&v4[1] = 0.0;
  sub_1022A940("forcez", 0.0);
  *(float *)&v4[2] = 0.0;
  sub_1022A940("forceposx", 0.0);
  *(float *)v5 = 0.0;
  sub_1022A940("forceposy", 0.0);
  *(float *)&v5[1] = 0.0;
  sub_1022A940("forceposz", 0.0);
  *(float *)&v5[2] = 0.0;
  sub_1022AA10((int)&v6, "frontcolor");
  sub_1022AA10((int)&v7, "backcolor");
  sub_1022A940("width", 0.0);
  sub_1022A940("height", 0.0);
  sub_1022A940("size", 0.0);
  v1 = sub_1022A800("surfacetype", 0);
  sub_1016AB00(
    a1,
    COERCE_INT(0.0),
    (float *)v2,
    (float *)v3,
    (float *)v4,
    (float *)v5,
    0.0,
    0.0,
    0.0,
    v1,
    v6,
    SBYTE1(v6),
    SBYTE2(v6),
    v7,
    SBYTE1(v7),
    SBYTE2(v7));
}
