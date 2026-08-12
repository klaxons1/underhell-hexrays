unsigned int __userpurge sub_10401640@<eax>(_DWORD *a1@<ecx>, float a2@<ebx>, char a3)
{
  _DWORD *v3; // esi
  unsigned int result; // eax
  int **v5; // ecx
  int *v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  int *v9; // eax
  _DWORD *v10; // edi
  int v11; // ebx
  int v12; // ecx
  int *v13; // esi
  int *v14; // ecx
  _DWORD *v15; // esi
  int v16; // edi
  int v17; // ecx
  int *v18; // eax
  _DWORD *v19; // esi
  int v20; // edi
  int v21; // ecx
  int *v22; // eax
  void (__noreturn ***v23)(); // edi
  void (__noreturn **v24)(); // esi
  int v25; // eax

  v3 = a1;
  sub_103FF610(a1, a2);
  v3[2457] = 0;
  if ( *(_BYTE *)(dword_106B3CDC + 12) != 1 )
    sub_103FB690(v3);
  result = v3[372];
  if ( result != -1 )
  {
    v5 = (int **)&off_1061BE18[4 * (v3[372] & 0xFFF) + 1];
    result >>= 12;
    if ( off_1061BE18[4 * (v3[372] & 0xFFF) + 2] == result )
    {
      if ( *v5 )
      {
        if ( off_1061BE18[4 * (v3[372] & 0xFFF) + 2] == result )
          v6 = *v5;
        else
          v6 = 0;
        result = sub_10242060(v6);
      }
    }
  }
  v7 = v3[373];
  if ( v7 != -1 )
  {
    result = (unsigned int)&off_1061BE18[4 * (v3[373] & 0xFFF) + 1];
    v8 = v7 >> 12;
    if ( off_1061BE18[4 * (v3[373] & 0xFFF) + 2] == v8 )
    {
      if ( *(_DWORD *)result )
      {
        if ( off_1061BE18[4 * (v3[373] & 0xFFF) + 2] == v8 )
          v9 = *(int **)result;
        else
          v9 = 0;
        result = sub_10242060(v9);
      }
    }
  }
  v10 = v3 + 358;
  v11 = 4;
  do
  {
    if ( *v10 != -1 )
    {
      result = (unsigned int)&off_1061BE18[4 * (*v10 & 0xFFF) + 1];
      v12 = *v10 >> 12;
      if ( off_1061BE18[4 * (*v10 & 0xFFF) + 2] == v12 )
      {
        if ( *(_DWORD *)result )
        {
          if ( off_1061BE18[4 * (*v10 & 0xFFF) + 2] == v12 )
            result = *(_DWORD *)result;
          else
            result = 0;
          v13 = (int *)(result + 116);
          if ( *(_BYTE *)(result + 119) )
          {
            if ( *(_BYTE *)(result + 84) )
            {
              *(_BYTE *)(result + 88) |= 1u;
            }
            else
            {
              v14 = *(int **)(result + 24);
              if ( v14 )
                result = sub_100194B0(v14, 116);
            }
            *((_BYTE *)v13 + 3) = 0;
          }
          v3 = a1;
        }
      }
    }
    ++v10;
    --v11;
  }
  while ( v11 );
  v15 = v3 + 362;
  v16 = 6;
  do
  {
    if ( *v15 != -1 )
    {
      result = (unsigned int)&off_1061BE18[4 * (*v15 & 0xFFF) + 1];
      v17 = *v15 >> 12;
      if ( off_1061BE18[4 * (*v15 & 0xFFF) + 2] == v17 )
      {
        if ( *(_DWORD *)result )
        {
          if ( off_1061BE18[4 * (*v15 & 0xFFF) + 2] == v17 )
            v18 = *(int **)result;
          else
            v18 = 0;
          result = sub_10242060(v18);
        }
      }
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  v19 = a1 + 368;
  v20 = 2;
  do
  {
    if ( *v19 != -1 )
    {
      result = (unsigned int)&off_1061BE18[4 * (*v19 & 0xFFF) + 1];
      v21 = *v19 >> 12;
      if ( off_1061BE18[4 * (*v19 & 0xFFF) + 2] == v21 )
      {
        if ( *(_DWORD *)result )
        {
          if ( off_1061BE18[4 * (*v19 & 0xFFF) + 2] == v21 )
            v22 = *(int **)result;
          else
            v22 = 0;
          result = sub_10242060(v22);
        }
      }
    }
    ++v19;
    --v20;
  }
  while ( v20 );
  if ( a3 )
  {
    result = sub_103FB400(a1, 0.0);
    if ( result )
    {
      v23 = sub_1023DBA0();
      v24 = *v23;
      v25 = sub_103FB400(a1, *(float *)&v23);
      return ((int (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))v24[13])(v23, v25, 0.1, 0);
    }
  }
  return result;
}
