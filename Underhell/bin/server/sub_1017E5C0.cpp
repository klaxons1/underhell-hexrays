int __thiscall sub_1017E5C0(int this)
{
  int v2; // esi
  int *v3; // ecx
  float v5; // [esp+0h] [ebp-14h]

  v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v5, 0);
  v2 = *(_DWORD *)(this + 248) | 1;
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
  return sub_100EC3F0((_DWORD *)this, (int)sub_1017DDF0, 0.0, 0);
}
