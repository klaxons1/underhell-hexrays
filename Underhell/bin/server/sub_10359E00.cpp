unsigned __int8 __thiscall sub_10359E00(int this)
{
  int v2; // ecx
  int v3; // ecx
  unsigned __int8 result; // al

  sub_1002AD10(this);
  if ( !*(_BYTE *)(this + 5024)
    && *(_DWORD *)(this + 2324) == 1
    && (sub_10023D10((_DWORD *)this, 56)
     || sub_10023D10((_DWORD *)this, 50)
     || sub_10023D10((_DWORD *)this, 57)
     || sub_10023D10((_DWORD *)this, 53)
     || sub_10023D10((_DWORD *)this, 54)
     || sub_10023D10((_DWORD *)this, 55)) )
  {
    *(_BYTE *)(this + 5024) = 1;
    if ( sub_10023D10((_DWORD *)this, 72) )
    {
      sub_10023E00((char *)this, 72);
      v2 = this + 4244;
      if ( *(_BYTE *)(this + 4976) )
        sub_100AC410(v2, "COMBINEPRISONGUARD_SPOTTEDFLASHLIGHT", -1, 0);
      else
        sub_100AC410(v2, "COMBINE_SPOTTEDFLASHLIGHT", -1, 0);
    }
    else if ( *(_DWORD *)(this + 216) == *(_DWORD *)(this + 220) )
    {
      v3 = this + 4244;
      if ( *(_BYTE *)(this + 4976) )
        sub_100AC410(v3, "COMBINEPRISONGUARD_HEARDSOUND", -1, 0);
      else
        sub_100AC410(v3, "COMBINE_HEARDSOUND", -1, 0);
    }
  }
  result = sub_10023D10((_DWORD *)this, 50);
  if ( result )
  {
    result = sub_10023D10((_DWORD *)this, 57);
    if ( result )
    {
      result = sub_10023FE0((_DWORD *)this, 50);
      if ( result )
        return (unsigned __int8)sub_10023E00((char *)this, 57);
    }
  }
  return result;
}
