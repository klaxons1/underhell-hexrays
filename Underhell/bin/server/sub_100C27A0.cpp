void __thiscall sub_100C27A0(int this)
{
  int v1; // ebx
  _DWORD *v3; // edi
  double v4; // st7
  float *v5; // ecx
  double v6; // st6
  double v7; // st7
  double v8; // st7
  const char *v9; // edi
  const char *v10; // eax
  double v11; // [esp+18h] [ebp-18h]
  float v12; // [esp+1Ch] [ebp-14h]
  float v13; // [esp+2Ch] [ebp-4h]

  v1 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v3 = *(_DWORD **)(this + 1100);
  if ( !v3 || !*v3 )
    v3 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
  if ( v3 && (unsigned __int8)sub_10245FE0(v3) )
  {
    sub_100C1B60();
    v4 = 0.0;
    if ( 0.0 == *(float *)(this + 120) )
      *(float *)(this + 120) = *(float *)(this + 124);
    v5 = (float *)(this + 124);
    v6 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 124);
    v13 = v6;
    if ( v6 <= 0.2 )
    {
      if ( v6 >= 0.0 )
        v4 = v6;
      else
        v13 = 0.0;
    }
    else
    {
      v4 = 0.2;
      v13 = 0.2;
    }
    if ( v4 > 0.001 )
    {
      *(float *)(this + 120) = *v5;
      sub_100BC090(v5, (float *)(dword_106B31C8 + 12));
      v7 = ((double (__thiscall *)(int, _DWORD *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 736))(
             this,
             v3,
             *(_DWORD *)(this + 908));
      v8 = v7 <= 0.0 ? 10.0 : 1.0 / v7;
      v12 = v8 * *(float *)(this + 864) * v13;
      sub_100C2520(this, (int)v3, v12);
      if ( *(_DWORD *)(dword_10695FE4 + 48) )
      {
        if ( (*(_DWORD *)(this + 236) & 0x1000) != 0 )
        {
          v9 = *(const char **)(this + 92);
          if ( !v9 )
            v9 = String;
          v11 = *(float *)(this + 904);
          v10 = sub_100BE1F0(this, *(_DWORD *)(this + 908));
          Msg("%5.2f : %s : %s : %5.3f\n", *(float *)(dword_106B31C8 + 12), v9, v10, v11);
        }
      }
    }
  }
}
