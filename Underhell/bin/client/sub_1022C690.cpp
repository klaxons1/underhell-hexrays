void __thiscall sub_1022C690(int this, float *a2)
{
  unsigned int v4; // eax
  bool v5; // zf
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  unsigned int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  unsigned int v11; // eax
  int v12; // edi
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  int v15; // [esp+Ch] [ebp-4h]
  int v16; // [esp+18h] [ebp+8h]

  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  v4 = *(_DWORD *)(this + 16);
  v5 = (*(_DWORD *)(this + 20))-- == 1;
  v16 = v4 & 1;
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
    *(_DWORD *)(this + 16) = v4 >> 1;
  }
  v8 = *(_DWORD *)(this + 16);
  v5 = (*(_DWORD *)(this + 20))-- == 1;
  v15 = v8 & 1;
  if ( v5 )
  {
    v9 = *(_DWORD **)(this + 24);
    v10 = *(_DWORD **)(this + 28);
    *(_DWORD *)(this + 20) = 32;
    if ( v9 == v10 )
    {
      *(_DWORD *)(this + 20) = 1;
      *(_DWORD *)(this + 16) = 0;
      *(_DWORD *)(this + 24) = v9 + 1;
    }
    else if ( v9 <= v10 )
    {
      *(_DWORD *)(this + 16) = *v9;
      *(_DWORD *)(this + 24) = v9 + 1;
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
  v11 = *(_DWORD *)(this + 16);
  v12 = v11 & 1;
  v5 = (*(_DWORD *)(this + 20))-- == 1;
  if ( v5 )
  {
    v13 = *(_DWORD **)(this + 24);
    v14 = *(_DWORD **)(this + 28);
    *(_DWORD *)(this + 20) = 32;
    if ( v13 == v14 )
    {
      *(_DWORD *)(this + 20) = 1;
      *(_DWORD *)(this + 16) = 0;
      *(_DWORD *)(this + 24) = v13 + 1;
    }
    else if ( v13 <= v14 )
    {
      *(_DWORD *)(this + 16) = *v13;
      *(_DWORD *)(this + 24) = v13 + 1;
    }
    else
    {
      *(_BYTE *)(this + 4) = 1;
      *(_DWORD *)(this + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(this + 16) = v11 >> 1;
  }
  if ( v16 )
    *a2 = sub_1022C370(this);
  if ( v15 )
    a2[1] = sub_1022C370(this);
  if ( v12 )
    a2[2] = sub_1022C370(this);
}
