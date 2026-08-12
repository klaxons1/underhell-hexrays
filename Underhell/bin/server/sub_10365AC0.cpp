void __thiscall sub_10365AC0(int this)
{
  int v2; // esi
  int *v3; // ecx
  int v4; // eax
  float v5[9]; // [esp+14h] [ebp-24h] BYREF

  v2 = *(_DWORD *)(this + 248) | 4;
  if ( *(_DWORD *)(this + 248) != v2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 248);
    }
    *(_DWORD *)(this + 248) = v2;
  }
  sub_1003A7E0(this);
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 && *(float *)(this + 3668) > 0.1 )
  {
    v4 = sub_1025FB50(1);
    if ( v4 )
      *(_DWORD *)(this + 3640) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    else
      *(_DWORD *)(this + 3640) = -1;
    *(float *)(this + 3644) = 0.0;
    qmemcpy(v5, (const void *)(this + 3664), sizeof(v5));
    v5[4] = 120.0;
    v5[7] = 1.75;
    v5[8] = 4.0;
    qmemcpy((void *)(this + 3664), v5, 0x24u);
  }
  if ( !*(_DWORD *)(this + 3620) )
    sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
}
