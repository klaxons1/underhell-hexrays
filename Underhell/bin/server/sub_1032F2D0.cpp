int __usercall sub_1032F2D0@<eax>(int a1@<ecx>, double a2@<st0>)
{
  float *v4; // eax
  float v5[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( sub_10023D10((_DWORD *)a1, 74) )
    return 92;
  if ( sub_1032ECA0((_DWORD *)a1) )
    return sub_10092C60(a1, a2);
  if ( *(_DWORD *)(a1 + 2324) == 2 )
  {
    if ( !sub_10023D10((_DWORD *)a1, 11)
      && !sub_10023D10((_DWORD *)a1, 30)
      && (!sub_10023D10((_DWORD *)a1, 31) || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 2288))(a1)) )
    {
      return sub_10092C60(a1, a2);
    }
    sub_10023E00((char *)a1, 11);
    sub_10023E00((char *)a1, 31);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 2324) != 3 )
      return sub_10092C60(a1, a2);
    if ( sub_10023D10((_DWORD *)a1, 26) )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
      {
        v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
        v5[0] = *(float *)(a1 + 716) - v4[179];
        v5[1] = *(float *)(a1 + 720) - v4[180];
        a2 = *(float *)(a1 + 724) - v4[181];
        v5[2] = a2;
        sub_100D7A40(v5);
        if ( a2 >= *(float *)(dword_106E5A0C + 44) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 2288))(a1) )
            return 93;
        }
      }
    }
    if ( !sub_10023D10((_DWORD *)a1, 11)
      && (!sub_10023D10((_DWORD *)a1, 31) || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 2288))(a1)) )
    {
      if ( sub_10023D10((_DWORD *)a1, 73) )
        return 90;
      return sub_10092C60(a1, a2);
    }
  }
  return 95;
}
