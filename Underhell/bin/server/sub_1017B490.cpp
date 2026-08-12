int __thiscall sub_1017B490(int this)
{
  _DWORD *v2; // ecx
  int result; // eax
  __int64 v4; // [esp-8h] [ebp-10h]
  float v5; // [esp+0h] [ebp-8h]

  if ( !*(_DWORD *)(this + 872) )
  {
    v5 = 0.0;
    HIDWORD(v4) = this;
    LODWORD(v4) = this;
    if ( (*(_BYTE *)(this + 248) & 1) != 0 )
    {
      v2 = (_DWORD *)(this + 824);
      if ( !*(_BYTE *)(this + 880) )
        v2 = (_DWORD *)(this + 848);
      sub_1010DD80(v2, v4, v5);
      *(_BYTE *)(this + 880) = *(_BYTE *)(this + 880) == 0;
      return sub_1017ABB0(this);
    }
    else
    {
      sub_1010DD80((_DWORD *)(this + 800), v4, v5);
      return sub_1017ABB0(this);
    }
  }
  return result;
}
