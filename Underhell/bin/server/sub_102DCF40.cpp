void __thiscall sub_102DCF40(int this)
{
  double v2; // st7
  char Buffer[256]; // [esp+4h] [ebp-100h] BYREF

  if ( *(float *)(this + 5664) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    v2 = *(float *)(dword_106B31C8 + 12) + 60.0;
    Buffer[0] = 0;
    *(float *)(this + 5664) = v2;
    sub_1001E280(Buffer, "#Valve_Hint_Ladder");
    sub_102600F0((int *)this, (int)Buffer);
  }
}
