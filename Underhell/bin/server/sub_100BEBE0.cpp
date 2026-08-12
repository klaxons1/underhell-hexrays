void __thiscall sub_100BEBE0(int this)
{
  double v2; // st7
  int v3; // eax
  int v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st7
  bool v9; // c0
  bool v10; // c3
  float v11; // [esp+4h] [ebp-8h]
  float v12; // [esp+4h] [ebp-8h]
  float v13; // [esp+8h] [ebp-4h]

  if ( !*(_DWORD *)(dword_10696234 + 48) )
  {
    v2 = 0.0;
LABEL_20:
    *(float *)(this + 884) = v2;
    *(float *)(this + 880) = *(float *)(this + 724);
    return;
  }
  if ( *(float *)(this + 868) <= 0.2
    || *(float *)(this + 868) <= *(float *)(dword_106B31C8 + 12) - 0.2
    || (*(_DWORD *)(this + 256) & 0xC00) != 0
    || sub_100233D0((_DWORD *)this)
    || !sub_101C5260(this)
    || (v3 = sub_101C5260(this), (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 296))(v3))
    || 0.0 != *((float *)sub_10019640((_DWORD *)this) + 2) - *(float *)(this + 724) )
  {
    v2 = *(float *)(this + 884) * 0.5;
    goto LABEL_20;
  }
  v4 = sub_100D7680(this);
  v5 = 18.0;
  v11 = 18.0;
  if ( v4 )
  {
    v5 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 1724))(v4);
    v11 = v5;
  }
  *(float *)(this + 880) = *(float *)(this + 880) * 0.2 + *(float *)(this + 872) * 0.8;
  v6 = *(float *)(this + 876) - *(float *)(this + 872) - v5;
  if ( v6 <= v5 )
  {
    v5 = v6;
    if ( v6 < 0.0 )
      v5 = 0.0;
  }
  v13 = v5;
  v7 = 0.0;
  if ( *(float *)(this + 880) - *((float *)sub_10019640((_DWORD *)this) + 2) <= 0.0 )
  {
    v12 = v13 - v11;
    v8 = *(float *)(this + 880) - *((float *)sub_10019640((_DWORD *)this) + 2);
    v9 = v12 < v8;
    v10 = v12 == v8;
    v7 = v12;
    if ( v9 || v10 )
      v7 = *(float *)(this + 880) - *((float *)sub_10019640((_DWORD *)this) + 2);
  }
  *(float *)(this + 884) = v7;
}
