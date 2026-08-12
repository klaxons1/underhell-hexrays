int __thiscall sub_103844D0(int this)
{
  double v3; // st7
  double v4; // st7
  float v5; // [esp+1Ch] [ebp-10h]
  float v6; // [esp+20h] [ebp-Ch]
  float v7; // [esp+20h] [ebp-Ch]
  float v8; // [esp+20h] [ebp-Ch]
  float v9; // [esp+20h] [ebp-Ch]
  float v10; // [esp+20h] [ebp-Ch]
  float v11; // [esp+28h] [ebp-4h]

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3804) )
  {
    v3 = sub_100BE820(this, *(_DWORD *)(this + 3872));
    if ( *(_BYTE *)(this + 3853) )
    {
      v4 = 90.0;
    }
    else
    {
      v5 = v3;
      v4 = 0.0;
      sub_10424B10(0.0, v5, 25.0);
    }
    v11 = v4;
    v10 = v4;
    sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 3872), v10);
    sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 3876), v11);
    sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 3880), v11);
    return sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 3884), v11);
  }
  else
  {
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           90.0);
    sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 3872), v6);
    v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           90.0);
    sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 3876), v7);
    v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           90.0);
    sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 3880), v8);
    v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           90.0);
    return sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 3884), v9);
  }
}
