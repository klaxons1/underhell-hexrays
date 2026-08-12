int __thiscall sub_102B6920(int this)
{
  int *v2; // ecx
  int v3; // ebx
  int *v4; // ecx
  float v6[3]; // [esp+4h] [ebp-18h] BYREF
  float v7[3]; // [esp+10h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v7[0] = 8.0;
  v7[1] = 8.0;
  v7[2] = 8.0;
  v6[0] = -8.0;
  v6[1] = -8.0;
  v6[2] = -8.0;
  sub_1025F360((_DWORD *)this, (int)v6, (int)v7);
  if ( (*(_DWORD *)(this + 248) & 2) != 0 )
  {
    if ( *(_DWORD *)(this + 804) != 2 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v2 = *(int **)(this + 24);
        if ( v2 )
          sub_100194B0(v2, 804);
      }
      *(_DWORD *)(this + 804) = 2;
    }
    v3 = dword_106B31C8;
    if ( *(_DWORD *)(this + 812) != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 812);
      }
      *(float *)(this + 812) = *(float *)(v3 + 12);
    }
  }
  *(_DWORD *)(this + 252) |= 0x80u;
  return sub_100D8500((_DWORD *)this);
}
