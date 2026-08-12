void __thiscall sub_1008DD90(_DWORD *this)
{
  int i; // esi
  int v2; // ebx

  if ( *this )
  {
    for ( i = 0; i < 200; i += 4 )
    {
      *(_DWORD *)(*(_DWORD *)(i + *this) + 24) = (int)((double)*(int *)(*(_DWORD *)(i + *this) + 24) * 0.5);
      *(_DWORD *)(*(_DWORD *)(i + *this) + 28) = (int)((double)*(int *)(*(_DWORD *)(i + *this) + 28) * 0.5);
      v2 = *(_DWORD *)(i + *this);
      *(_DWORD *)(v2 + 32) = (int)((double)*(int *)(v2 + 32) * 0.5);
    }
  }
}
