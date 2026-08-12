int __thiscall sub_10192140(float *this)
{
  double v1; // st7
  float v3; // [esp+4h] [ebp-10h]
  float v4; // [esp+8h] [ebp-Ch]
  float v5; // [esp+Ch] [ebp-8h]

  v1 = this[303] + this[301];
  v4 = v1 + 1.0;
  v3 = v1;
  v5 = sub_100260E0(*((float *)off_103DC81C + 3), v3, v4, 1.0, 0.0);
  return sub_101EE8F0(v5, 0.75);
}
