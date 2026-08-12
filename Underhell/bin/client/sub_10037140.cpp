int __stdcall sub_10037140(float *a1, float a2)
{
  double v3; // st7
  int v4; // eax
  int v5; // ecx
  int v6; // ebx
  float v8; // edi
  float v9; // [esp+0h] [ebp-14h]
  int v10; // [esp+10h] [ebp-4h]
  int v11; // [esp+1Ch] [ebp+8h]

  v10 = 1;
  v3 = a2;
  if ( a2 < (double)a1[6] )
  {
    v4 = 0;
    if ( *((int *)a1 + 5) > 0 )
    {
      v5 = 0;
      do
      {
        *(_WORD *)(*(_DWORD *)a1 + v5 + 2) = 1;
        ++v4;
        v5 += 12;
      }
      while ( v4 < *((_DWORD *)a1 + 5) );
    }
  }
  v6 = 0;
  a1[6] = a2;
  v11 = 0;
  if ( *((int *)a1 + 5) <= 0 )
    return 1;
  while ( 1 )
  {
    v8 = *a1;
    if ( *(_WORD *)(*(_DWORD *)a1 + v6 + 2) )
    {
      v9 = v3;
      if ( (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(LODWORD(v8) + v6 + 8) + 24))(LODWORD(v9)) )
        *(_WORD *)(LODWORD(v8) + v6 + 2) = 0;
      else
        v10 = 0;
    }
    v6 += 12;
    if ( ++v11 >= *((_DWORD *)a1 + 5) )
      break;
    v3 = a2;
  }
  return v10;
}
