int __thiscall sub_101FCDC0(int *this, int a2)
{
  int v2; // ebp
  int result; // eax
  int v5; // eax
  int v6; // ecx
  double v7; // st7
  int v8; // esi
  int v9; // eax
  char v10; // bl
  _DWORD *v11; // ecx
  char v12; // bl
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  int i; // esi

  v2 = a2;
  result = *(_DWORD *)(a2 + 64);
  if ( result )
  {
    v5 = (*(_BYTE *)(result + 846) & 1) != 0 ? *(_DWORD *)(result + 316) : 0;
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 68))(v5);
    if ( !(_BYTE)result )
    {
      v6 = *(_DWORD *)(v2 + 64);
      v7 = *(float *)(v6 + 540) + *((float *)off_103EE614 + 67);
      if ( v7 < *(float *)(v2 + 52) )
        v7 = *(float *)(v2 + 52);
      *(float *)(v2 + 52) = v7;
      v8 = this[64];
      v9 = 0;
      if ( v8 > 0 )
      {
        v10 = *(_BYTE *)(v6 + 846);
        v11 = (_DWORD *)this[61];
        v12 = v10 & 1;
        do
        {
          if ( v12 )
            v13 = *(_DWORD *)(*(_DWORD *)(v2 + 64) + 316);
          else
            v13 = 0;
          if ( v13 == *v11 )
            break;
          ++v9;
          v11 += 6;
        }
        while ( v9 < v8 );
      }
      if ( v9 == v8 )
      {
        v9 = sub_101FBB60(this + 61, this[64]);
        v14 = *(_DWORD *)(v2 + 64);
        if ( (*(_BYTE *)(v14 + 846) & 1) != 0 )
          v15 = *(_DWORD *)(v14 + 316);
        else
          v15 = 0;
        *(_DWORD *)(this[61] + 24 * v9) = v15;
      }
      result = sub_10258C50(*(_DWORD *)(this[61] + 24 * v9 + 16), &a2);
      for ( i = *(_DWORD *)(v2 + 6008); i; i = *(_DWORD *)(i + 5980) )
        result = sub_101FCDC0(i);
    }
  }
  return result;
}
