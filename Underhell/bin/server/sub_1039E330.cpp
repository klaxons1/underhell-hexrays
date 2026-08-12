int __thiscall sub_1039E330(int this)
{
  double v3; // st7

  if ( *(_BYTE *)(this + 3838) )
    return 97;
  if ( *(_BYTE *)(this + 3825) )
  {
    if ( sub_10023D10((_DWORD *)this, 26) || sub_10023D10((_DWORD *)this, 17) )
      return 91;
    else
      return 90;
  }
  else
  {
    if ( *(_BYTE *)(this + 3808) )
      return 9;
    v3 = *(float *)(dword_106B31C8 + 12);
    if ( v3 < *(float *)(this + 3804) || sub_1026A890((unsigned int *)(this + 3812)) )
    {
      return 9;
    }
    else if ( sub_10023D10((_DWORD *)this, 8) )
    {
      return 92;
    }
    else if ( *(_DWORD *)(this + 2324) == 3 )
    {
      return 89 - sub_10023D10((_DWORD *)this, 21);
    }
    else
    {
      sub_10023E00((char *)this, 62);
      return sub_10045660(this, v3);
    }
  }
}
