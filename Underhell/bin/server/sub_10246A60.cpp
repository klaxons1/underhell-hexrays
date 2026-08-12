int __thiscall sub_10246A60(int this)
{
  int result; // eax

  result = *(_DWORD *)(this + 248);
  if ( (result & 0x40) != 0 )
  {
    *(float *)(this + 840) = 0.0;
    *(float *)(this + 844) = 0.0;
    *(float *)(this + 848) = 1.0;
  }
  else
  {
    if ( (result & 0x80u) == 0 )
    {
      *(float *)(this + 840) = 0.0;
      *(float *)(this + 844) = 1.0;
    }
    else
    {
      *(float *)(this + 840) = 1.0;
      *(float *)(this + 844) = 0.0;
    }
    *(float *)(this + 848) = 0.0;
  }
  return result;
}
