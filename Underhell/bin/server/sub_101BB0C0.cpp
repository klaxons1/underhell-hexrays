void __cdecl sub_101BB0C0(float a1)
{
  double v1; // st6
  double v2; // st5
  double v3; // st7
  double v4; // rtt
  double v5; // st6
  double v6; // st7
  int v7; // esi
  void *v8; // esp
  int v9; // edi
  int v10; // eax
  int *v11; // esi
  _DWORD *i; // ebx
  int *v13; // ecx
  _DWORD *v14; // esi
  int v15; // edi
  double v16; // st7
  double v17; // st7
  int v18; // esi
  double v19; // st6
  _DWORD *v20; // ecx
  int j; // esi
  float v22; // [esp+1Ch] [ebp-1Ch]
  _DWORD v23[3]; // [esp+20h] [ebp-18h] BYREF
  float v24; // [esp+2Ch] [ebp-Ch]
  int v25; // [esp+30h] [ebp-8h]
  bool v26; // [esp+37h] [ebp-1h]
  float v27; // [esp+40h] [ebp+8h]

  if ( dword_106BAFF4 && !byte_10637A80 )
  {
    v1 = 0.1;
    if ( a1 > 1.0 || a1 < 0.0 )
    {
      Msg("Reset physics clock\n");
      v1 = 0.1;
      v2 = (float)0.0;
      v3 = 0.0;
    }
    else
    {
      v2 = a1;
      v3 = 0.0;
      if ( a1 > 0.1 )
        v2 = 0.1;
    }
    v24 = v3;
    v4 = v1;
    v5 = v2 * *(float *)(dword_106B9F0C + 44);
    v6 = v4;
    v27 = v5;
    if ( v5 <= v4 )
      v6 = v5;
    else
      v27 = v6;
    v26 = *(_DWORD *)(dword_106B9E94 + 48) != 0;
    if ( v26 )
    {
      v24 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 196))(dword_106B31D0);
      v6 = v27;
    }
    byte_106BA09C = 1;
    v22 = v6;
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_106BAFF4 + 136))(LODWORD(v22));
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106BAFF4 + 180))(dword_106BAFF4);
    v25 = v7;
    if ( v7 )
    {
      v8 = alloca(4 * v7);
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106BAFF4 + 184))(dword_106BAFF4, v23);
      v9 = 0;
      if ( v7 > 0 )
      {
        do
        {
          v10 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v23[v9] + 68))(v23[v9]);
          v11 = (int *)v10;
          if ( v10 )
          {
            if ( sub_10111F30((_DWORD *)(v10 + 320)) )
              sub_101126F0(v11 + 80);
            (*(void (__thiscall **)(int *, _DWORD))(*v11 + 596))(v11, v23[v9]);
          }
          ++v9;
        }
        while ( v9 < v25 );
      }
    }
    for ( i = *(_DWORD **)(dword_106B9E74 + 4); i; i = (_DWORD *)i[1] )
    {
      if ( *i != -1
        && (v13 = &off_1061BE18[4 * (*i & 0xFFF) + 1], off_1061BE18[4 * (*i & 0xFFF) + 2] == *i >> 12)
        && (v14 = (_DWORD *)*v13) != 0 )
      {
        v15 = v14[106];
        if ( v15 && !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v15 + 8))(v14[106]) )
          (*(void (__thiscall **)(_DWORD *, int))(*v14 + 608))(v14, v15);
      }
      else
      {
        Msg("Dangling pointer to physics entity!!!\n");
      }
    }
    if ( v26 )
    {
      v16 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 196))(dword_106B31D0);
      v17 = v16 - v24;
      if ( v17 < 0.0 )
        v17 = 0.0;
      v18 = v25;
      v19 = flt_106B9E70 * 0.8 + v17 * 0.2;
      flt_106B9E70 = v19;
      if ( dword_106BA2EC || v25 )
        Msg("Physics: %3d objects, %4.1fms / AVG: %4.1fms\n", v25, v17 * 1000.0, v19 * 1000.0);
      dword_106BA2EC = v18;
    }
    byte_106BA09C = 0;
    sub_101B50E0((char *)&dword_106B9F38);
    sub_101B7EC0((int)&dword_106B9F38);
    sub_101B74F0(&dword_106B9F38);
    sub_101B7D30(&dword_106B9F38);
    sub_101B9240(v20);
    sub_101B9330((signed __int32)&dword_106B9EC0);
    for ( j = 0; j < dword_106BA08C; ++j )
      sub_1025FA50(*(_DWORD *)(dword_106BA080 + 4 * j));
    dword_106BA08C = 0;
    sub_101B9F30(&dword_106B9F38);
  }
}
