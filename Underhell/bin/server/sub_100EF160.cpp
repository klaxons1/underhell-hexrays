char __thiscall sub_100EF160(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v5; // eax
  double v6; // st7
  int v7; // eax
  bool v8; // al

  if ( (unsigned __int8)sub_10418530(a4) )
  {
    v5 = (_DWORD *)sub_100D7680((int)this);
    if ( !v5 )
    {
LABEL_16:
      sub_100EE340(this, a2);
      return 1;
    }
    if ( sub_10023D10(v5, 1) )
    {
      if ( !*(_DWORD *)(dword_10698B8C + 48) || !(unsigned __int8)sub_1041CB20(a3) )
        goto LABEL_16;
      if ( *(float *)(dword_10698BD4 + 44) >= (double)*(float *)(dword_106B31C8 + 16) )
      {
        if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(a2 + 60) )
          goto LABEL_15;
        v7 = sub_10261B20();
        v8 = v7 && !(*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)v7 + 876))(v7, this);
        *(_BYTE *)(a2 + 41) = v8;
        v6 = RandomFloat(0.69999999, 1.2) + *(float *)(dword_106B31C8 + 12);
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 1;
        v6 = RandomFloat(0.69999999, 1.2) + *(float *)(dword_106B31C8 + 12);
      }
      *(float *)(a2 + 60) = v6;
LABEL_15:
      if ( !*(_BYTE *)(a2 + 41) )
        goto LABEL_16;
    }
  }
  return 1;
}
