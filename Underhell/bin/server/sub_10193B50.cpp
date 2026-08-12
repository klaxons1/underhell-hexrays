int __thiscall sub_10193B50(int this, int *a2)
{
  int result; // eax
  int v4; // ecx
  _DWORD *v5; // eax
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  result = sub_1025FC50();
  if ( result )
  {
    result = *(_DWORD *)(this + 1124);
    if ( result != 1 && !*(_BYTE *)(this + 1168) && result != 4 )
    {
      sub_10192560(this, (int)&savedregs);
      if ( *(_DWORD *)(this + 1088) || *(_DWORD *)(this + 1180) )
      {
        sub_1023C380((int)"EDIT_MARK.Enable", 0.0, 0);
        result = Msg("Area unmarked.\n");
        *(_DWORD *)(this + 1180) = 0;
        *(_DWORD *)(this + 1088) = 0;
        *(_DWORD *)(this + 1100) = 4;
      }
      else
      {
        result = *a2;
        if ( *a2 <= 1 )
        {
          if ( *(_DWORD *)(this + 1092) )
          {
            sub_1023C380((int)"EDIT_MARK.Disable", 0.0, 0);
            sub_10191EB0((_DWORD *)this, *(_DWORD *)(this + 1092));
            goto LABEL_16;
          }
          if ( *(_DWORD *)(this + 1172) )
          {
            sub_1023C380((int)"EDIT_MARK.Disable", 0.0, 0);
            sub_10191E80((_DWORD *)this, *(_DWORD *)(this + 1172));
            v5 = *(_DWORD **)(this + 1180);
            result = Msg(
                       "Marked Ladder is connected to %d Areas\n",
                       (v5[8] != 0) + (v5[9] != 0) + (v5[10] != 0) + (v5[11] != 0) + (v5[12] != 0));
            *(_DWORD *)(this + 1100) = 4;
            return result;
          }
        }
        else
        {
          result = a2[259];
          if ( result )
          {
            result = atoi((const char *)a2[259]);
            if ( result )
            {
              v4 = dword_10632630;
              if ( dword_10632630 != -1 )
              {
                while ( **(_DWORD **)(dword_10632624 + 12 * v4) != result )
                {
                  v4 = *(_DWORD *)(dword_10632624 + 12 * v4 + 8);
                  if ( v4 == -1 )
                  {
                    *(_DWORD *)(this + 1100) = 4;
                    return result;
                  }
                }
                result = *(_DWORD *)(dword_10632624 + 12 * v4);
                if ( result )
                {
                  sub_10191EB0((_DWORD *)this, *(_DWORD *)(dword_10632624 + 12 * v4));
LABEL_16:
                  result = Msg(
                             "Marked Area is connected to %d other Areas\n",
                             *(_DWORD *)(*(_DWORD *)(this + 1088) + 548)
                           + *(_DWORD *)(*(_DWORD *)(this + 1088) + 584)
                           + *(_DWORD *)(*(_DWORD *)(this + 1088) + 620)
                           + *(_DWORD *)(*(_DWORD *)(this + 1088) + 656));
                  *(_DWORD *)(this + 1100) = 4;
                  return result;
                }
              }
            }
          }
        }
      }
      *(_DWORD *)(this + 1100) = 4;
    }
  }
  return result;
}
