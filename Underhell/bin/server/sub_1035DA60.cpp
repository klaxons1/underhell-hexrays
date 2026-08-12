int __thiscall sub_1035DA60(int this)
{
  int result; // eax
  double v3; // st7
  double v4; // st7

  if ( sub_10023D10((_DWORD *)this, 76) )
    return 96;
  if ( sub_100223E0((_DWORD *)this) == 2 )
    return 89;
  if ( sub_10023D10((_DWORD *)this, 75) )
  {
    sub_10023E00((char *)this, 75);
    return 93;
  }
  if ( (*(_BYTE *)(this + 256) & 1) == 0 && *(float *)(dword_106B31C8 + 12) > 2.0 && !*(_BYTE *)(this + 3628)
    || sub_10023D10((_DWORD *)this, 17)
    || sub_10023D10((_DWORD *)this, 18) )
  {
    return 93;
  }
  v3 = *(float *)(dword_106B31C8 + 12);
  if ( v3 >= *(float *)(this + 3680) && (sub_10023D10((_DWORD *)this, 50) || sub_10023D10((_DWORD *)this, 53)) )
  {
    result = 93;
    *(float *)(this + 3680) = *(float *)(dword_106B31C8 + 12) + 10.0;
    return result;
  }
  if ( sub_10023D10((_DWORD *)this, 74) )
  {
    sub_10023E00((char *)this, 74);
LABEL_19:
    *(_DWORD *)(this + 3640) = 0;
    return 93;
  }
  if ( !sub_10023D10((_DWORD *)this, 73) )
    goto LABEL_28;
  v3 = *(float *)(dword_106B31C8 + 12);
  if ( v3 < *(float *)(this + 3680) )
    goto LABEL_28;
  sub_10023E00((char *)this, 73);
  if ( *(_BYTE *)(this + 3628) == 1 )
    goto LABEL_19;
  if ( *(float *)(this + 3636) > 400.0 )
    return 90;
  v3 = 300.0;
  if ( *(float *)(this + 3636) > 300.0 )
  {
    --*(_DWORD *)(this + 3640);
    return 91;
  }
  else
  {
LABEL_28:
    if ( (unsigned int)(*(_DWORD *)(this + 2324) - 1) > 2 || sub_100223E0((_DWORD *)this) == 2 )
    {
      return sub_10045660(this, v3);
    }
    else if ( *(_BYTE *)(this + 3628) == 1 || *(float *)(this + 3632) >= (double)*(float *)(dword_106B31C8 + 12) )
    {
      return 1;
    }
    else
    {
      v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             10.0,
             20.0);
      result = 88;
      *(float *)(this + 3632) = v4 + *(float *)(dword_106B31C8 + 12);
    }
  }
  return result;
}
