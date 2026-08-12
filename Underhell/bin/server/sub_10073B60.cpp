int __thiscall sub_10073B60(int this, int a2)
{
  _DWORD *v3; // edi
  bool v4; // zf
  char *v6; // ebx
  char *v7; // eax
  int *v8; // ebx
  int v9; // eax
  int v10; // edi
  int *v11; // eax
  int *v12; // ecx
  int v13; // eax
  int v14; // edi
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // ecx
  float *v19; // eax
  char *v20; // [esp+28h] [ebp+8h]

  v3 = (_DWORD *)(this + 800);
  *(_DWORD *)(this + 800) = *(_DWORD *)(this + 260);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)(this + 804) = *(float *)(this + 580);
  *(float *)(this + 808) = *(float *)(this + 584);
  *(float *)(this + 812) = *(float *)(this + 588);
  v4 = *(_DWORD *)(this + 844) == 0;
  *(_DWORD *)(this + 820) = -1;
  if ( v4 )
    *(_DWORD *)(this + 844) = 1;
  if ( !*(_DWORD *)(this + 848) )
    *(_DWORD *)(this + 848) = 3;
  if ( *(char **)(this + 92) == "info_hint" || (unsigned __int8)sub_100D6240("info_hint") )
  {
    if ( *(_WORD *)(this + 816) )
      sub_10070220(v3, a2);
    else
      Warning(
        "info_hint (HammerID: %d, position (%.2f, %.2f, %.2f)) with no hint type.\n",
        *(_DWORD *)(this + 852),
        *(float *)(this + 804),
        *(float *)(this + 808),
        *(float *)(this + 812));
    sub_1025FAE0(this);
    return -1;
  }
  else
  {
    v6 = 0;
    if ( (*(char **)(this + 92) == "info_node_hint"
       || (unsigned __int8)sub_100D6240("info_node_hint")
       || *(char **)(this + 92) == "info_node_air_hint"
       || (unsigned __int8)sub_100D6240("info_node_air_hint"))
      && (*(_WORD *)(this + 816) || *(_DWORD *)(this + 824) || *v3) )
    {
      *(_DWORD *)(this + 820) = dword_10693080;
      v7 = sub_10070220(v3, a2);
      v8 = (int *)(v7 + 248);
      v20 = v7;
      v9 = *((_DWORD *)v7 + 62);
      v10 = v9 | *(_DWORD *)(this + 248);
      if ( v9 != v10 )
      {
        v11 = v8 - 62;
        if ( *((_BYTE *)v8 - 164) )
        {
          *((_BYTE *)v11 + 88) |= 1u;
        }
        else
        {
          v12 = (int *)v11[6];
          if ( v12 )
            sub_100194B0(v12, 248);
        }
        *v8 = v10;
      }
      v6 = v20;
    }
    if ( !byte_1069362C || (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0) )
    {
      ++dword_10693080;
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v14 = sub_10085070(this + 580, *(float *)(this + 708));
      *(_DWORD *)(v14 + 96) = v6;
      v15 = *(_DWORD *)(*(_DWORD *)(dword_10693628 + 804) + 12);
      if ( v15 )
        *(_DWORD *)(v15 + 4 * *(_DWORD *)v14) = *(_DWORD *)(this + 852);
      v16 = *(_DWORD **)(dword_10693628 + 804);
      v17 = *(_DWORD *)(this + 852);
      if ( *v16 <= v17 )
        *v16 = v17 + 1;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0) )
      {
        v18 = *(_DWORD *)(*(_DWORD *)(dword_10693628 + 804) + 4);
        if ( v18 )
        {
          v19 = (float *)(v18 + 12 * *(_DWORD *)v14);
          *v19 = *(float *)(v14 + 4);
          v19[1] = *(float *)(v14 + 8);
          v19[2] = *(float *)(v14 + 12);
        }
      }
      if ( *(char **)(this + 92) == "info_node_air"
        || (unsigned __int8)sub_100D6240("info_node_air")
        || *(char **)(this + 92) == "info_node_air_hint"
        || (unsigned __int8)sub_100D6240("info_node_air_hint") )
      {
        *(_DWORD *)(v14 + 60) = 3;
      }
      else if ( *(char **)(this + 92) == "info_node_climb" || (unsigned __int8)sub_100D6240("info_node_climb") )
      {
        *(_DWORD *)(v14 + 60) = 4;
      }
      else
      {
        *(_DWORD *)(v14 + 60) = 2;
      }
      *(_DWORD *)(v14 + 64) = 32 * *(_DWORD *)(this + 248);
      if ( (*(_DWORD *)(this + 236) & 0x1000000) != 0 )
      {
        sub_10086130(*(_DWORD *)(dword_10693628 + 804));
        *(_DWORD *)(v14 + 64) |= 0x20000000u;
        sub_100889E0(dword_106935D8, v14);
      }
      sub_1025FAE0(this);
      return -1;
    }
    else
    {
      if ( v6 )
      {
        if ( dword_10693080 < 0 || dword_10693080 >= *(_DWORD *)(dword_106935D8 + 4) )
        {
          ++dword_10691DE0;
        }
        else
        {
          v13 = *(_DWORD *)(*(_DWORD *)(dword_106935D8 + 8) + 4 * dword_10693080);
          if ( v13 )
          {
            *(_DWORD *)(v13 + 96) = v6;
            ++dword_10693080;
            sub_1025FAE0(this);
            return -1;
          }
        }
        DevMsg("AI node graph corrupt\n");
      }
      ++dword_10693080;
      sub_1025FAE0(this);
      return -1;
    }
  }
}
