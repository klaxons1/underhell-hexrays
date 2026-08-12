int __thiscall sub_1038EA70(int this)
{
  int result; // eax
  _DWORD *v3; // ecx
  int v4; // eax
  double v5; // st7

  if ( (*(_DWORD *)(this + 248) & 0x200000) != 0 && *(_DWORD *)(this + 2796) && sub_10023D10((_DWORD *)this, 10) )
  {
    if ( *(_BYTE *)(this + 4180) )
      return 109 - sub_1004AFF0((_DWORD *)this, 16);
    return 93;
  }
  if ( sub_10023D10((_DWORD *)this, 26) )
  {
    *(float *)(this + 4304) = *(float *)(dword_106B31C8 + 12);
    if ( sub_1038E970((_DWORD *)this) )
    {
      if ( sub_1004AFF0(v3, 10) )
        return 94;
    }
  }
  if ( !*(_BYTE *)(this + 4180) )
    return 93;
  if ( !sub_10389B80((_DWORD *)this) || sub_10389BD0((_DWORD *)this) || sub_100697A0((_DWORD *)this, 116, 1) )
    return 0;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  sub_100218B0((_DWORD *)this, v4);
  sub_10389C30(this, 1);
  v5 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         2.5,
         4.0);
  result = 116;
  *(float *)(this + 4316) = v5 + *(float *)(dword_106B31C8 + 12);
  return result;
}
