int __thiscall sub_101920E0(float *this)
{
  float v2; // [esp+8h] [ebp-Ch]
  float v3; // [esp+Ch] [ebp-8h]

  v2 = this[301] + this[303];
  v3 = sub_100260E0(*((float *)off_103DC81C + 3), this[303], v2, 0.0, 1.0);
  return sub_101EE8F0(v3, 0.2);
}
