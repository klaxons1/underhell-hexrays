int __thiscall sub_1014EF10(int this)
{
  int result; // eax
  int v3; // ecx
  int v4[3]; // [esp+8h] [ebp-18h] BYREF
  int v5[3]; // [esp+14h] [ebp-Ch] BYREF

  sub_100DF330((float *)this);
  result = dword_106CE684;
  if ( *(_DWORD *)(dword_106CE684 + 48) )
  {
    v3 = *(_DWORD *)(this + 252);
    *(float *)v5 = 16.0;
    *(float *)&v5[1] = 16.0;
    *(float *)&v5[2] = 8.0;
    *(float *)v4 = -16.0;
    *(float *)&v4[1] = -16.0;
    *(float *)&v4[2] = 0.0;
    if ( (v3 & 0x800) != 0 )
      sub_100DAE60(this);
    return sub_1011BB20(this + 580, (int)v4, (int)v5, 127, 127, 127, 127, 0.0);
  }
  return result;
}
