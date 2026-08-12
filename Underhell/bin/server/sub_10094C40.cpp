void __thiscall sub_10094C40(int this)
{
  int v2; // eax
  int v3; // edi
  double v4; // st6
  double v5; // st5
  int v6; // ebx
  int v7; // eax
  float *v8; // eax
  _BYTE v9[12]; // [esp+Ch] [ebp-Ch] BYREF

  sub_10093FD0((int *)this);
  if ( !sub_10023D10((_DWORD *)this, 32) )
    sub_10023CB0((char *)this, 73);
  if ( *(int *)(dword_106B31C8 + 20) <= 1 && (v2 = sub_10261B20(), (v3 = v2) != 0) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 264))(v2) )
      sub_10023CB0((char *)this, 74);
    if ( sub_10023D10((_DWORD *)this, 32) )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      v4 = *(float *)(v3 + 584) - *(float *)(this + 584);
      v5 = *(float *)(v3 + 580) - *(float *)(this + 580);
      if ( v5 * v5 + v4 * v4 < 16384.0
        && (v6 = *(_DWORD *)v3,
            v7 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 504))(this, v9),
            (*(unsigned __int8 (__thiscall **)(int, int))(v6 + 872))(v3, v7))
        && (v8 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 536))(v3, v9),
            v8[1] * v8[1] + *v8 * *v8 + v8[2] * v8[2] < 10000.0) )
      {
        sub_10023CB0((char *)this, 75);
        if ( 0.0 == *(float *)(this + 4380) )
          *(float *)(this + 4380) = *(float *)(dword_106B31C8 + 12);
      }
      else
      {
        *(float *)(this + 4380) = 0.0;
        sub_10023E00((char *)this, 75);
      }
    }
  }
  else if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    sub_10023CB0((char *)this, 74);
  }
}
