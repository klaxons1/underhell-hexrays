void __thiscall sub_101E8600(int this, char a2, float a3, float a4)
{
  int *v5; // esi
  int v6; // ecx
  unsigned __int8 *v7; // ebx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  bool v12; // zf
  unsigned __int8 **v13; // eax
  double v14; // st7
  int v15; // ecx
  int i; // [esp+8h] [ebp-8h]
  unsigned __int8 *v17; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)(this + 96) = 0;
  *(_DWORD *)(this + 76) = 0;
  v5 = (int *)(this + 104);
  v6 = 0;
  v5[3] = 0;
  for ( i = 0; i < *(_DWORD *)(this + 16); ++i )
  {
    v7 = *(unsigned __int8 **)(*(_DWORD *)(this + 4) + 4 * v6);
    v17 = v7;
    sub_101E20E0((int)v7);
    if ( sub_101E1B20(v7) == 1 )
    {
      v8 = v5[3];
      v9 = v5[1];
      if ( v8 + 1 > v9 )
        sub_102AA460(v8 - v9 + 1);
      ++v5[3];
      v10 = *v5;
      v11 = v5[3] - v8 - 1;
      v12 = v5[3] - v8 == 1;
      v5[4] = *v5;
      if ( v11 >= 0 && !v12 )
        memcpy((void *)(v10 + 4 * v8 + 4), (const void *)(v10 + 4 * v8), 4 * v11);
      v13 = (unsigned __int8 **)(*v5 + 4 * v8);
      if ( v13 )
        *v13 = v7;
    }
    else if ( sub_101E1ED0(v7) )
    {
      sub_10258C50(*(_DWORD *)(this + 76), &v17);
    }
    v6 = i + 1;
  }
  *(float *)(this + 136) = sub_101E6670(this);
  v14 = sub_101E66E0(this);
  *(float *)(this + 140) = v14;
  if ( a2 )
    v14 = *(float *)(this + 136);
  v15 = *(_DWORD *)(this + 16);
  *(float *)(this + 124) = v14;
  *(float *)(this + 152) = 0.0;
  *(_DWORD *)(this + 144) = v15;
  *(float *)(this + 128) = a3;
  *(float *)(this + 132) = a4;
}
