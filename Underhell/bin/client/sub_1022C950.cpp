void __thiscall sub_1022C950(int this, float *a2)
{
  unsigned int v3; // eax
  int v4; // edx
  bool v5; // zf
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  unsigned int v8; // eax
  int v9; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  long double v12; // st7
  unsigned int v13; // eax
  int v14; // edx
  _DWORD *v15; // eax
  _DWORD *v16; // ecx
  double v17; // st6

  v3 = *(_DWORD *)(this + 16);
  v4 = v3 & 1;
  v5 = (*(_DWORD *)(this + 20))-- == 1;
  if ( v5 )
  {
    v6 = *(_DWORD **)(this + 24);
    v7 = *(_DWORD **)(this + 28);
    *(_DWORD *)(this + 20) = 32;
    if ( v6 == v7 )
    {
      *(_DWORD *)(this + 20) = 1;
      *(_DWORD *)(this + 16) = 0;
      *(_DWORD *)(this + 24) = v6 + 1;
    }
    else if ( v6 <= v7 )
    {
      *(_DWORD *)(this + 16) = *v6;
      *(_DWORD *)(this + 24) = v6 + 1;
    }
    else
    {
      *(_BYTE *)(this + 4) = 1;
      *(_DWORD *)(this + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(this + 16) = v3 >> 1;
  }
  v8 = *(_DWORD *)(this + 16);
  v9 = v8 & 1;
  v5 = (*(_DWORD *)(this + 20))-- == 1;
  if ( v5 )
  {
    v10 = *(_DWORD **)(this + 24);
    v11 = *(_DWORD **)(this + 28);
    *(_DWORD *)(this + 20) = 32;
    if ( v10 == v11 )
    {
      *(_DWORD *)(this + 20) = 1;
      *(_DWORD *)(this + 16) = 0;
      *(_DWORD *)(this + 24) = v10 + 1;
    }
    else if ( v10 <= v11 )
    {
      *(_DWORD *)(this + 16) = *v10;
      *(_DWORD *)(this + 24) = v10 + 1;
    }
    else
    {
      *(_BYTE *)(this + 4) = 1;
      *(_DWORD *)(this + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(this + 16) = v8 >> 1;
  }
  v12 = 0.0;
  if ( v4 )
    *a2 = sub_1022C7E0(this);
  else
    *a2 = 0.0;
  if ( v9 )
    a2[1] = sub_1022C7E0(this);
  else
    a2[1] = 0.0;
  v13 = *(_DWORD *)(this + 16);
  v14 = v13 & 1;
  v5 = (*(_DWORD *)(this + 20))-- == 1;
  if ( v5 )
  {
    v15 = *(_DWORD **)(this + 24);
    v16 = *(_DWORD **)(this + 28);
    *(_DWORD *)(this + 20) = 32;
    if ( v15 == v16 )
    {
      *(_DWORD *)(this + 20) = 1;
      *(_DWORD *)(this + 16) = 0;
      *(_DWORD *)(this + 24) = v15 + 1;
    }
    else if ( v15 <= v16 )
    {
      *(_DWORD *)(this + 16) = *v15;
      *(_DWORD *)(this + 24) = v15 + 1;
    }
    else
    {
      *(_BYTE *)(this + 4) = 1;
      *(_DWORD *)(this + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(this + 16) = v13 >> 1;
  }
  v17 = a2[1] * a2[1] + *a2 * *a2;
  if ( v17 < 1.0 )
    v12 = sqrt(1.0 - v17);
  a2[2] = v12;
  if ( v14 )
    a2[2] = -a2[2];
}
