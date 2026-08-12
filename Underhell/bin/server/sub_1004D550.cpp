int __thiscall sub_1004D550(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  _DWORD *v7; // eax
  float *v8; // edi
  float *v9; // eax
  double v10; // st6
  double v11; // st5
  int v12; // ebx
  int v13; // edi
  double v14; // st6
  double v15; // st5
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax

  v2 = *(_DWORD *)(this + 20);
  if ( v2 == -1
    || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1], v4 = v2 >> 12, v3[1] != v4)
    || !*v3
    || (v3[1] != v4 ? (v5 = 0) : (v5 = *v3), !*(_DWORD *)(v5 + 848)) )
  {
    if ( sub_10023D10(*(_DWORD **)(this + 4), 67) )
      return 100008;
    if ( sub_10023D10(*(_DWORD **)(this + 4), 50) )
      return 28;
  }
  if ( sub_10023D10(*(_DWORD **)(this + 4), 23) )
    return 41;
  if ( sub_10023D10(*(_DWORD **)(this + 4), 4) )
    return 51;
  if ( !*(_BYTE *)(this + 36) )
    goto LABEL_21;
  if ( *(_BYTE *)(this + 37) )
  {
LABEL_22:
    v12 = sub_1026A890(this + 20);
    if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
      sub_100DAE60(v12);
    v13 = *(_DWORD *)(this + 4);
    if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
      sub_100DAE60(*(_DWORD *)(this + 4));
    v14 = *(float *)(v13 + 584) - *(float *)(v12 + 584);
    v15 = *(float *)(v13 + 580) - *(float *)(v12 + 580);
    if ( v15 * v15 + v14 * v14 > 1296.0 )
      *(_BYTE *)(this + 37) = 0;
    goto LABEL_28;
  }
  if ( sub_1004BE20(this) )
  {
LABEL_21:
    if ( !*(_BYTE *)(this + 37) )
      goto LABEL_28;
    goto LABEL_22;
  }
  v7 = (_DWORD *)sub_1026A890(this + 24);
  v8 = (float *)sub_10019640(v7);
  v9 = (float *)sub_1004BF30((_DWORD *)this);
  v10 = v9[1] - v8[1];
  v11 = *v9 - *v8;
  if ( v11 * v11 + v10 * v10 > 1296.0 )
  {
    *(_BYTE *)(this + 36) = 0;
    return 100000;
  }
LABEL_28:
  if ( *(_BYTE *)(this + 36) || sub_1004BE20(this) )
  {
    if ( *(_BYTE *)(this + 37) )
    {
      if ( sub_1004C220((_DWORD **)this, 4) )
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1644))(*(_DWORD *)(this + 4), 1004);
        return 50;
      }
      else if ( (*(_BYTE *)(sub_1026A890(this + 20) + 248) & 1) != 0 )
      {
        return 100009;
      }
      else if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4))
              && !sub_1004C220((_DWORD **)this, 13)
              || sub_100366D0(*(_DWORD **)(this + 4), 100007))
             && (!sub_1004C9E0((_DWORD *)this)
              || sub_1004C220((_DWORD **)this, 21)
              || sub_1004C220((_DWORD **)this, 22)
              || sub_1004C220((_DWORD **)this, 23)
              || sub_1004C220((_DWORD **)this, 24)
              || sub_1004C220((_DWORD **)this, 38)
              || sub_1004C220((_DWORD **)this, 40)) )
      {
        if ( sub_1004C220((_DWORD **)this, 10)
          && sub_1004C220((_DWORD **)this, 45)
          && !sub_1004C220((_DWORD **)this, 3)
          && (v19 = sub_10020820(*(_DWORD **)(this + 4))) != 0
          && *(int *)(v19 + 220) > 0
          && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 220))(*(_DWORD *)(this + 4)) == 9
          && (*(char **)(*(_DWORD *)(this + 4) + 92) == "npc_combine_s" || (unsigned __int8)sub_100D6240("npc_combine_s")) )
        {
          return 39;
        }
        else
        {
          return sub_1004B430((_DWORD **)this);
        }
      }
      else
      {
        return 100007;
      }
    }
    else
    {
      v16 = *(_DWORD *)(this + 32);
      v17 = *(_DWORD *)(this + 28);
      if ( v16 == v17 || v16 == 4 || v17 == 3 )
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1644))(*(_DWORD *)(this + 4), 1003);
        if ( sub_1026A890(this + 24) )
        {
          v18 = sub_1026A890(this + 24);
          if ( !sub_1004C0D0(v18) )
            sub_1004CBB0((void **)this);
        }
        if ( !sub_1004D370(this) )
          sub_1004BC40(*(_BYTE **)(this + 4));
        return 100003;
      }
      else if ( sub_1004C220((_DWORD **)this, 21) )
      {
        return 43;
      }
      else
      {
        if ( sub_1004C220((_DWORD **)this, 4) )
          return 51;
        if ( sub_1004C220((_DWORD **)this, 17) || sub_1004C220((_DWORD **)this, 18) )
        {
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1644))(*(_DWORD *)(this + 4), 1005);
          return 5;
        }
        else if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4))
               || sub_1004C220((_DWORD **)this, 21)
               || sub_1004C220((_DWORD **)this, 22)
               || sub_1004C220((_DWORD **)this, 13) )
        {
          sub_1004D370(this);
          return 100005;
        }
        else
        {
          return 12;
        }
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1644))(*(_DWORD *)(this + 4), 1002);
    return 100000;
  }
}
