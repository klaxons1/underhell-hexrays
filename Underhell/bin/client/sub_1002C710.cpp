void __thiscall sub_1002C710(int this, int a2, float a3, int a4, int a5)
{
  int v6; // eax
  float *v7; // ecx
  int v8; // edi
  double v9; // st7
  int v10; // eax
  float *v11; // esi
  double v12; // st7
  float v13; // [esp+0h] [ebp-18h]
  int v14; // [esp+28h] [ebp+10h]

  if ( a4 == a5 )
  {
    v6 = 0;
    if ( *(_BYTE *)(this + 29) )
    {
      v7 = (float *)(a5 + 4);
      do
      {
        ++v6;
        *(float *)(a2 + 4 * v6 - 4) = *v7++;
      }
      while ( v6 < *(unsigned __int8 *)(this + 29) );
    }
  }
  else
  {
    v8 = 0;
    if ( *(_BYTE *)(this + 29) )
    {
      v9 = a3;
      v10 = a5 - a4;
      v11 = (float *)(a4 + 4);
      v14 = a5 - a4;
      do
      {
        if ( *(_BYTE *)(v8 + *(_DWORD *)(this + 32)) )
        {
          v13 = v9;
          v12 = sub_1002BBD0(v13, *v11, *(float *)((char *)v11 + v10));
          v10 = v14;
          *(float *)(a2 + 4 * v8) = v12;
          v9 = a3;
        }
        else
        {
          *(float *)(a2 + 4 * v8) = (*(float *)((char *)v11 + v10) - *v11) * v9 + *v11;
        }
        ++v8;
        ++v11;
      }
      while ( v8 < *(unsigned __int8 *)(this + 29) );
    }
  }
}
