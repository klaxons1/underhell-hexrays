char __thiscall sub_1026B1F0(void *this, float a2)
{
  double v2; // st7
  long double v4; // st6
  long double v5; // rt0
  long double v6; // st6
  long double v7; // rt1
  int v8; // esi
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int i; // edx
  const char *v16; // esi
  float v17; // [esp+20h] [ebp-8h]
  float v18; // [esp+24h] [ebp-4h]
  float v19; // [esp+30h] [ebp+8h]

  v2 = 0.0;
  v18 = 0.0;
  v4 = fabs(*((float *)this + 103));
  v17 = v4;
  if ( fabs(a2) < v4 )
  {
    v5 = v4;
    v6 = fabs(*((float *)this + 103) - a2);
    v18 = v6;
    v7 = v6;
    v4 = v5;
    v2 = v7;
  }
  v19 = v2 * 0.125;
  if ( v2 * 0.125 <= 60.0 )
  {
    if ( v2 * 0.125 <= 5.0 )
      goto LABEL_12;
  }
  else
  {
    v19 = 60.0;
  }
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 240))(this) )
  {
    v8 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 240))(this);
    if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
      sub_100DAE60(v8);
    sub_10261B70((float *)(v8 + 580), v19, 150.0, 1.0, 240.0, 4, 1);
  }
  v4 = v17;
  v2 = v18;
LABEL_12:
  v9 = *((_DWORD *)this + 45);
  v10 = 0;
  if ( v9 <= 0 )
  {
LABEL_19:
    v13 = v9 - 1;
    if ( v9 - 1 < 0 )
      return 0;
    for ( i = *((_DWORD *)this + 42) + 20 * v13; *(float *)(i + 8) >= v2 || v4 <= *(float *)(i + 4); i -= 20 )
    {
      if ( --v13 < 0 )
        return 0;
    }
    v16 = *(const char **)(i + 16);
  }
  else
  {
    v11 = *((_DWORD *)this + 42);
    while ( 1 )
    {
      v12 = *(_DWORD *)(v11 + 12);
      if ( v12 )
      {
        if ( *((_DWORD *)this + 97) <= v12 && *(float *)(v11 + 8) < v2 && v4 > *(float *)(v11 + 4) )
          break;
      }
      ++v10;
      v11 += 20;
      if ( v10 >= v9 )
        goto LABEL_19;
    }
    v16 = *(const char **)(v11 + 16);
  }
  if ( v16 && *v16 )
  {
    if ( *(_DWORD *)(dword_106CEF04 + 48) )
      Msg("Playing non-looping vehicle sound: %s\n", v16);
    sub_1023C380(*((_DWORD **)this + 11), (int)v16, 0.0, 0);
  }
  return 1;
}
