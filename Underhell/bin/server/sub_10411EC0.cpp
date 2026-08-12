float *__userpurge sub_10411EC0@<eax>(float *a1@<ecx>, double a2@<st0>, float *a3)
{
  float *result; // eax
  _BYTE v5[12]; // [esp+4h] [ebp-24h] BYREF
  float v6[3]; // [esp+10h] [ebp-18h] BYREF
  float v7[3]; // [esp+1Ch] [ebp-Ch] BYREF

  sub_100BCCA0(a1, 2, (int)v5, (int)v7);
  sub_100C0010((int)a1, 1);
  v7[0] = a2 + a1[182];
  v7[2] = 0.0;
  sub_100C0010((int)a1, 0);
  v7[1] = a1[183] + 0.0;
  sub_10422220(v7, v6);
  result = a3;
  *a3 = v6[0];
  a3[1] = v6[1];
  a3[2] = v6[2];
  return result;
}
