int __thiscall sub_103CC4B0(int this)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int *v6; // edi
  int v7; // eax

  if ( *(float *)(this + 5020) != flt_106F1CA8
    || *(float *)(this + 5024) != flt_106F1CAC
    || *(float *)(this + 5028) != flt_106F1CB0 )
  {
    return 0;
  }
  if ( *(_BYTE *)(this + 2680) && !*(_BYTE *)(this + 5753) )
  {
    if ( *(_DWORD *)(this + 5732) )
      sub_103CAFE0(this, COERCE_FLOAT(1));
    return 0;
  }
  v3 = *(_DWORD *)(this + 5720);
  if ( v3 == -1 )
    return 0;
  v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 5720) & 0xFFF) + 1];
  v5 = v3 >> 12;
  if ( off_1061BE18[4 * (*(_DWORD *)(this + 5720) & 0xFFF) + 2] != v5 || !*v4 )
    return 0;
  if ( off_1061BE18[4 * (*(_DWORD *)(this + 5720) & 0xFFF) + 2] != v5
    || (v6 = (int *)*v4) == 0
    || !(*(unsigned __int8 (__thiscall **)(int *))(*v6 + 320))(v6) )
  {
    v6 = 0;
  }
  if ( sub_103C7C10(v6, 0.15000001) || !sub_10023D10((_DWORD *)this, 18) )
  {
    v7 = *(_DWORD *)(this + 5732);
    if ( v7 == 2 || v7 == 1 || !sub_10023D10((_DWORD *)this, 83) )
    {
      if ( sub_10023D10((_DWORD *)this, 80) || sub_10023D10((_DWORD *)this, 81) )
      {
        return 103;
      }
      else
      {
        if ( !sub_10023D10((_DWORD *)this, 82) && !sub_10023D10((_DWORD *)this, 83) )
          return 0;
        return 102;
      }
    }
    else
    {
      return 100;
    }
  }
  else
  {
    sub_103CAFE0(this, COERCE_FLOAT(1));
    return 0;
  }
}
