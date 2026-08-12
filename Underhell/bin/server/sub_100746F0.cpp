int __thiscall sub_100746F0(int this)
{
  int result; // eax

  result = *(_DWORD *)(this + 204);
  *(float *)(this + 200) = -1.0;
  *(float *)(result + 48) = -1.0;
  *(_BYTE *)(result + 16) = 0;
  *(float *)(result + 4) = 3.4028235e38;
  *(float *)(result + 8) = 3.4028235e38;
  *(float *)(result + 12) = 3.4028235e38;
  *(_BYTE *)(result + 44) = 0;
  *(float *)(result + 20) = 0.0;
  *(float *)(result + 36) = 3.4028235e38;
  *(float *)(result + 40) = 3.4028235e38;
  return result;
}
