int __thiscall sub_1021F3A0(int this, int a2, int a3)
{
  int result; // eax
  int v4; // [esp+0h] [ebp-4h]

  result = *(unsigned __int8 *)(this + 46);
  v4 = *(unsigned __int8 *)(this + 45);
  *(float *)(this + 48) = (double)*(unsigned __int8 *)(this + 44) * 0.0039215689;
  *(float *)(this + 52) = (double)v4 * 0.0039215689;
  *(float *)(this + 56) = 0.0039215689 * (double)result;
  return result;
}
