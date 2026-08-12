int __thiscall sub_10098780(int this)
{
  int v2; // ecx
  char *v3; // eax
  char *v4; // eax
  void *Src[5]; // [esp+4h] [ebp-24h] BYREF
  unsigned int v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+20h] [ebp-8h]
  unsigned int v9; // [esp+24h] [ebp-4h]

  if ( !*(_DWORD *)(this + 4356) )
  {
    v7 = 15;
    Src[4] = 0;
    LOBYTE(Src[0]) = 0;
    v8 = 0;
    v9 = -1;
    if ( sub_100928A0((_DWORD *)this, (int)Src) )
    {
      if ( v9 == -1 || off_1061BE18[4 * (v9 & 0xFFF) + 2] != v9 >> 12 )
        v2 = 0;
      else
        v2 = off_1061BE18[4 * (v9 & 0xFFF) + 1];
      if ( v2 )
        *(_DWORD *)(this + 4372) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
      else
        *(_DWORD *)(this + 4372) = -1;
      v3 = (char *)Src[0];
      if ( v7 < 0x10 )
        v3 = (char *)Src;
      sub_100982C0(this, v3, (int *)v8);
    }
    if ( v7 >= 0x10 )
      sub_10184660(Src[0]);
    if ( !*(_DWORD *)(this + 4356) )
      return 0;
  }
  if ( *(float *)(dword_106B31C8 + 12) == *(float *)(this + 4368) )
    return 88;
  v4 = (char *)(this + 4340);
  if ( *(_DWORD *)(this + 4360) >= 0x10u )
    v4 = *(char **)v4;
  if ( sub_10096EA0((_DWORD *)this, v4, 0) )
    return 88;
  else
    return 0;
}
