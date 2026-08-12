void __thiscall sub_101EF2F0(_DWORD *this, unsigned int a2)
{
  double v3; // st7
  int v4; // eax
  double v5; // st6
  double v6; // st7
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int *v10; // ecx
  int *v11; // ecx
  float v12; // [esp+0h] [ebp-50h]
  char Destination[64]; // [esp+10h] [ebp-40h] BYREF

  if ( (this[63] & 0x1000) != 0 )
    sub_100DAFD0((int)this);
  v12 = *((float *)this + 120) * *((float *)this + 120) + *((float *)this + 119) * *((float *)this + 119);
  v3 = off_10689708(v12);
  v4 = this[64];
  v5 = 0.0;
  if ( (v4 & 0x60) != 0 )
  {
    v6 = 0.0;
  }
  else
  {
    switch ( a2 )
    {
      case 2u:
        v7 = 31;
        goto LABEL_7;
      case 3u:
        v7 = 32;
        goto LABEL_7;
      case 4u:
        if ( *((_BYTE *)this + 224) )
          goto LABEL_49;
        v7 = (*(int (__thiscall **)(_DWORD *))(*this + 1020))(this);
        goto LABEL_16;
      case 5u:
        v7 = this[841];
        if ( v7 != 27 && v7 != 29 && v7 != 31 && v7 != 32 && v7 != 21 )
        {
LABEL_17:
          if ( (this[64] & 2) != 0 )
            sub_104299C0(Destination, "crouch_shoot_", 0x40u);
          else
            sub_104299C0(Destination, "ref_shoot_", 0x40u);
          sub_10429750((int)Destination, (char *)this + 3317, 64, -1);
          v9 = sub_100BDF40((int)this, Destination);
          if ( v9 == -1 )
            v9 = 0;
          if ( (this[227] != v9 || !*((_BYTE *)this + 897)) && this[226] != COERCE_INT(0.0) )
          {
            if ( *((_BYTE *)this + 84) )
            {
              *((_BYTE *)this + 88) |= 1u;
            }
            else
            {
              v10 = (int *)this[6];
              if ( v10 )
                sub_100194B0(v10, 904);
            }
            *((float *)this + 226) = 0.0;
          }
          this[841] = 17;
          sub_100C3330((int)this, v9);
LABEL_58:
          if ( this[227] != v9 )
          {
            sub_100C3330((int)this, v9);
            if ( this[226] != COERCE_INT(0.0) )
            {
              if ( *((_BYTE *)this + 84) )
              {
                *((_BYTE *)this + 88) |= 1u;
                *((float *)this + 226) = 0.0;
              }
              else
              {
                v11 = (int *)this[6];
                if ( v11 )
                  sub_100194B0(v11, 904);
                *((float *)this + 226) = 0.0;
              }
            }
          }
          return;
        }
        goto LABEL_16;
    }
    if ( a2 > 1 )
      goto LABEL_49;
    v5 = v3;
    v6 = 0.0;
  }
  if ( (v4 & 1) != 0 || (v7 = this[841], v7 != 31) && v7 != 32 )
  {
    if ( *((_BYTE *)this + 447) <= 1u )
      goto LABEL_49;
    if ( v5 == v6 )
      v7 = 27;
    else
      v7 = 29;
    goto LABEL_7;
  }
LABEL_16:
  if ( v7 == 17 )
    goto LABEL_17;
  if ( v7 == 6 )
  {
LABEL_49:
    if ( this[841] != 17 || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 732))(this) )
    {
      if ( (this[64] & 2) != 0 )
        sub_104299C0(Destination, "crouch_aim_", 0x40u);
      else
        sub_104299C0(Destination, "ref_aim_", 0x40u);
      sub_10429750((int)Destination, (char *)this + 3317, 64, -1);
      v9 = sub_100BDF40((int)this, Destination);
      if ( v9 == -1 )
        v9 = 0;
      this[841] = 6;
    }
    else
    {
      v9 = this[227];
    }
    goto LABEL_58;
  }
LABEL_7:
  if ( this[841] != v7 )
  {
    this[841] = v7;
    v8 = sub_100BDCE0((int)this, v7);
    if ( this[227] != v8 )
    {
      sub_100C3330((int)this, v8);
      sub_10031B50((int)this, 0.0);
    }
  }
}
