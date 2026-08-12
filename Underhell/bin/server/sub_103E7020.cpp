int __thiscall sub_103E7020(int this, int a2)
{
  int v3; // eax
  float *v4; // ecx
  int v5; // eax
  int result; // eax
  _BYTE *v7; // esi
  int *v8; // ecx
  int v9; // eax
  _BYTE *v10; // esi
  int *v11; // ecx

  v3 = sub_10269EC0((_DWORD *)this);
  if ( v3 )
    v4 = (float *)(v3 - 1120);
  else
    v4 = 0;
  sub_103E5B30(v4, a2);
  if ( a2 )
  {
    *(float *)(this + 384) = 1.0;
    v5 = sub_10269EC0((_DWORD *)this);
    if ( v5 )
      result = v5 - 1120;
    else
      result = 0;
    v7 = (_BYTE *)(result + 605);
    if ( *(_BYTE *)(result + 605) )
    {
      if ( *(_BYTE *)(result + 84) )
      {
        *(_BYTE *)(result + 88) |= 1u;
        *v7 = 0;
      }
      else
      {
        v8 = *(int **)(result + 24);
        if ( v8 )
          result = sub_100194B0(v8, 605);
        *v7 = 0;
      }
    }
  }
  else
  {
    *(float *)(this + 384) = 0.5;
    v9 = sub_10269EC0((_DWORD *)this);
    if ( v9 )
      result = v9 - 1120;
    else
      result = 0;
    v10 = (_BYTE *)(result + 605);
    if ( *(_BYTE *)(result + 605) != 1 )
    {
      if ( *(_BYTE *)(result + 84) )
      {
        *(_BYTE *)(result + 88) |= 1u;
        *v10 = 1;
      }
      else
      {
        v11 = *(int **)(result + 24);
        if ( v11 )
          result = sub_100194B0(v11, 605);
        *v10 = 1;
      }
    }
  }
  return result;
}
