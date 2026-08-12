void __thiscall sub_1038F4B0(int this)
{
  int v2; // edi
  int v3; // eax
  float v4; // [esp+10h] [ebp-Ch]
  float v5; // [esp+14h] [ebp-8h]
  float v6; // [esp+18h] [ebp-4h]

  sub_10093FD0((int *)this);
  if ( !*(_BYTE *)(this + 4341) )
    sub_10023E00((char *)this, 75);
  v2 = sub_1025FB50(1);
  if ( v2 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
      sub_100DAE60(v2);
    v4 = *(float *)(v2 + 580) - *(float *)(this + 580);
    v5 = *(float *)(v2 + 584) - *(float *)(this + 584);
    v6 = *(float *)(v2 + 588) - *(float *)(this + 588);
    if ( sub_101C5260((_DWORD *)v2) == this )
    {
      *(_DWORD *)(this + 4368) = 0;
      sub_10023CB0((char *)this, 75);
    }
    else if ( v4 * v4 + v5 * v5 + v6 * v6 < 1764.0
           && (*(unsigned __int8 (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)this + 548))(this, v2, 16449, 0) )
    {
      if ( *(int *)(this + 4368) < 3 || sub_10018CD0((float *)(this + 4348), &flt_106F1CA8) )
        sub_10023CB0((char *)this, 75);
    }
    else
    {
      sub_10023E00((char *)this, 75);
      if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 2740) > 3.0 )
        *(_DWORD *)(this + 4368) = 0;
      *(_BYTE *)(this + 4341) = 0;
    }
    if ( *(_DWORD *)(dword_106E9FFC + 48)
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 296))(this)
      && sub_10023D10((_DWORD *)this, 23)
      && sub_10389B80((_DWORD *)this) )
    {
      if ( sub_1001ED60((float *)(this + 4200)) )
      {
        sub_100925F0((float *)(this + 4200), 1.0, 1.75);
        v3 = sub_10039AE0((_DWORD *)this, 143, 0);
        sub_100C74B0((volatile signed __int32 *)this, v3, 1);
      }
    }
  }
}
