int __thiscall sub_10186D40(int this)
{
  void (__thiscall *v2)(int); // edx
  int v3; // eax
  int v4; // ecx
  int v5; // ebx
  int *v6; // ecx
  float v8; // [esp+0h] [ebp-Ch]
  float v9; // [esp+0h] [ebp-Ch]

  sub_10112C00(this + 320, 0);
  v2 = *(void (__thiscall **)(int))(*(_DWORD *)this + 100);
  *(_DWORD *)(this + 908) = 0;
  v2(this);
  if ( !*(_DWORD *)(this + 916) )
  {
    v3 = *(_DWORD *)(this + 912);
    *(_BYTE *)(this + 921) = 0;
    *(_DWORD *)(this + 916) = v3;
  }
  if ( !*(_DWORD *)(this + 804) )
  {
    v4 = *(_DWORD *)(this + 800);
    *(_BYTE *)(this + 922) = 0;
    *(_DWORD *)(this + 804) = v4;
  }
  if ( (*(_BYTE *)(this + 248) & 0x20) != 0 )
  {
    v5 = *(_DWORD *)(this + 248) | 0x10;
    if ( *(_DWORD *)(this + 248) != v5 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 248);
      }
      *(_DWORD *)(this + 248) = v5;
    }
  }
  v8 = 0.0;
  if ( *(_BYTE *)(this + 920) )
    return sub_100EC3F0((_DWORD *)this, (int)nullsub_4, v8, 0);
  sub_100EC3F0((_DWORD *)this, (int)sub_10185A40, v8, 0);
  v9 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0((int *)this, v9, 0);
}
