int __thiscall sub_10378B00(int this)
{
  int v2; // eax
  _DWORD *v3; // ebx
  int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // edi
  int v10; // edi
  double v11; // st7
  bool v12; // [esp+23h] [ebp-1h]

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  v3 = (_DWORD *)v2;
  if ( !v2 )
    return *(_DWORD *)(dword_106E91D4 + 48) != 0 ? 9 : 102;
  if ( *(_DWORD *)(dword_106E8A84 + 48) )
    return sub_10023D10((_DWORD *)this, 22) ? 89 : 12;
  v5 = *(_DWORD *)(v2 + 92);
  if ( v5 != dword_106E8514 && v5 != dword_106E8510 )
  {
    v12 = sub_10373BA0((int)v3);
    if ( v12 )
    {
      if ( sub_10023D10((_DWORD *)this, 23) )
        return 90;
      if ( sub_10023D10((_DWORD *)this, 26) )
      {
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
        v7 = sub_100773C0(v6, (int)v3, 0);
        v8 = *(_DWORD **)(this + 2796);
        if ( v8 )
        {
          if ( v7 && *(float *)(v7 + 48) == *(float *)(v7 + 32) )
          {
            sub_100B1890(v8, dword_106E8544, 0, this);
            return 108;
          }
        }
      }
    }
    if ( sub_10023D10((_DWORD *)this, 84) )
      return 109;
    if ( v12 && sub_10023D10((_DWORD *)this, 76) )
    {
      if ( *(_DWORD *)(dword_106E8F4C + 48)
        || (v9 = *(_DWORD *)(dword_106E8F04 + 48),
            (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 100) < v9) )
      {
        if ( *(_DWORD *)(dword_106E8F4C + 48) || sub_1004AFF0((_DWORD *)this, 8) )
          return 106;
      }
    }
    if ( sub_10023D10((_DWORD *)this, 22) )
    {
      v10 = *(_DWORD *)(dword_106E891C + 48);
      if ( sub_10377EB0((void *)this) < v10 )
      {
        sub_10377F20((float *)this, *(float *)(dword_106E8964 + 44), *(float *)(dword_106E89AC + 44), 1);
        return 89;
      }
    }
    if ( sub_101C5260(v3) == this )
      return 90;
    if ( sub_10023D10((_DWORD *)this, 38) )
      return 25;
    if ( sub_10023D10((_DWORD *)this, 18) && *(float *)(this + 4212) < (double)*(float *)(dword_106B31C8 + 12) )
    {
      v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              1.0,
              3.0);
      result = 98;
      *(float *)(this + 4212) = v11 + *(float *)(dword_106B31C8 + 12);
      return result;
    }
    if ( v12 )
    {
      if ( sub_10023D10((_DWORD *)this, 76) && sub_1004AFF0((_DWORD *)this, 8) )
        return 106;
      if ( sub_103712F0((_DWORD *)this) > 1 && sub_1004AE20((_DWORD *)this, 9, 9) )
        return 95;
    }
    if ( sub_10023D10((_DWORD *)this, 13)
      || sub_10023D10((_DWORD *)this, 27)
      || sub_10023D10((_DWORD *)this, 39)
      || sub_10023D10((_DWORD *)this, 40) )
    {
      return 92;
    }
    else
    {
      return sub_10023D10((_DWORD *)this, 83) ? 35 : 96;
    }
  }
  if ( *(float *)(dword_106B31C8 + 12) - flt_106E84A4 > 10.0 )
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_Hunter.DefendStrider", 0.0, 0);
    flt_106E84A4 = *(float *)(dword_106B31C8 + 12);
  }
  if ( sub_10023D10((_DWORD *)this, 22) || sub_10023D10((_DWORD *)this, 40) )
    return 89;
  else
    return 35;
}
