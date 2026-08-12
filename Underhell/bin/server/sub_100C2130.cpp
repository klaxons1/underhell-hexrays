void *__thiscall sub_100C2130(void *this)
{
  int *v2; // ecx
  double v3; // st7
  int *v4; // ecx
  int *v5; // ecx
  int v6; // eax
  int *v7; // ecx
  int v8; // ebx
  int *v9; // ecx
  int *v10; // ecx
  int *v11; // ecx
  int *v12; // ecx
  int *v13; // ecx
  int *v15; // ecx
  float v16; // [esp+Ch] [ebp-10h]
  float v17; // [esp+10h] [ebp-Ch]
  float v18; // [esp+14h] [ebp-8h]

  sub_100E33C0(0);
  *(_DWORD *)this = &CBaseAnimating::`vftable';
  *((_DWORD *)this + 260) = -1;
  *((_DWORD *)this + 261) = -1;
  *((_DWORD *)this + 272) = -1;
  *((_DWORD *)this + 269) = 0;
  *((_DWORD *)this + 273) = 5;
  *((_DWORD *)this + 276) = 0;
  *((_DWORD *)this + 277) = 0;
  *((_DWORD *)this + 278) = 0;
  *((_DWORD *)this + 279) = 0;
  *((_DWORD *)this + 202) = -1;
  if ( *((_BYTE *)this + 84) )
  {
    *((_BYTE *)this + 88) |= 1u;
  }
  else
  {
    v2 = (int *)*((_DWORD *)this + 6);
    if ( v2 )
      sub_100194B0(v2, 836);
  }
  v3 = 0.0;
  *((float *)this + 209) = 0.0;
  *((float *)this + 210) = 0.0;
  *((float *)this + 211) = 0.0;
  if ( *((_DWORD *)this + 208) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
      {
        sub_100194B0(v4, 832);
        v3 = 0.0;
      }
    }
    *((_DWORD *)this + 208) = 0;
  }
  if ( *((_BYTE *)this + 1024) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v5 = (int *)*((_DWORD *)this + 6);
      if ( v5 )
      {
        sub_100194B0(v5, 1024);
        v3 = 0.0;
      }
    }
    *((_BYTE *)this + 1024) = 0;
  }
  v6 = *((_DWORD *)this + 63);
  *((float *)this + 217) = v3;
  *((float *)this + 218) = v3;
  *((float *)this + 219) = v3;
  *((_DWORD *)this + 222) = 0;
  *((_DWORD *)this + 223) = 0;
  if ( (v6 & 0x800) != 0 )
  {
    sub_100DAE60(this);
    v3 = 0.0;
  }
  *((float *)this + 220) = *((float *)this + 147);
  *((float *)this + 221) = v3;
  if ( *((_DWORD *)this + 215) != COERCE_INT(1.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v7 = (int *)*((_DWORD *)this + 6);
      if ( v7 )
      {
        sub_100194B0(v7, 860);
        v3 = 0.0;
      }
    }
    *((float *)this + 215) = 1.0;
  }
  v8 = dword_106B31C8;
  if ( *((_DWORD *)this + 31) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v9 = (int *)*((_DWORD *)this + 6);
      if ( v9 )
      {
        sub_100194B0(v9, 124);
        v3 = 0.0;
      }
    }
    *((float *)this + 31) = *(float *)(v8 + 12);
  }
  *((float *)this + 30) = *(float *)(dword_106B31C8 + 12);
  if ( *((_DWORD *)this + 257) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v10 = (int *)*((_DWORD *)this + 6);
      if ( v10 )
      {
        sub_100194B0(v10, 1028);
        v3 = 0.0;
      }
    }
    *((_DWORD *)this + 257) = 0;
  }
  if ( *((_DWORD *)this + 258) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v11 = (int *)*((_DWORD *)this + 6);
      if ( v11 )
      {
        sub_100194B0(v11, 1032);
        v3 = 0.0;
      }
    }
    *((_DWORD *)this + 258) = 0;
  }
  *((_DWORD *)this + 264) = 0;
  v18 = v3;
  *((_DWORD *)this + 275) = 0;
  if ( *((_DWORD *)this + 266) != LODWORD(v18) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v12 = (int *)*((_DWORD *)this + 6);
      if ( v12 )
      {
        sub_100194B0(v12, 1064);
        v3 = 0.0;
      }
    }
    *((float *)this + 266) = v3;
  }
  v17 = v3;
  if ( *((_DWORD *)this + 267) != LODWORD(v17) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v13 = (int *)*((_DWORD *)this + 6);
      if ( v13 )
      {
        sub_100194B0(v13, 1068);
        v3 = 0.0;
      }
    }
    *((float *)this + 267) = v3;
  }
  v16 = v3;
  if ( *((_DWORD *)this + 268) == LODWORD(v16) )
  {
    *((_WORD *)this + 530) = 0;
    return this;
  }
  else if ( *((_BYTE *)this + 84) )
  {
    *((_BYTE *)this + 88) |= 1u;
    *((float *)this + 268) = v3;
    *((_WORD *)this + 530) = 0;
    return this;
  }
  else
  {
    v15 = (int *)*((_DWORD *)this + 6);
    if ( v15 )
    {
      sub_100194B0(v15, 1072);
      v3 = 0.0;
    }
    *((float *)this + 268) = v3;
    *((_WORD *)this + 530) = 0;
    return this;
  }
}
