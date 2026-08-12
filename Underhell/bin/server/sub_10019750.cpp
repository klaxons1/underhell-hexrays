char __thiscall sub_10019750(float *this, int a2, int a3, int a4)
{
  char *v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  int v9; // eax
  bool v10; // zf
  int v11; // esi
  int v12; // eax
  int v14; // eax
  double v15; // st7
  double v16; // st7
  int v17; // esi
  float *v18; // ebx
  double v19; // st7
  float v20; // [esp+18h] [ebp-14h]
  float v21; // [esp+18h] [ebp-14h]
  int v22; // [esp+28h] [ebp-4h]
  float v23; // [esp+34h] [ebp+8h]
  float v24; // [esp+38h] [ebp+Ch]
  float v25; // [esp+3Ch] [ebp+10h]
  float v26; // [esp+3Ch] [ebp+10h]

  if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a2 + 60) )
  {
    v5 = (char *)sub_10418450(a4);
    v6 = sub_100F2B70(v5);
    if ( !v6 )
    {
      v6 = sub_100F2B70("random");
      if ( !v6 )
        return 0;
    }
    *(float *)(a2 + 60) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                            dword_106B31E4,
                            0.30000001,
                            0.5)
                        * (30.0
                         / (double)*(int *)(v6 + 76))
                        + *(float *)(dword_106B31C8 + 12);
    v7 = *(_DWORD *)(v6 + 80)
       + 24
       * (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
           dword_106B31E4,
           0,
           *(_DWORD *)(v6 + 76) - 1);
    v8 = *(_DWORD *)(v7 + v6 + 20);
    v9 = v6 + v7;
    v10 = v9 + v8 == 0;
    v11 = v9 + v8;
    v12 = *(_DWORD *)(v9 + 8);
    if ( v10 )
      return 0;
    if ( v12 > 0 )
    {
      v22 = v12;
      do
      {
        v14 = sub_100F2760(v6, *(_DWORD *)v11);
        v15 = *(float *)(v11 + 4);
        v11 += 12;
        this[v14 + 977] = v15;
        --v22;
      }
      while ( v22 );
    }
  }
  v16 = sub_1041CA40(a3);
  v20 = v16;
  sub_1041A260(a4, v20);
  v25 = v16;
  v17 = 0;
  v23 = sub_100ECEC0(this) * v25;
  if ( sub_100BF790(this) > 0 )
  {
    v18 = this + 977;
    do
    {
      v19 = sub_100ED7A0(v17);
      if ( *v18 != v19 )
      {
        v26 = *v18 - v19;
        v24 = v19;
        v19 = v26 / ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(2.0, 4.0) * v23
            + v24;
      }
      if ( v19 <= 1.0 )
      {
        if ( v19 < 0.0 )
          v19 = 0.0;
      }
      else
      {
        v19 = 1.0;
      }
      v21 = v19;
      sub_100ED710(v17++, v21);
      ++v18;
    }
    while ( v17 < sub_100BF790(this) );
  }
  return 1;
}
