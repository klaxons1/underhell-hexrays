int __thiscall sub_10389540(int this, int a2)
{
  int result; // eax
  int v4; // ebx
  int v5; // eax

  result = sub_100C9AD0((_DWORD *)this, a2);
  v4 = result;
  if ( a2 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) == 1
      && (!*(_BYTE *)(this + 4892) || !sub_102A8560(this + 4876))
      && (v5 = sub_101679A0((int)"gordon_precriminal"), sub_10167A00(v5) == 1)
      && v4 == 1 )
    {
      if ( 0.0 == *(float *)(this + 4344) || *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 4344) )
        return 4;
      else
        return 1;
    }
    else
    {
      return v4;
    }
  }
  return result;
}
