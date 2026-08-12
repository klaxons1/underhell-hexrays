int __thiscall sub_10188DA0(float *this)
{
  float *v1; // eax
  float *v2; // ecx
  float v3; // edx
  float v5; // [esp+4h] [ebp-8h]

  v1 = this + 203;
  this[200] = this[179];
  v2 = this + 206;
  *(v2 - 5) = *(v2 - 26);
  *(v2 - 4) = *(v2 - 25);
  *v1 = *(v2 - 24);
  v1[1] = *(v2 - 23);
  v1[2] = *(v2 - 22);
  v5 = v1[1];
  v3 = v1[2];
  *v1 = *v1;
  v1[1] = v5;
  v1[2] = v3;
  return sub_10423260(v1, v2);
}
