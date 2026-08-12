float *__thiscall sub_1014ECE0(int this, float *a2)
{
  float v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v3[0] = *(float *)(this + 716) + *(float *)(this + 844);
  v3[1] = *(float *)(this + 720) + *(float *)(this + 848);
  v3[2] = *(float *)(this + 724) + *(float *)(this + 852);
  return sub_100D8E00((_DWORD *)this, v3, a2);
}
