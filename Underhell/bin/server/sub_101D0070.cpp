int __thiscall sub_101D0070(int this)
{
  double v2; // st7
  double v3; // st7
  int v4; // ebx
  int *v5; // ecx
  int *v6; // ecx
  _DWORD *v7; // ecx
  int v9; // eax
  float v10; // [esp+4h] [ebp-5Ch]
  int v11; // [esp+8h] [ebp-58h]
  _DWORD v12[20]; // [esp+10h] [ebp-50h] BYREF

  v2 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 5048);
  if ( v2 < 0.0 )
  {
    v11 = off_10638D58;
    v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
LABEL_21:
    v10 = v3;
    return sub_100EC3F0((_DWORD *)this, (int)sub_101D0070, v10, v11);
  }
  if ( v2 < *(float *)(this + 5052) )
  {
    v4 = (int)((1.0 - v2 / *(float *)(this + 5052)) * 255.0);
    if ( *(_BYTE *)(this + 113) != 2 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v5 = *(int **)(this + 24);
        if ( v5 )
          sub_100194B0(v5, 113);
      }
      *(_BYTE *)(this + 113) = 2;
    }
    if ( *(_BYTE *)(this + 119) != (_BYTE)v4 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 116);
      }
      *(_BYTE *)(this + 119) = v4;
    }
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(_DWORD **)(this + 24);
      if ( v7 )
      {
        *v7 |= 0x101u;
        *(_WORD *)(sub_10153460(v7) + 2) = 0;
      }
    }
    v3 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 12);
    v11 = off_10638D58;
    goto LABEL_21;
  }
  v9 = sub_10261B20();
  sub_10248110(v9, v9, 10000.0, 0, 0);
  sub_100D9E70((int *)this, this, v12);
  return sub_1025FAC0(this);
}
