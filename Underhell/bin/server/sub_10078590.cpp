double __thiscall sub_10078590(int this)
{
  float v3; // [esp+0h] [ebp-Ch]
  float v4; // [esp+8h] [ebp-4h]

  v3 = *(float *)(this + 32) * *(float *)(this + 32)
     + *(float *)(this + 28) * *(float *)(this + 28)
     + *(float *)(this + 36) * *(float *)(this + 36);
  v4 = off_10689708(v3);
  return (((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 4) + 720))(*(_DWORD *)(this + 4)) + v4)
       * 0.5
       * *(float *)(this + 16);
}
