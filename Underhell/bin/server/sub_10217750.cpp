int __thiscall sub_10217750(int this)
{
  int result; // eax
  int *v3; // ecx

  if ( *(int *)(this + 804) >= 90 || (result = this + 812, *(int *)(this + 812) < 0) )
  {
    if ( *(_DWORD *)(this + 800) == *(_DWORD *)(this + 808) )
    {
      dword_106C2BE4 = *(_DWORD *)(this + 800);
    }
    else
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          sub_100194B0(v3, 800);
      }
      result = *(_DWORD *)(this + 808);
      *(_DWORD *)(this + 800) = result;
      dword_106C2BE4 = result;
    }
  }
  else
  {
    sub_10284580(this + 812);
    result = *(_DWORD *)(this + 800);
    dword_106C2BE4 = result;
  }
  return result;
}
