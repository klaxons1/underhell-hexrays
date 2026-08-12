int __thiscall sub_1020EBA0(int this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int *v4; // ecx
  float v6; // [esp+0h] [ebp-60h]
  _BYTE v7[84]; // [esp+Ch] [ebp-54h] BYREF
  int savedregs; // [esp+60h] [ebp+0h] BYREF

  sub_100231A0(
    (int)&savedregs,
    this,
    (float *)(this + 1688),
    (float *)(this + 1688),
    (float *)(this + 1712),
    (float *)(this + 1724),
    33570827,
    this,
    0,
    (int)v7);
  if ( v7[55] || v7[54] )
  {
    v6 = *(float *)(dword_106B31C8 + 12) + 1.0;
    return sub_100EC4A0((int *)this, v6, 0);
  }
  else
  {
    v2 = *(_DWORD *)(this + 192);
    v3 = v2 & 0xFFFFFFDF;
    if ( v2 != (v2 & 0xFFFFFFDF) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 192);
      }
      *(_DWORD *)(this + 192) = v3;
    }
    if ( *(_DWORD *)(this + 24) )
      **(_DWORD **)(this + 24) |= 0x80u;
    sub_100D8500((_DWORD *)this);
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 96))(this);
  }
}
