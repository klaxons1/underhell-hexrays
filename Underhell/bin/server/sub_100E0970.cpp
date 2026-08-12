int __fastcall sub_100E0970(int a1, int a2, int a3, char a4)
{
  int v4; // edx
  int result; // eax
  _BYTE *v6; // edi
  _BYTE *v7; // esi
  int *v8; // ecx
  int *v9; // ecx
  _BYTE *v10; // esi
  int *v11; // ecx
  int *v12; // ecx
  int *v13; // ecx

  v4 = a1;
  result = *(unsigned __int8 *)(a1 + 306);
  v6 = (_BYTE *)(a1 + 306);
  if ( result == a3 )
  {
    v7 = (_BYTE *)(a1 + 307);
    if ( a4 != *(_BYTE *)(a1 + 307) )
    {
      result = a1;
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
        *v7 = a4;
      }
      else
      {
        v8 = *(int **)(a1 + 24);
        if ( v8 )
          result = sub_100194B0(v8, 307);
        *v7 = a4;
      }
    }
  }
  else
  {
    if ( (_BYTE)a3 != *v6 )
    {
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
      }
      else
      {
        v9 = *(int **)(a1 + 24);
        if ( v9 )
        {
          sub_100194B0(v9, 306);
          v4 = a1;
        }
      }
      *v6 = a3;
    }
    v10 = (_BYTE *)(v4 + 307);
    if ( a4 != *(_BYTE *)(v4 + 307) )
    {
      if ( *(_BYTE *)(v4 + 84) )
      {
        *(_BYTE *)(v4 + 88) |= 1u;
      }
      else
      {
        v11 = *(int **)(v4 + 24);
        if ( v11 )
        {
          sub_100194B0(v11, 307);
          v4 = a1;
        }
      }
      *v10 = a4;
    }
    sub_100E8D20(v4);
    switch ( *v6 )
    {
      case 2:
        sub_100E06E0(a1, 1);
        sub_100E0730(a1, 1);
        break;
      case 3:
        sub_100E06E0(a1, byte_10638658 != 0);
        sub_100E0730(a1, 0);
        break;
      case 4:
      case 5:
        sub_101C6CC0(a1);
        break;
      default:
        if ( *(_BYTE *)(a1 + 605) != 1 )
        {
          if ( *(_BYTE *)(a1 + 84) )
          {
            *(_BYTE *)(a1 + 88) |= 1u;
          }
          else
          {
            v12 = *(int **)(a1 + 24);
            if ( v12 )
              sub_100194B0(v12, 605);
          }
          *(_BYTE *)(a1 + 605) = 1;
        }
        if ( *(_BYTE *)(a1 + 606) )
        {
          if ( *(_BYTE *)(a1 + 84) )
          {
            *(_BYTE *)(a1 + 88) |= 1u;
          }
          else
          {
            v13 = *(int **)(a1 + 24);
            if ( v13 )
              sub_100194B0(v13, 606);
          }
          *(_BYTE *)(a1 + 606) = 0;
        }
        break;
    }
    sub_101C3F60(a1);
    return sub_100E93E0(a1);
  }
  return result;
}
