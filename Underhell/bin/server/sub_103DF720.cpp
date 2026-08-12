int __thiscall sub_103DF720(int this, int a2)
{
  int v3; // ecx
  int result; // eax

  sub_10267C40((unsigned int *)this, a2);
  v3 = this - 1484;
  if ( *(float *)(this - 1036) < 3.4028235e38 )
    *(float *)(v3 + 448) = 3.4028235e38;
  sub_1023C380((_DWORD *)v3, (int)"Airboat_engine_start", 0.0, (int)&a2);
  sub_10144F50(this - 360);
  result = dword_106B31C8;
  *(float *)(this + 376) = *(float *)(dword_106B31C8 + 12) + *(float *)&a2 - 0.1;
  return result;
}
