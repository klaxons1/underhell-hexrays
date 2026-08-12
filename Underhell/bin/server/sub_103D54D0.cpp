int __thiscall sub_103D54D0(int this)
{
  int v2; // edx
  int v3; // eax
  int v4; // ecx
  unsigned __int16 *v5; // eax
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  int result; // eax
  _DWORD v10[3]; // [esp+1Ch] [ebp-Ch] BYREF

  j_nullsub_4((void *)this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/effects/combineball.mdl");
  if ( sub_103D2530((_DWORD *)this) )
    sub_100EBE30(this, 32);
  else
    sub_100EBE30(this, 23);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v2 = *(_DWORD *)(this + 480);
  v3 = *(_DWORD *)(this + 484);
  v10[0] = *(_DWORD *)(this + 476);
  v4 = *(_DWORD *)(this + 424);
  v10[1] = v2;
  v10[2] = v3;
  (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v4 + 196))(v4, v10, 0);
  *(float *)(this + 1136) = -1.0;
  *(_BYTE *)(this + 1140) = 0;
  *(_WORD *)(this + 1143) = 1;
  *(_BYTE *)(this + 1145) = 0;
  sub_100EAB80((_DWORD *)this, 16);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v5 = (unsigned __int16 *)sub_10286F30("sprites/combineball_trail_black_1.vmt", (float *)(this + 580), 0);
  *(_DWORD *)(this + 1152) = v5;
  if ( v5 )
  {
    sub_100EACE0(v5, this, 1);
    sub_10128950(*(_DWORD *)(this + 1152), 5, 0, 0, 0, 255, 0);
    sub_10287300(*(_DWORD *)(this + 1152), *(float *)(this + 1180));
    sub_10287440(*(_DWORD *)(this + 1152), 0.0);
    sub_102872B0(*(_DWORD *)(this + 1152), 0.1);
    sub_10242060(*(int **)(this + 1152));
  }
  if ( *(_BYTE *)(this + 1176) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 1176);
    }
    *(_BYTE *)(this + 1176) = 1;
  }
  if ( *(_BYTE *)(this + 1177) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 1177);
    }
    *(_BYTE *)(this + 1177) = 0;
  }
  if ( *(_BYTE *)(this + 1178) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 1178);
    }
    *(_BYTE *)(this + 1178) = 0;
  }
  *(_WORD *)(this + 1141) = 0;
  result = dword_106B31C8;
  *(float *)(this + 1160) = *(float *)(dword_106B31C8 + 12);
  return result;
}
