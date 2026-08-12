void __thiscall sub_102D1780(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // esi
  int *v7; // ecx
  int v8; // [esp+4h] [ebp-10h]

  v2 = *(_DWORD *)(this + 1420);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1420) & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        sub_1025FAC0(v5);
        *(_DWORD *)(this + 1420) = -1;
      }
    }
  }
  v8 = off_10662E20;
  *(float *)(this + 1432) = *(float *)(dword_106B31C8 + 12) + 1.0;
  sub_100EC3F0((_DWORD *)this, 0, 0.0, v8);
  v6 = *(_DWORD *)(this + 248) & 0xFFFFFFFE;
  if ( *(_DWORD *)(this + 248) != v6 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 248);
    }
    *(_DWORD *)(this + 248) = v6;
  }
  *(float *)(this + 800) = 0.0;
  sub_102CEE20((unsigned int *)this);
}
