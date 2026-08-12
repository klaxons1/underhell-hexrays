void __thiscall sub_1002BD30(int this, int a2, int *a3, int a4, float a5)
{
  int *v5; // esi
  double v6; // st7
  double v7; // st6
  int v8; // eax
  double v9; // st7
  int v10; // edi
  float *v11; // esi
  double v12; // st7
  int v13; // ebx
  double v14; // st7
  float v15; // [esp+0h] [ebp-1Ch]
  int v16; // [esp+18h] [ebp-4h]
  int v17; // [esp+2Ch] [ebp+10h]

  v5 = a3;
  v6 = **(float **)a4 - *(float *)*a3;
  v16 = this;
  v7 = a5;
  if ( fabs(a5 - v6) > 0.000099999997 && v6 > 0.000099999997 )
  {
    v8 = a2;
    v9 = v7 / v6;
    v10 = 0;
    *(float *)a2 = **(float **)a4 - v7;
    if ( *(_BYTE *)(this + 29) )
    {
      v11 = *(float **)(*a3 + 8);
      v12 = 1.0 - v9;
      v13 = *(_DWORD *)(*(_DWORD *)a4 + 8) - (_DWORD)v11;
      *(float *)&v17 = v12;
      do
      {
        if ( *(_BYTE *)(v10 + *(_DWORD *)(this + 32)) )
        {
          v15 = v12;
          v14 = sub_1002BBD0(v15, *v11, *(float *)((char *)v11 + v13));
          v8 = a2;
          *(float *)(*(_DWORD *)(a2 + 8) + 4 * v10) = v14;
          this = v16;
          v12 = *(float *)&v17;
        }
        else
        {
          *(float *)(*(_DWORD *)(v8 + 8) + 4 * v10) = (*(float *)((char *)v11 + v13) - *v11) * v12 + *v11;
        }
        ++v10;
        ++v11;
      }
      while ( v10 < *(unsigned __int8 *)(this + 29) );
      v5 = a3;
    }
    *v5 = v8;
  }
}
