int __usercall sub_10113E80@<eax>(float *a1@<eax>, float *a2@<ecx>, float *a3@<edi>, int a4@<esi>, int a5)
{
  double v5; // st6
  double v6; // st5
  float v8[3]; // [esp+4h] [ebp-18h] BYREF
  float v9; // [esp+10h] [ebp-Ch] BYREF
  float v10; // [esp+14h] [ebp-8h]
  float v11; // [esp+18h] [ebp-4h]

  v5 = a2[1] + a1[1];
  v6 = a2[2] + a1[2];
  v8[0] = (*a2 + *a1) * 0.5;
  v8[1] = v5 * 0.5;
  v8[2] = 0.5 * v6;
  sub_104227F0(a5);
  sub_10421C00(v8, a4, &v9);
  v9 = *a3 + v9;
  v10 = a3[1] + v10;
  v11 = a3[2] + v11;
  return sub_10421D00(&v9, 3, a4);
}
