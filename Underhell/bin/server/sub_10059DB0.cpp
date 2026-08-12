void __thiscall sub_10059DB0(int this, int a2)
{
  int v2; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  void (__thiscall ***v9)(_DWORD, int); // ecx
  void (__thiscall ***v10)(_DWORD, _DWORD); // ecx
  int v11; // eax
  int v12; // [esp+8h] [ebp-6Ch]
  float v13; // [esp+8h] [ebp-6Ch]
  float v14[12]; // [esp+14h] [ebp-60h] BYREF
  _DWORD v15[12]; // [esp+44h] [ebp-30h] BYREF

  v2 = *(_DWORD *)a2;
  if ( *(int *)a2 > 100000 )
  {
    switch ( v2 )
    {
      case 100001:
        sub_100589B0(this);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
        break;
      case 100002:
        if ( -1.0 != *(float *)(this + 84) )
          *(float *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 2604) + 20) = *(float *)(this + 84);
        goto LABEL_13;
      case 100003:
        if ( *(_BYTE *)(this + 123) )
        {
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
        }
        else
        {
          sub_10058F40(this, "TLK_LEAD_ARRIVAL");
          v10 = *(void (__thiscall ****)(_DWORD, _DWORD))(this + 64);
          if ( v10 )
            (**v10)(v10, 0);
          *(_BYTE *)(this + 123) = 1;
        }
        break;
      case 100004:
        sub_10058F40(this, "TLK_LEAD_SUCCESS");
        v9 = *(void (__thiscall ****)(_DWORD, int))(this + 64);
        if ( v9 )
          (**v9)(v9, 2);
        break;
      case 100005:
        sub_10042450(v14, (float *)(this + 88), -1, -1.0, 0, dword_10604640);
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(*(_DWORD *)(this + 4) + 2588)
                                                                         + 20))(
                *(_DWORD *)(*(_DWORD *)(this + 4) + 2588),
                v14,
                0) )
          goto LABEL_15;
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
        break;
      case 100006:
        if ( sub_1004C220((_DWORD **)this, 32) )
        {
          sub_10058F40(this, "TLK_LEAD_ATTRACTPLAYER");
          if ( sub_10022CA0(*(_DWORD **)(this + 4), 49) )
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1416))(*(_DWORD *)(this + 4), 49);
        }
        else
        {
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1416))(*(_DWORD *)(this + 4), 1);
        }
        goto LABEL_41;
      case 100007:
        v12 = *(_DWORD *)(this + 4);
        (*(void (**)(void))(*(_DWORD *)v12 + 1656))();
        if ( sub_100AC750(v12) <= *(float *)(dword_106B31C8 + 12) )
          sub_10058F40(this, "TLK_LEAD_MISSING_WEAPON");
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1416))(*(_DWORD *)(this + 4), 1);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
        break;
      case 100008:
        *(_BYTE *)(this + 122) = 1;
        sub_10058F40(this, "TLK_LEAD_START");
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1416))(*(_DWORD *)(this + 4), 1);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
        break;
      case 100009:
        if ( *(_BYTE *)(this + 122) )
        {
          sub_1004BD30(this, 13, *(float *)(this + 108));
        }
        else
        {
          v13 = *(float *)(this + 104) - 24.0;
          sub_1004BD30(this, 13, v13);
        }
        break;
      case 100010:
        if ( *(int *)(dword_106B31C8 + 20) <= 1 )
          v11 = sub_10261B20();
        else
          v11 = 0;
        sub_10043F70((float *)(this + 144), v11, 24.0);
        sub_1004BD30(this, 123, 0.0);
        break;
      case 100011:
        if ( *(_BYTE *)(this + 120)
          && ((unsigned __int8)sub_1004B510((void *)this, 100007, 0)
           || (unsigned __int8)sub_1004B510((void *)this, 100000, 0)
           || (unsigned __int8)sub_1004B510((void *)this, 100012, 0)
           || (unsigned __int8)sub_1004B510((void *)this, 100003, 0)) )
        {
          sub_1004BD30(this, 48, 0.0);
        }
        else
        {
          sub_1004BD30(this, 49, 0.0);
        }
        break;
      default:
        goto LABEL_53;
    }
  }
  else if ( *(_DWORD *)a2 == 100000 )
  {
    v5 = *(_DWORD *)(this + 72);
    v6 = *(_DWORD *)(this + 76);
    *(float *)&v15[8] = -1.0;
    v7 = *(_DWORD *)(this + 80);
    *(float *)&v15[9] = -1.0;
    v15[1] = v5;
    memset(&v15[4], 255, 16);
    v15[2] = v6;
    v8 = *(_DWORD *)(this + 4);
    v15[3] = v7;
    v15[11] = dword_10604640;
    v15[0] = 4;
    v15[10] = 0;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)(v8 + 2588) + 20))(
           *(_DWORD *)(v8 + 2588),
           v15,
           0) )
    {
LABEL_41:
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
    }
    else
    {
LABEL_15:
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 4) + 1312))(*(_DWORD *)(this + 4), "NO PATH");
    }
  }
  else if ( v2 == 92 )
  {
    sub_1004B450((_BYTE *)this, a2);
    if ( *(_DWORD *)(*(_DWORD *)(this + 4) + 2324) == 3 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
    if ( sub_10020E90(*(_DWORD **)(this + 4))
      && !*(_DWORD *)(this + 48)
      && *(float *)(dword_106B31C8 + 12) - *(float *)(*(_DWORD *)(this + 4) + 2144) > 0.3 )
    {
LABEL_13:
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
    }
  }
  else if ( v2 == 124 )
  {
    sub_1004B450((_BYTE *)this, a2);
    if ( (unsigned __int8)sub_1004B510((void *)this, 100001, 0) )
    {
      if ( 1.0 == *(float *)(a2 + 4) )
      {
        v4 = sub_10058980((_DWORD *)this);
        sub_1007DF80(v4);
      }
    }
  }
  else
  {
LABEL_53:
    sub_1004B450((_BYTE *)this, a2);
  }
}
