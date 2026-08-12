void __thiscall sub_1036AFF0(int this)
{
  int v2; // ebx
  char *v3; // ebx
  char *v4; // ebx
  int v5; // eax
  _DWORD *v6; // edi
  int v7; // edi
  _BYTE v8[44]; // [esp+10h] [ebp-5Ch] BYREF
  float v9; // [esp+3Ch] [ebp-30h]
  int v10; // [esp+64h] [ebp-8h]
  float *v11; // [esp+68h] [ebp-4h]
  int savedregs; // [esp+6Ch] [ebp+0h] BYREF

  if ( *(_BYTE *)(this + 3656) )
  {
    v2 = *(_DWORD *)(this + 420);
    v11 = (float *)sub_10073730(*(_DWORD *)(this + 1676));
    v10 = (int)sub_10073710(*(_DWORD *)(this + 1676));
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_100231A0(
      (int)&savedregs,
      this,
      (float *)(this + 580),
      (float *)(this + 580),
      (float *)v10,
      v11,
      1174421507,
      this,
      v2,
      (int)v8);
    if ( 1.0 == v9 )
    {
      sub_10023CB0((char *)this, 25);
      sub_10023CB0((char *)this, 76);
      if ( *(_DWORD *)(dword_106E8164 + 48) == 1 )
      {
        v3 = sub_10073730(*(_DWORD *)(this + 1676));
        v10 = (int)sub_10073710(*(_DWORD *)(this + 1676));
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        sub_1011BB20(this + 580, v10, (int)v3, 0, 255, 0, 1, 1.0);
      }
    }
    else if ( *(_DWORD *)(dword_106E8164 + 48) == 1 )
    {
      v4 = sub_10073730(*(_DWORD *)(this + 1676));
      v10 = (int)sub_10073710(*(_DWORD *)(this + 1676));
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_1011BB20(this + 580, v10, (int)v4, 255, 0, 0, 1, 0.1);
    }
  }
  else
  {
    sub_100397D0((int *)this);
    if ( !*(_BYTE *)(this + 224) && *(_BYTE *)(this + 447) > 1u )
      sub_10023CB0((char *)this, 73);
    sub_10023E00((char *)this, 74);
    v5 = sub_101C5260((_DWORD *)this);
    v6 = (_DWORD *)v5;
    if ( (*(_BYTE *)(this + 256) & 1) != 0 )
    {
      if ( v5 )
      {
        if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v5 + 24)) )
        {
          if ( !*(_BYTE *)(this + 3672)
            && ((*(unsigned __int8 (__thiscall **)(_DWORD *))(*v6 + 284))(v6)
             || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v6 + 320))(v6)
             || (v7 = v6[106]) != 0 && ((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 76))(v7) & 4) != 0) )
          {
            sub_10023CB0((char *)this, 74);
          }
        }
      }
    }
  }
}
