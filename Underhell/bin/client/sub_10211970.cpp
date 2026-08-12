int __thiscall sub_10211970(int this, int a2, int a3)
{
  int v3; // eax
  int v4; // edx
  double v5; // st6
  int result; // eax
  double v7; // st6
  int v8; // edx
  int v9; // [esp+0h] [ebp-4h]
  int v10; // [esp+0h] [ebp-4h]
  int v11; // [esp+0h] [ebp-4h]

  v3 = *(unsigned __int8 *)(this + 70);
  v9 = *(unsigned __int8 *)(this + 69);
  v4 = *(unsigned __int8 *)(this + 72);
  *(float *)(this + 44) = (double)*(unsigned __int8 *)(this + 68) * 0.0039215689;
  v5 = (double)v9;
  v10 = v3;
  result = *(unsigned __int8 *)(this + 73);
  *(float *)(this + 48) = v5 * 0.0039215689;
  v7 = (double)v10;
  v11 = v4;
  v8 = *(unsigned __int8 *)(this + 74);
  *(float *)(this + 52) = v7 * 0.0039215689;
  *(float *)(this + 56) = (double)v11 * 0.0039215689;
  *(float *)(this + 60) = (double)result * 0.0039215689;
  *(float *)(this + 64) = 0.0039215689 * (double)v8;
  return result;
}
