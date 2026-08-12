int __thiscall sub_102EC320(int this, int a2)
{
  int *v3; // ecx
  int *v4; // ecx
  int v5; // edi
  int *v6; // ecx
  double v7; // st7
  int result; // eax
  int *v9; // ecx
  float v10; // [esp+10h] [ebp+8h]

  if ( !*(_BYTE *)(this + 800) )
  {
    if ( *(_BYTE *)(this + 800) != 1 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          sub_100194B0(v3, 800);
      }
      *(_BYTE *)(this + 800) = 1;
    }
    if ( *(_BYTE *)(this + 801) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 801);
      }
      *(_BYTE *)(this + 801) = 0;
    }
    v5 = dword_106B31C8;
    if ( *(_DWORD *)(this + 804) != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 804);
      }
      *(float *)(this + 804) = *(float *)(v5 + 12);
    }
    if ( *(_DWORD *)(a2 + 24) == 1 )
      v7 = *(float *)(a2 + 8);
    else
      v7 = 0.0;
    result = *(_DWORD *)(this + 808);
    v10 = v7;
    if ( result != LODWORD(v10) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 808) = v10;
      }
      else
      {
        v9 = *(int **)(this + 24);
        if ( v9 )
          result = sub_100194B0(v9, 808);
        *(float *)(this + 808) = v10;
      }
    }
  }
  return result;
}
