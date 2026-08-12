void __thiscall sub_1036DBD0(int this)
{
  int v2; // edx
  bool v3; // zf
  int *v4; // ecx
  int *v5; // ecx
  float *v6; // eax
  float v7[3]; // [esp+10h] [ebp-Ch] BYREF

  *(_DWORD *)(this + 1676) = 3;
  sub_10027A90(this, 0);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_100E0970(this, v2, 3, 0);
  sub_100EBE30(this, 27);
  v7[0] = 6.0;
  v7[1] = 0.0;
  v7[2] = 11.0;
  sub_100DC4E0((float *)this, v7);
  sub_100CF450((_DWORD *)this, 2);
  v3 = (*(_DWORD *)(this + 248) & 0x10000) == 0;
  *(float *)(this + 1684) = 0.5;
  *(_DWORD *)(this + 2324) = 0;
  *(_DWORD *)(this + 3624) = 5;
  if ( v3 )
  {
    *(_BYTE *)(this + 3656) = 0;
    goto LABEL_16;
  }
  *(_BYTE *)(this + 3656) = 1;
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  if ( *(_BYTE *)(this + 119) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 116);
    }
    *(_BYTE *)(this + 119) = 0;
  }
  if ( *(_BYTE *)(this + 113) == 2 )
    goto LABEL_14;
  if ( !*(_BYTE *)(this + 84) )
  {
    v5 = *(int **)(this + 24);
    if ( v5 )
      sub_100194B0(v5, 113);
    *(_BYTE *)(this + 113) = 2;
LABEL_14:
    sub_100EAB80((_DWORD *)this, 32);
    goto LABEL_16;
  }
  *(_BYTE *)(this + 88) |= 1u;
  *(_BYTE *)(this + 113) = 2;
  sub_100EAB80((_DWORD *)this, 32);
LABEL_16:
  sub_100204A0((_DWORD *)this);
  sub_10020460((_DWORD *)this, 131073);
  sub_10020460((_DWORD *)this, 0x4000000);
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
  sub_100756C0(v6, 5.0);
  *(float *)(this + 3676) = -1.0;
  *(_BYTE *)(this + 3672) = 0;
}
