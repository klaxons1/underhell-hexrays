int __thiscall sub_1001CD90(int this)
{
  int v1; // edx
  int result; // eax
  int v3; // edx

  *(float *)(this + 268) = 0.0;
  *(float *)(this + 272) = 0.0;
  *(float *)(this + 276) = 0.0;
  *(float *)(this + 280) = 0.0;
  *(float *)(this + 284) = 0.0;
  *(float *)(this + 288) = 0.0;
  *(float *)(this + 292) = 0.0;
  *(float *)(this + 240) = *(float *)(this + 40);
  *(float *)(this + 244) = *(float *)(this + 44);
  *(float *)(this + 248) = *(float *)(this + 48);
  v1 = *(_DWORD *)(this + 56);
  *(_DWORD *)(this + 252) = *(_DWORD *)(this + 52);
  *(float *)(this + 68) = 0.0;
  result = *(_DWORD *)(this + 60);
  *(float *)(this + 92) = 0.0;
  *(_DWORD *)(this + 256) = v1;
  v3 = *(_DWORD *)(this + 64);
  *(_DWORD *)(this + 260) = result;
  *(_DWORD *)(this + 264) = v3;
  *(_BYTE *)(this + 124) = 0;
  return result;
}
