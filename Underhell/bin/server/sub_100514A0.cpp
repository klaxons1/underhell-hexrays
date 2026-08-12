void __thiscall sub_100514A0(int this)
{
  double v2; // st7
  int v3; // ecx
  double v4; // st6
  double v5; // st7
  double v6; // st7
  float v7; // [esp+0h] [ebp-14h]
  float v8; // [esp+4h] [ebp-10h]
  float v9; // [esp+4h] [ebp-10h]
  float v10; // [esp+10h] [ebp-4h]

  v2 = *(float *)(this + 40);
  v10 = *(float *)(this + 40);
  if ( v2 < *(float *)(this + 48) )
  {
    v2 = *(float *)(this + 48);
    v10 = *(float *)(this + 48);
  }
  v3 = *(_DWORD *)(this + 4);
  if ( *(_DWORD *)(v3 + 2324) == 3 )
  {
    if ( v2 < *(float *)(this + 68) )
    {
      v2 = *(float *)(this + 68);
      v10 = *(float *)(this + 68);
    }
    if ( v2 < *(float *)(this + 72) )
    {
      v2 = *(float *)(this + 72);
      v10 = *(float *)(this + 72);
    }
  }
  v4 = *(float *)(this + 44);
  if ( -1.0 == v4 )
  {
    v5 = sub_100737D0(*(_DWORD *)(v3 + 1676));
    v4 = v5 + v5;
    v2 = v10;
  }
  v8 = v4;
  v7 = v2 * 1.5;
  if ( sub_10051020(this, v7, v8, *(_DWORD *)(this + 24)) )
  {
    *(_BYTE *)(this + 108) = 1;
  }
  else
  {
    v6 = *(float *)(this + 152);
    *(_BYTE *)(this + 148) = 1;
    if ( 0.0 == *(float *)(this + 156) )
    {
      *(float *)(this + 144) = v6 + *(float *)(dword_106B31C8 + 12);
    }
    else
    {
      v9 = v6;
      *(float *)(this + 144) = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                 LODWORD(v9),
                                 *(float *)(this + 156))
                             + *(float *)(dword_106B31C8 + 12);
    }
  }
}
