int __thiscall sub_100FBA20(int this)
{
  int result; // eax
  int v3; // edi
  double v4; // st6
  double v5; // st5
  double ArgList; // [esp+4h] [ebp-218h]
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    if ( 0.0 == *(float *)(this + 800) )
    {
      if ( *(float *)(this + 804) == 0.0 )
        v5 = *(float *)(this + 808);
      else
        v5 = *(float *)(this + 804);
      v4 = *(float *)(this + 108) * v5;
    }
    else
    {
      v4 = *(float *)(this + 108) * *(float *)(this + 800);
    }
    ArgList = v4;
    sub_10429A00(Buffer, 0x200u, "Speed cur (target): %3.2f (%3.2f)", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v3 + 1;
  }
  return result;
}
