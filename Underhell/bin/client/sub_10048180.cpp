void __thiscall sub_10048180(int this, int a2)
{
  int v2; // edi
  _DWORD *v4; // eax
  int v5; // edi
  int v6; // eax
  float *v7; // eax

  v2 = a2;
  sub_1002B830(this, a2);
  if ( !v2 )
  {
    v4 = (_DWORD *)sub_100F32D0(&a2, "FX_Trail");
    v5 = *v4;
    if ( *v4 != *(_DWORD *)(this + 1956) )
    {
      if ( v5 )
        sub_100F2950(*v4);
      if ( *(_DWORD *)(this + 1956) )
        sub_100F2FF0();
      *(_DWORD *)(this + 1956) = v5;
    }
    if ( a2 )
      sub_100F2FF0();
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)(this - 8) + 36))(this - 8);
    sub_100F3060(v6);
    v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 8) + 36))(this - 8);
    *(float *)(this + 1960) = *v7;
    *(float *)(this + 1964) = v7[1];
    *(float *)(this + 1968) = v7[2];
  }
}
