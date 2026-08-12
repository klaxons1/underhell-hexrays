int __thiscall sub_1038EF60(int this)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // edi
  int v10; // ebx
  _DWORD *v11; // eax
  int (__thiscall *v12)(int); // eax
  double v13; // st7
  char v14; // bl
  int v15; // [esp+18h] [ebp-Ch] BYREF
  float v16; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+20h] [ebp-4h]

  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
    && sub_10023D10((_DWORD *)this, 1)
    && *(int *)(dword_106B31C8 + 20) <= 1
    && sub_10261B20() )
  {
    v2 = *(int *)(dword_106B31C8 + 20) <= 1 ? sub_10261B20() : 0;
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 264))(v2) )
      return 74;
  }
  if ( sub_10023D10((_DWORD *)this, 73) )
  {
    sub_100AC410(this + 5160, "METROPOLICE_ON_FIRE", -1, 0);
    return 98;
  }
  if ( sub_10023D10((_DWORD *)this, 77) )
  {
    sub_10023E00((char *)this, 77);
    if ( *(_BYTE *)(this + 4892) && sub_102A8560(this + 4876)
      || (v4 = sub_101679A0((int)"gordon_precriminal"), sub_10167A00(v4) != 1) )
    {
      v5 = sub_101679A0((int)"gordon_precriminal");
      if ( sub_10167A00(v5) == 1 )
        sub_100AC410(this + 5160, "METROPOLICE_IDLE_HARASS_PLAYER", -1, 0);
    }
    else
    {
      sub_100AC410(this + 5160, "METROPOLICE_HIT_BY_PHYSOBJECT", -1, 0);
      *(_DWORD *)(this + 4364) = 3;
      sub_1038B180((float *)this);
    }
  }
  result = sub_100444C0(this);
  if ( !result )
  {
    if ( sub_10389B80((_DWORD *)this) )
    {
      if ( !*(_BYTE *)(this + 4312) )
        goto LABEL_92;
      if ( !sub_10389BD0((_DWORD *)this) && !sub_100697A0((_DWORD *)this, 116, 1) )
        return 116;
      if ( !*(_BYTE *)(this + 4312) )
      {
LABEL_92:
        if ( sub_10389BD0((_DWORD *)this) && !sub_100697A0((_DWORD *)this, 117, 1) )
          return 117;
      }
      if ( *(_DWORD *)(dword_106E9FB4 + 48) && (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
      {
        LOBYTE(v16) = 0;
        v15 = 4;
        sub_10057630(this + 4924, &v15);
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
        sub_100577F0(this + 4924, v6, 0);
      }
    }
    if ( !*(_BYTE *)(this + 4892) || !sub_102A8560(this + 4876) )
    {
      v7 = sub_101679A0((int)"gordon_precriminal");
      if ( sub_10167A00(v7) == 1 )
      {
        if ( !*(_BYTE *)(this + 2680) && (sub_10023D10((_DWORD *)this, 75) || *(_BYTE *)(this + 4341)) )
        {
          if ( *(int *)(this + 4368) < 3 || sub_10018CD0((float *)(this + 4348), &flt_106F1CA8) )
          {
            sub_10023E00((char *)this, 75);
            *(_BYTE *)(this + 4341) = 0;
            return sub_1038B160((float *)this);
          }
        }
        else if ( *(_DWORD *)(this + 4368)
               && *(_DWORD *)(this + 2324) != 3
               && sub_1001F080((float *)(this + 4348), &flt_106F1CA8)
               && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 4344) )
        {
          return 119;
        }
      }
    }
    if ( sub_10023D10((_DWORD *)this, 57) && *(float *)(this + 4320) + 4.0 <= *(float *)(dword_106B31C8 + 12) )
    {
      *(float *)(this + 4320) = *(float *)(dword_106B31C8 + 12);
      return 80;
    }
    if ( sub_10023D10((_DWORD *)this, 50) )
    {
      v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1460))(this, 1048351);
      v9 = (_DWORD *)v8;
      if ( v8 )
      {
        if ( (*(_BYTE *)(v8 + 16) & 8) != 0 )
        {
          sub_10389FF0((int *)this, (_DWORD *)v8);
          return 28;
        }
        if ( !sub_10023D10((_DWORD *)this, 10) && (v9[4] & 0x2005) != 0 )
        {
          v10 = *(_DWORD *)(this + 2604);
          v11 = sub_1023CC80(v9);
          sub_10078690(v10, (int)v11, 0.0, 0.0);
        }
      }
    }
    v12 = *(int (__thiscall **)(int))(*(_DWORD *)this + 448);
    v17 = *(_DWORD *)(this + 220);
    v16 = (float)v17;
    v17 = v12(this);
    v13 = v16 / (double)v17;
    if ( v13 <= 0.75 )
    {
      v14 = 0;
      if ( !sub_10389B80((_DWORD *)this)
        && sub_100CF460((_DWORD *)this)
        && *(int *)(sub_100CF460((_DWORD *)this) + 1200) <= 5 )
      {
        sub_100AC410(this + 5160, "METROPOLICE_COVER_LOW_AMMO", 0, 2);
        return 50;
      }
    }
    else
    {
      v14 = 1;
    }
    if ( sub_10023D10((_DWORD *)this, 4) )
    {
      if ( v14 )
      {
        return 51;
      }
      else
      {
        sub_10388C20((_DWORD *)this);
        return 50;
      }
    }
    else
    {
      if ( *(_DWORD *)(this + 2324) == 3 )
      {
        v13 = *(float *)(dword_106B31C8 + 12);
        if ( v13 < *(float *)(this + 4344) )
          return 17;
      }
      if ( !sub_1032ECA0((_DWORD *)this) )
      {
        if ( *(_BYTE *)(this + 4342) && !sub_10389500((_BYTE *)this) )
          return 20;
        switch ( *(_DWORD *)(this + 2324) )
        {
          case 1:
            result = sub_10389780(this);
            if ( result )
              return result;
            break;
          case 2:
            result = sub_10389780(this);
            if ( result )
              return result;
            break;
          case 3:
            if ( sub_1038A110((void *)this) && sub_100CF660((_DWORD *)this, (int)"weapon_smg1", 0) )
            {
              result = sub_1038EEF0((_DWORD *)this, v14, 3);
              if ( result )
                return result;
            }
            else
            {
              result = sub_1038EC60(this, v14, 3);
              if ( result )
                return result;
            }
            break;
        }
      }
      if ( *(_DWORD *)(this + 2324) == 3 )
        return sub_10092C60(this, v13);
      if ( !sub_1001F080((float *)(this + 4348), &flt_106F1CA8) )
        return sub_10092C60(this, v13);
      v13 = *(float *)(dword_106B31C8 + 12);
      if ( v13 <= *(float *)(this + 4344) )
        return sub_10092C60(this, v13);
      else
        return 119;
    }
  }
  return result;
}
