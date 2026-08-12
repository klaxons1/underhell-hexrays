double __thiscall sub_100298A0(float *this, float a2)
{
  _DWORD *v3; // edi
  double result; // st7
  double v5; // st6
  double v6; // st7
  double v7; // st5
  double v8; // st7
  double v9; // st6
  unsigned __int64 v10; // st5
  int v11; // eax
  double v12; // st7
  double v13; // [esp+8h] [ebp-28h]
  double v14; // [esp+10h] [ebp-20h]
  double v15; // [esp+10h] [ebp-20h]
  double v16; // [esp+18h] [ebp-18h]
  float v17; // [esp+28h] [ebp-8h]
  float v18; // [esp+2Ch] [ebp-4h]
  float v19; // [esp+2Ch] [ebp-4h]

  if ( !*((_DWORD *)this + 485) && (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 1) + 36))((_DWORD *)this + 1) )
    sub_10026520((int)this);
  v3 = (_DWORD *)*((_DWORD *)this + 485);
  if ( !v3 || !*v3 )
    return 0.0;
  v17 = *((float *)off_103DC81C + 3);
  if ( 0.0 == a2 )
  {
    result = 0.0;
    v5 = *((float *)off_103DC81C + 3) - this[24];
    a2 = v5;
    if ( v5 <= 0.001 )
      return result;
  }
  else
  {
    result = 0.0;
  }
  if ( result == this[24] )
    a2 = result;
  v18 = ((double (__thiscall *)(float *, _DWORD *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 684))(
          this,
          v3,
          *((_DWORD *)this + 452))
      * a2
      * this[309];
  if ( -1.0 != ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 716))(this) )
  {
    v6 = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 716))(this) - this[454];
    if ( v6 >= -0.80000001 )
    {
      if ( v6 <= 0.0 )
      {
LABEL_20:
        (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 712))(this, -1.0);
        goto LABEL_21;
      }
    }
    else
    {
      v6 = v6 + 1.0;
    }
    v7 = v6;
    v8 = v18;
    v9 = (v18 + v7) * 0.5;
    v18 = v9;
    if ( v9 > 0.1 )
    {
      v9 = 0.1;
      v18 = 0.1;
    }
    *(double *)&v10 = v8 + this[454];
    v14 = v9 + this[454];
    v11 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*((_DWORD *)this + 2) + 36))(
            (_DWORD *)this + 2,
            COERCE_UNSIGNED_INT64(this[454]),
            HIDWORD(COERCE_UNSIGNED_INT64(this[454])),
            LODWORD(v14),
            HIDWORD(v14),
            v10,
            HIDWORD(v10));
    DevMsg(2, "(%d): Cycle latch used to correct %.2f in to %.2f instead of %.2f.\n", v11, v13, v15, v16);
    goto LABEL_20;
  }
LABEL_21:
  v12 = v18 + this[454];
  v19 = v12;
  this[24] = v17;
  if ( v12 < 0.0 || v12 >= 1.0 )
  {
    if ( (sub_10008630((int)v3, *((_DWORD *)this + 452)) & 1) != 0 )
    {
      v12 = v19 - (double)(int)v19;
    }
    else
    {
      v12 = 0.0;
      if ( v19 >= 0.0 )
        v12 = 1.0;
    }
    *((_BYTE *)this + 1332) = 1;
  }
  if ( v12 != this[454] )
  {
    this[454] = v12;
    sub_1000F6C0((int)this, 8);
  }
  return a2;
}
