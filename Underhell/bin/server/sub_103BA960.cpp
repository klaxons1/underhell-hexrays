int __usercall sub_103BA960@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int v3; // esi
  int result; // eax
  char v5; // cl
  int v6; // eax
  int v7; // eax
  int v8; // edi

  if ( *(_DWORD *)(dword_106EB054 + 48) )
  {
    v3 = *(_DWORD *)(a1 + 3640);
    *(float *)(v3 + 36) = 0.0;
    *(_BYTE *)(v3 + 4) = 0;
    *(float *)(v3 + 32) = 0.0;
    *(float *)(v3 + 48) = 0.0;
    *(float *)(v3 + 44) = 0.0;
    return 1;
  }
  v5 = *(_BYTE *)(a1 + 3865);
  v6 = *(_DWORD *)(a1 + 3640);
  *(_BYTE *)(v6 + 4) = v5;
  if ( !v5 )
  {
    a2 = 0.0;
    *(float *)(v6 + 36) = 0.0;
    *(float *)(v6 + 32) = 0.0;
    *(float *)(v6 + 48) = 0.0;
    *(float *)(v6 + 44) = 0.0;
  }
  v7 = *(_DWORD *)(a1 + 2324);
  if ( v7 == 4 )
    return sub_10045660(a1, a2);
  if ( *(_BYTE *)(a1 + 224) == 1 )
    return 1;
  if ( v7 == 7 )
    return 98;
  if ( sub_103B0AB0((_DWORD *)a1) )
    sub_103BA5E0((void *)a1);
  if ( sub_10023D10((_DWORD *)a1, 75) )
  {
    a2 = sub_100BE820(a1, dword_106EAD9C) - 200.0;
    if ( a2 > 145.0 )
      return 90;
  }
  if ( sub_10023D10((_DWORD *)a1, 76) && !*(_BYTE *)(a1 + 3860) )
  {
    a2 = sub_100BE820(a1, dword_106EAD9C) - 200.0;
    if ( a2 < 145.0 )
      return 91;
  }
  if ( sub_10023D10((_DWORD *)a1, 22) )
    return 89;
  if ( sub_1001ED60((float *)(a1 + 3804)) && sub_10023D10((_DWORD *)a1, 79) )
  {
    result = 103;
    *(float *)(a1 + 3804) = *(float *)(dword_106B31C8 + 12) + 5.0;
  }
  else if ( *(_DWORD *)(a1 + 2324) == 3 )
  {
    if ( !sub_10023D10((_DWORD *)a1, 26)
      && sub_1026A890((unsigned int *)(a1 + 3796))
      && ((a2 = *(float *)(a1 + 3660), a2 < *(float *)(dword_106B31C8 + 12)) || sub_10023D10((_DWORD *)a1, 73)) )
    {
      return 95;
    }
    else if ( sub_10023D10((_DWORD *)a1, 75) )
    {
      return 90;
    }
    else if ( sub_10023D10((_DWORD *)a1, 76) )
    {
      return 91;
    }
    else if ( sub_10023D10((_DWORD *)a1, 23) )
    {
      return 41;
    }
    else if ( sub_10023D10((_DWORD *)a1, 21) )
    {
      return 88;
    }
    else
    {
      sub_10023E00((char *)a1, 80);
      if ( sub_1001ED60((float *)(a1 + 3932)) || (v8 = sub_10045660(a1, a2), v8 == 12) && sub_10022C70((_DWORD *)a1) )
      {
        if ( !sub_10022C70((_DWORD *)a1) )
          return sub_10045660(a1, a2);
        return 97;
      }
      else
      {
        return v8;
      }
    }
  }
  else
  {
    return sub_10022C70((_DWORD *)a1) != 0 ? 97 : 1;
  }
  return result;
}
