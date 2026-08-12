void __thiscall sub_100B7100(int this)
{
  unsigned int v2; // eax
  int *v3; // edx
  int *v4; // ecx
  int v5; // edi
  int *v6; // ecx
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // esi
  char v13; // dl
  int v14; // esi
  int v15; // eax
  float v16; // [esp+Ch] [ebp-8h]

  v2 = *(_DWORD *)(this + 3656);
  if ( *(_BYTE *)(this + 3732) )
  {
    v3 = off_1061BE18;
    if ( v2 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 3656) & 0xFFF) + 1], v4[1] != v2 >> 12) )
      v5 = 0;
    else
      v5 = *v4;
  }
  else
  {
    if ( v2 == -1 || (v6 = &off_1061BE18[4 * (*(_DWORD *)(this + 3656) & 0xFFF) + 1], v6[1] != v2 >> 12) )
      v7 = 0;
    else
      v7 = *v6;
    v8 = sub_101ACCC0(v7);
    v3 = off_1061BE18;
    v5 = v8;
  }
  if ( !v5 )
  {
    v9 = *(_DWORD *)(this + 3656);
    if ( v9 == -1 || v3[4 * (*(_DWORD *)(this + 3656) & 0xFFF) + 2] != v9 >> 12 )
      v10 = 0;
    else
      v10 = v3[4 * (*(_DWORD *)(this + 3656) & 0xFFF) + 1];
    v5 = v10;
  }
  v11 = *(_DWORD *)(this + 3644);
  if ( v11 == -1 || v3[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v11 >> 12 )
    v12 = 0;
  else
    v12 = v3[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
  v16 = sub_100B5850(v12, v5, 1);
  v13 = sub_100B5850(v12, v5, 0) >= v16;
  LOBYTE(v16) = v13;
  if ( *(_DWORD *)(this + 3644) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != *(_DWORD *)(this + 3644) >> 12 )
  {
    v14 = 0;
  }
  else
  {
    v14 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
  }
  if ( v13 != *(_BYTE *)(this + 3732) )
  {
    if ( v13 )
    {
      if ( sub_101ACC90(v14) )
        v14 = sub_101ACC90(v14);
      if ( sub_101ACC90(v5) )
      {
        v15 = sub_101ACC90(v5);
LABEL_35:
        v5 = v15;
      }
    }
    else
    {
      if ( sub_101ACCC0(v14) )
        v14 = sub_101ACCC0(v14);
      if ( sub_101ACCC0(v5) )
      {
        v15 = sub_101ACCC0(v5);
        goto LABEL_35;
      }
    }
  }
  sub_100B6EE0((void *)this, v14, v5, (float *)(this + 3764), v16);
}
