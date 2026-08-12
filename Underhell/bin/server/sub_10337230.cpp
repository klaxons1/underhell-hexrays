int __thiscall sub_10337230(int this)
{
  float *v2; // edi
  char v3; // al
  char v5; // al
  _DWORD *v6; // ecx
  int v7; // ebx
  int v8; // edi
  double v9; // st4
  double v10; // st7
  double v11; // st4
  double v12; // st5
  double v13; // st7
  int v14; // [esp+10h] [ebp-Ch] BYREF
  float v15; // [esp+14h] [ebp-8h]
  float v16; // [esp+18h] [ebp-4h]

  if ( sub_103364E0((_DWORD *)this) )
  {
    v2 = (float *)sub_1001FB30((float *)(this + 716), 480.0);
    if ( v2 )
    {
      if ( *(_DWORD *)(dword_106E613C + 48)
        && (*(const char **)(this + 260) == "griggs" || sub_100D6190((_DWORD *)this, "griggs"))
        && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1532))(this) )
      {
        v3 = sub_10023D10((_DWORD *)this, 79);
        if ( sub_10336830((float *)this, (int)v2, v3) )
        {
          sub_100218B0((_DWORD *)this, (int)v2);
          return 105;
        }
      }
      else if ( sub_1001FB30((float *)(this + 716), 360.0) )
      {
        v5 = sub_10023D10((_DWORD *)this, 79);
        if ( sub_10336540(this, v2, v5) )
        {
          sub_100218B0((_DWORD *)this, (int)v2);
          return 99;
        }
      }
    }
    v6 = *(_DWORD **)(this + 2796);
    if ( v6 )
    {
      v16 = 129600.0;
      v7 = 0;
      v8 = sub_100B1560(v6, &v14, 1);
      if ( v8 )
      {
        do
        {
          if ( v8 != this )
          {
            if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
              sub_100DAE60(v8);
            if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
              sub_100DAE60(this);
            v9 = *(float *)(this + 580) - *(float *)(v8 + 580);
            v10 = v9 * v9;
            v11 = *(float *)(this + 584) - *(float *)(v8 + 584);
            v12 = *(float *)(this + 588) - *(float *)(v8 + 588);
            v13 = v12 * v12 + v11 * v11 + v10;
            v15 = v13;
            if ( v13 < v16 )
            {
              if ( sub_10336540(this, (float *)v8, 0) )
              {
                v7 = v8;
                v16 = v15;
              }
            }
          }
          v8 = sub_100B1630(*(_DWORD **)(this + 2796), &v14, 1);
        }
        while ( v8 );
        if ( v7 )
        {
          sub_100218B0((_DWORD *)this, v7);
          return 99;
        }
      }
    }
  }
  else if ( sub_10023D10((_DWORD *)this, 79) )
  {
    DevMsg("Would say: sorry, need to recharge\n");
  }
  return 0;
}
