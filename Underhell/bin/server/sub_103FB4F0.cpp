void __thiscall sub_103FB4F0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  _DWORD *v10; // esi
  int v11; // edi
  int *v12; // eax
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // esi
  int v16; // edi
  int *v17; // eax
  int v18; // ecx
  int v19; // eax
  _DWORD *v20; // esi
  int v21; // edi
  int *v22; // eax
  int v23; // ecx
  int v24; // eax

  v2 = this[372];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[372] & 0xFFF) + 1];
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
        this[372] = -1;
      }
    }
  }
  v6 = this[373];
  if ( v6 != -1 )
  {
    v7 = &off_1061BE18[4 * (this[373] & 0xFFF) + 1];
    v8 = v6 >> 12;
    if ( off_1061BE18[4 * (this[373] & 0xFFF) + 2] == v8 )
    {
      if ( *v7 )
      {
        if ( off_1061BE18[4 * (this[373] & 0xFFF) + 2] == v8 )
          v9 = *v7;
        else
          v9 = 0;
        sub_1025FAC0(v9);
        this[373] = -1;
      }
    }
  }
  v10 = this + 358;
  v11 = 4;
  do
  {
    if ( *v10 != -1 )
    {
      v12 = &off_1061BE18[4 * (*v10 & 0xFFF) + 1];
      v13 = *v10 >> 12;
      if ( off_1061BE18[4 * (*v10 & 0xFFF) + 2] == v13 )
      {
        if ( *v12 )
        {
          if ( off_1061BE18[4 * (*v10 & 0xFFF) + 2] == v13 )
            v14 = *v12;
          else
            v14 = 0;
          sub_1025FAC0(v14);
          *v10 = -1;
        }
      }
    }
    ++v10;
    --v11;
  }
  while ( v11 );
  v15 = this + 362;
  v16 = 6;
  do
  {
    if ( *v15 != -1 )
    {
      v17 = &off_1061BE18[4 * (*v15 & 0xFFF) + 1];
      v18 = *v15 >> 12;
      if ( off_1061BE18[4 * (*v15 & 0xFFF) + 2] == v18 )
      {
        if ( *v17 )
        {
          if ( off_1061BE18[4 * (*v15 & 0xFFF) + 2] == v18 )
            v19 = *v17;
          else
            v19 = 0;
          sub_1025FAC0(v19);
          *v15 = -1;
        }
      }
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  v20 = this + 368;
  v21 = 2;
  do
  {
    if ( *v20 != -1 )
    {
      v22 = &off_1061BE18[4 * (*v20 & 0xFFF) + 1];
      v23 = *v20 >> 12;
      if ( off_1061BE18[4 * (*v20 & 0xFFF) + 2] == v23 )
      {
        if ( *v22 )
        {
          if ( off_1061BE18[4 * (*v20 & 0xFFF) + 2] == v23 )
            v24 = *v22;
          else
            v24 = 0;
          sub_1025FAC0(v24);
          *v20 = -1;
        }
      }
    }
    ++v20;
    --v21;
  }
  while ( v21 );
}
