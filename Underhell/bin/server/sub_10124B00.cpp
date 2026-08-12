int __thiscall sub_10124B00(int this)
{
  int v2; // edx
  int result; // eax
  float v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v4[0] = *(float *)(this + 800);
  v4[1] = *(float *)(this + 804);
  v4[2] = *(float *)(this + 808);
  sub_10422220(v4, this + 800);
  sub_10112C00(this + 320, 0);
  result = sub_100E0970(this, v2, 0, 0);
  *(_DWORD *)(this + 816) = 0;
  return result;
}
