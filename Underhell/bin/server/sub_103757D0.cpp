void __thiscall sub_103757D0(float *this)
{
  int v2; // ecx
  int v3; // edx
  float v4; // eax
  double v5; // st7
  int v6; // esi
  int v7; // esi
  int v8[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( sub_10050FC0(this) )
  {
    v2 = *((_DWORD *)this + 8);
    v3 = *((_DWORD *)this + 9);
    v8[0] = (int)this[7];
    v4 = *this;
    v8[1] = v2;
    v8[2] = v3;
    if ( (*(unsigned __int8 (__thiscall **)(float *))(LODWORD(v4) + 284))(this) )
    {
      v5 = this[59];
      v6 = *((_DWORD *)this + 1);
      if ( v5 > *(float *)(dword_106B31C8 + 12) )
      {
        if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
          sub_100DAE60(v6);
        sub_1011C3A0((float *)(v6 + 580), (float *)v8, 16.0, 255, 255, 0, 0, 1, 0.0);
      }
      else
      {
        if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
          sub_100DAE60(v6);
        sub_1011C3A0((float *)(v6 + 580), (float *)v8, 16.0, 255, 0, 0, 0, 1, 0.0);
      }
    }
    else
    {
      v7 = *((_DWORD *)this + 1);
      if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
        sub_100DAE60(v7);
      sub_1011C3A0((float *)(v7 + 580), (float *)v8, 16.0, 0, 255, 0, 0, 1, 0.0);
    }
  }
}
