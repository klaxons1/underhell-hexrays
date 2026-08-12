char __thiscall sub_10130770(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // edi
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  int v10; // edi
  _BYTE v11[76]; // [esp+8h] [ebp-54h] BYREF
  int v12; // [esp+54h] [ebp-8h]
  int savedregs; // [esp+5Ch] [ebp+0h] BYREF

  v2 = *(_DWORD *)(this + 828);
  if ( v2 == -1 )
    goto LABEL_12;
  v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 828) & 0xFFF) + 1];
  v4 = v2 >> 12;
  if ( v3[1] != v4 || !*v3 )
    goto LABEL_12;
  if ( v3[1] == v4 )
    v5 = *v3;
  else
    v5 = 0;
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  if ( *(float *)(this + 832) != *(float *)(v5 + 580)
    || *(float *)(this + 836) != *(float *)(v5 + 584)
    || *(float *)(this + 840) != *(float *)(v5 + 588) )
  {
LABEL_12:
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_100231A0(
      (int)&savedregs,
      this,
      (float *)(this + 580),
      (float *)(this + 580),
      (float *)(this + 800),
      (float *)(this + 812),
      33570827,
      this,
      0,
      (int)v11);
    if ( v12 )
    {
      *(_DWORD *)(this + 828) = *(_DWORD *)(*(int (**)(void))(*(_DWORD *)v12 + 8))();
    }
    else
    {
      if ( !v11[55] )
        return 1;
      *(_DWORD *)(this + 828) = -1;
    }
    v7 = *(_DWORD *)(this + 828);
    if ( v7 != -1 )
    {
      v8 = &off_1061BE18[4 * (*(_DWORD *)(this + 828) & 0xFFF) + 1];
      v9 = v7 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 828) & 0xFFF) + 2] == v9 )
      {
        if ( *v8 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 828) & 0xFFF) + 2] == v9 )
            v10 = *v8;
          else
            v10 = 0;
          if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
            sub_100DAE60(v10);
          *(float *)(this + 832) = *(float *)(v10 + 580);
          *(float *)(this + 836) = *(float *)(v10 + 584);
          *(float *)(this + 840) = *(float *)(v10 + 588);
        }
      }
    }
  }
  return 0;
}
