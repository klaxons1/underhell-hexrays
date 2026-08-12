void *__thiscall sub_101A1DA0(void *this)
{
  double v2; // st7
  void *result; // eax
  int *v4; // ecx

  sub_103431B0();
  *(_DWORD *)this = &CNPC_Ace::`vftable';
  *((_DWORD *)this + 526) = &CNPC_Ace::`vftable';
  *((_DWORD *)this + 905) = &CNPC_Ace::`vftable';
  *((_DWORD *)this + 913) = &CNPC_Ace::`vftable';
  *((_WORD *)this + 2504) = 0;
  *((_DWORD *)this + 1253) = 0;
  v2 = *(float *)(dword_106B31C8 + 12);
  *((_BYTE *)this + 4173) = 1;
  *((float *)this + 1254) = v2;
  *((_DWORD *)this + 202) = 9;
  result = this;
  if ( *((_DWORD *)this + 212) != 1 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        sub_100194B0(v4, 848);
    }
    *((_DWORD *)this + 212) = 1;
    result = this;
  }
  *((_DWORD *)this + 202) = 9;
  return result;
}
