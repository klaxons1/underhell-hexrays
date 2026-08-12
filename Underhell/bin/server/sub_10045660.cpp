int __usercall sub_10045660@<eax>(int a1@<ecx>, double a2@<st0>)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  int *v7; // ecx
  unsigned int v8; // eax
  int v9; // edi
  unsigned int v10; // eax
  const char *v11; // eax
  int result; // eax

  if ( sub_10023D10((_DWORD *)a1, 62) )
  {
    *(float *)(a1 + 552) = 1.0;
    sub_101C73D0(0);
    return 78;
  }
  else
  {
    switch ( *(_DWORD *)(a1 + 2324) )
    {
      case 0:
        DevWarning(2, "NPC_STATE IS NONE!\n");
        result = 81;
        break;
      case 1:
        v2 = *(_DWORD *)(a1 + 2484);
        if ( v2 != -1 )
        {
          v3 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 2484) & 0xFFF) + 1];
          v4 = v2 >> 12;
          if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 2484) & 0xFFF) + 2] == v4 )
          {
            if ( *v3 )
            {
              if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 2484) & 0xFFF) + 2] == v4 )
                v5 = *v3;
              else
                v5 = 0;
              goto LABEL_15;
            }
          }
        }
        result = sub_100444C0(a1);
        if ( !result )
        {
          if ( sub_10023D10((_DWORD *)a1, 50)
            || sub_10023D10((_DWORD *)a1, 53)
            || sub_10023D10((_DWORD *)a1, 54)
            || sub_10023D10((_DWORD *)a1, 56)
            || sub_10023D10((_DWORD *)a1, 55) )
          {
            result = 6;
          }
          else
          {
            result = (sub_1007E000(*(_DWORD *)(a1 + 2588)) != 0) + 1;
          }
        }
        break;
      case 2:
        v6 = *(_DWORD *)(a1 + 2484);
        if ( v6 != -1
          && (v7 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 2484) & 0xFFF) + 1],
              v8 = v6 >> 12,
              off_1061BE18[4 * (*(_DWORD *)(a1 + 2484) & 0xFFF) + 2] == v8)
          && *v7 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 2484) & 0xFFF) + 2] == v8 )
            v5 = *v7;
          else
            v5 = 0;
LABEL_15:
          sub_100218B0((_DWORD *)a1, v5);
          result = (*(_DWORD *)(a1 + 2520) == -1) + 85;
        }
        else
        {
          result = sub_100444C0(a1);
          if ( !result )
          {
            if ( !sub_10023D10((_DWORD *)a1, 30) || sub_100BDCE0(112) == -1 )
            {
              if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 1528))(a1, 0)
                && sub_10023D10((_DWORD *)a1, 53) )
              {
                result = 7;
              }
              else if ( sub_10023D10((_DWORD *)a1, 50)
                     || sub_10023D10((_DWORD *)a1, 55)
                     || sub_10023D10((_DWORD *)a1, 54)
                     || sub_10023D10((_DWORD *)a1, 56)
                     || sub_10023D10((_DWORD *)a1, 53) )
              {
                result = 6;
              }
              else
              {
                v9 = dword_106B31C8;
                (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1868))(a1);
                if ( *(float *)(v9 + 12) - sub_10077680(800, 1) >= 3.0 )
                  result = 9;
                else
                  result = 5;
              }
            }
            else
            {
              result = 8;
            }
          }
        }
        break;
      case 3:
        result = sub_100450F0((_DWORD *)a1, a2);
        break;
      case 4:
        v10 = *(_DWORD *)(a1 + 2688);
        if ( v10 != -1
          && off_1061BE18[4 * (*(_DWORD *)(a1 + 2688) & 0xFFF) + 2] == v10 >> 12
          && off_1061BE18[4 * (*(_DWORD *)(a1 + 2688) & 0xFFF) + 1] )
        {
          result = 56;
        }
        else
        {
          v11 = *(const char **)(a1 + 92);
          if ( !v11 )
            v11 = String;
          DevWarning(2, "Script failed for %s\n", v11);
          sub_10033F30((_DWORD *)a1);
          result = 1;
        }
        break;
      case 6:
        result = 1;
        break;
      case 7:
        Msg("NPC DEAD STATE \n");
        result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1360))(a1);
        break;
      default:
        DevWarning(2, "Invalid State for SelectSchedule!\n");
        result = 81;
        break;
    }
  }
  return result;
}
