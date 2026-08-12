int __usercall sub_10113F00@<eax>(float *a1@<eax>, float *a2@<ecx>, int a3@<esi>, int a4, int a5)
{
  double v5; // st6
  double v6; // st5
  float v8[3]; // [esp+4h] [ebp-18h] BYREF
  float v9; // [esp+10h] [ebp-Ch] BYREF
  float v10; // [esp+14h] [ebp-8h]
  float v11; // [esp+18h] [ebp-4h]

  v5 = a2[1] + a1[1];
  v6 = a2[2] + a1[2];
  v9 = (*a2 + *a1) * -0.5;
  v10 = v5 * -0.5;
  v11 = -0.5 * v6;
  sub_10422910(a5);
  sub_10421C00(a4, a3, v8);
  v9 = v9 - v8[0];
  v10 = v10 - v8[1];
  v11 = v11 - v8[2];
  return sub_10421D00(&v9, 3, a3);
}
