int __thiscall sub_101241E0(float *this)
{
  int result; // eax
  float v3; // [esp+4h] [ebp-8h]

  v3 = (*((float *)off_103DC81C + 3) - this[314]) * this[304];
  sub_10123E50(this, v3);
  LOBYTE(result) = sub_10011260((int *)this, *((float *)off_103DC81C + 3), 0);
  this[314] = *((float *)off_103DC81C + 3);
  return result;
}
