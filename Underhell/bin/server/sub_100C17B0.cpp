char __thiscall sub_100C17B0(int this, float a2, _BYTE *a3, float *a4, float *a5)
{
  int v5; // edi
  _DWORD *v7; // eax
  int v8; // ebx
  double v9; // st7
  double v10; // st6
  double v11; // st7
  float v13; // [esp+4h] [ebp-34h]
  int v14[3]; // [esp+20h] [ebp-18h] BYREF
  int v15[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v5 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v7 = *(_DWORD **)(this + 1100);
  if ( v7 && *v7 )
    v8 = *(_DWORD *)(this + 1100);
  else
    v8 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
  if ( v8 && (unsigned __int8)sub_10245FE0(v8) )
  {
    v9 = sub_100C0F70(this, *(_DWORD *)(this + 908)) * a2 * *(float *)(this + 864) + *(float *)(this + 904);
    if ( *(_BYTE *)(this + 897) || v9 <= 1.0 )
    {
      *a3 = 0;
    }
    else
    {
      v9 = 1.0;
      *a3 = 1;
    }
    v13 = v9;
    if ( (unsigned __int8)sub_10100AE0(
                            v8,
                            *(_DWORD *)(this + 908),
                            *(float *)(this + 904),
                            v13,
                            this + 912,
                            (int)v15,
                            (int)v14) )
    {
      sub_10422AF0((int)v15, *(float *)(this + 732), (int)v15);
      v10 = *(float *)(this + 720) + *(float *)&v15[1];
      v11 = *(float *)(this + 724) + *(float *)&v15[2];
      *a4 = *(float *)(this + 716) + *(float *)v15;
      a4[1] = v10;
      a4[2] = v11;
      *a5 = 0.0;
      a5[1] = 0.0;
      a5[2] = 0.0;
      a5[1] = *(float *)&v14[1] + *(float *)(this + 732);
      return 1;
    }
    *a4 = *(float *)(this + 716);
    a4[1] = *(float *)(this + 720);
    a4[2] = *(float *)(this + 724);
    *a5 = *(float *)(this + 728);
    a5[1] = *(float *)(this + 732);
    a5[2] = *(float *)(this + 736);
  }
  return 0;
}
