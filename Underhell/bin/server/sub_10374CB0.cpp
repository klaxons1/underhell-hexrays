void __thiscall sub_10374CB0(int this, _DWORD *a2, int a3)
{
  if ( !*(_BYTE *)(this + 4245) && sub_10372250((void *)this, a2) )
  {
    *(_BYTE *)(this + 4245) = 1;
    sub_1001BA70((_DWORD *)this, "scenes/npc/hunter/hunter_eyeclose.vcd");
    *(float *)(this + 4248) = *(float *)(dword_106B31C8 + 12) + 0.2;
  }
}
