void __thiscall sub_101E43B0(int this)
{
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  double v9; // st7
  int v10; // edx
  double v11; // st7
  int v12; // [esp+4h] [ebp-70h]
  float v13; // [esp+8h] [ebp-6Ch]
  int v14; // [esp+70h] [ebp-4h]

  if ( *(_BYTE *)(this + 306) == 8 )
  {
    v2 = *(_DWORD *)(this + 308);
    if ( v2 == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] != v2 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1] )
    {
      *(float *)(this + 4012) = *(float *)(dword_106B31C8 + 12) + 7.0;
      return;
    }
  }
  if ( *(int *)(this + 220) < 0 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 264))(this) )
    goto LABEL_21;
  if ( *(_BYTE *)(this + 447) != 3 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1452))(this) )
  {
    if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 4012) )
      sub_1023C380((int)"Player.DrownStart", 0.0, 0);
    v10 = *(_DWORD *)(this + 3520);
    v11 = *(float *)(dword_106B31C8 + 12) + 7.0;
    *(_DWORD *)(this + 4176) = 10;
    *(float *)(this + 4012) = v11;
    if ( v10 > *(_DWORD *)(this + 3524) )
    {
      *(_DWORD *)(this + 3464) = *(_DWORD *)(this + 3464) & 0xFFF7BFFF | 0x80000;
      *(_BYTE *)(this + 3540) = 0;
    }
LABEL_21:
    sub_100F68E0((int *)this);
    return;
  }
  *(_DWORD *)(this + 3464) &= ~0x80000u;
  v3 = *(_DWORD *)(this + 3464);
  *(_BYTE *)(this + 3540) = 0;
  if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(this + 4012) || (*(_DWORD *)(this + 256) & 0x4000) != 0 )
  {
    *(_DWORD *)(this + 3464) = v3 & 0xFFFFBFFF;
    sub_100F68E0((int *)this);
    return;
  }
  if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(this + 4016) )
    goto LABEL_21;
  if ( (int)++*(_DWORD *)(this + 4176) > 10 )
    *(_DWORD *)(this + 4176) = 10;
  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
  v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
  v13 = (float)*(int *)(this + 4176);
  v6 = v5;
  v14 = *(_DWORD *)this;
  v12 = sub_10038080(v4);
  v7 = sub_10038080(v6);
  v8 = sub_10248110(v7, v12, v13, 0x4000, 0);
  (*(void (__thiscall **)(int, int))(v14 + 256))(this, v8);
  v9 = *(float *)(dword_106B31C8 + 12) + 1.0;
  *(_DWORD *)(this + 3520) += *(_DWORD *)(this + 4176);
  *(float *)(this + 4016) = v9;
  sub_100F68E0((int *)this);
}
