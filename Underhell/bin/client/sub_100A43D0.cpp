int __usercall sub_100A43D0@<eax>(int a1@<esi>, int a2, int a3, int a4)
{
  _BYTE v5[12]; // [esp+4h] [ebp-18h] BYREF
  float v6; // [esp+10h] [ebp-Ch] BYREF
  float v7; // [esp+14h] [ebp-8h]
  float v8; // [esp+18h] [ebp-4h]

  sub_101EDAE0(a3, &v6, v5);
  v6 = v6 * -1.0;
  v7 = v7 * -1.0;
  v8 = -1.0 * v8;
  sub_100F2080(a1, a2);
  sub_100F2230(a1, a3, &v6, v5);
  return sub_100F1F50(a1, a4);
}
