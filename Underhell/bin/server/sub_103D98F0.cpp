int __usercall sub_103D98F0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  int v5; // eax
  _DWORD *v6; // eax
  float *v7; // eax

  if ( sub_10023D10((_DWORD *)a1, 30) && *(_DWORD *)(dword_106ED2DC + 48) )
    sub_1023C380((_DWORD *)a1, (int)"NPC_Sniper.TargetDestroyed", 0.0, 0);
  if ( !*(_BYTE *)(a1 + 3644) )
    return 51;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v5 = sub_10261B20();
  else
    v5 = 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 264))(v5)
    && *(_BYTE *)(a1 + 3824)
    && sub_10023D10((_DWORD *)a1, 1) )
  {
    return 100;
  }
  if ( sub_10023D10((_DWORD *)a1, 50) )
  {
    sub_103D8D50(a1);
    v6 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1460))(a1, 1048351);
    if ( v6 )
    {
      if ( (v6[4] & 8) != 0 )
      {
        v7 = (float *)sub_1023CC80(v6);
        if ( sub_100DA7A0(a1, a2, a3, a1, v7, 16449, 0) )
        {
          if ( !sub_103D8590((void *)a1) )
            sub_1023C380((_DWORD *)a1, (int)"NPC_Sniper.HearDanger", 0.0, 0);
        }
      }
    }
    return 93;
  }
  else if ( *(_BYTE *)(a1 + 3645) )
  {
    if ( sub_10023D10((_DWORD *)a1, 78) )
    {
      if ( sub_1026A890((unsigned int *)(a1 + 3660))
        && (*(_DWORD *)(sub_1026A890((unsigned int *)(a1 + 3660)) + 248) & 2) != 0
        || *(_BYTE *)(a1 + 3788) )
      {
        return 97;
      }
      else
      {
        return 96;
      }
    }
    else if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) || sub_10023D10((_DWORD *)a1, 30) )
    {
      sub_100285C0((_DWORD *)a1, 0, 1);
      return 88;
    }
    else if ( sub_10023D10((_DWORD *)a1, 77) )
    {
      return 95;
    }
    else if ( sub_10023D10((_DWORD *)a1, 73) )
    {
      return 44;
    }
    else if ( sub_10023D10((_DWORD *)a1, 79) )
    {
      return 99;
    }
    else
    {
      return sub_10023D10((_DWORD *)a1, 21) ? 43 : 89;
    }
  }
  else
  {
    return 94;
  }
}
