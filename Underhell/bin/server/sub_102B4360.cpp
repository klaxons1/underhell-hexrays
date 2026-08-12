void __thiscall sub_102B4360(int this)
{
  int v2; // edx
  int *v3; // ecx
  int *v4; // ecx
  float v5; // [esp+Ch] [ebp-18h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_10112C00(this + 320, 2);
  sub_100E0970(this, v2, 3, 0);
  sub_100EA940((int *)this, 1024);
  sub_1002B660(this, 1);
  if ( *(_BYTE *)(this + 224) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 472))(this, this + 224);
    *(_BYTE *)(this + 224) = 0;
  }
  *(_DWORD *)(this + 3792) &= 0xFFFFFFFC;
  *(_DWORD *)(this + 3780) = 0;
  *(_DWORD *)(this + 3784) = 0;
  if ( *(_DWORD *)(this + 904) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 904);
    }
    *(float *)(this + 904) = 0.0;
  }
  sub_100C2AB0(this);
  sub_100EA940((int *)this, 0x2000);
  *(float *)(this + 3832) = 400.0;
  *(float *)(this + 3836) = 250.0;
  if ( *(_BYTE *)(this + 225) != 3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 3;
  }
  if ( (*(_BYTE *)(this + 248) & 0x40) != 0 )
  {
    if ( *(_DWORD *)(this + 3920) != COERCE_INT(3.4028235e38) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 3920);
      }
      *(float *)(this + 3920) = 3.4028235e38;
    }
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 2260))(this);
    v5 = *(float *)(dword_106B31C8 + 12) + 1.0;
    sub_100EC4A0((int *)this, v5, 0);
  }
  sub_100B6CC0(this, 0.0, 128.0, 256.0);
  sub_102B27A0((float *)(this + 3876), (float *)(this + 3888));
  sub_10112B00((_BYTE *)(this + 320), 3, (float *)(this + 3876), (float *)(this + 3888));
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 3);
  *(float *)(this + 3848) = -1.0;
  *(float *)(this + 3852) = 0.0;
  *(float *)(this + 3856) = 0.0;
  *(float *)(this + 3860) = 0.0;
}
