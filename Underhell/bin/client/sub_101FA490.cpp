void __thiscall sub_101FA490(int this, int a2, int a3, char a4)
{
  int v5; // ecx
  double v6; // st7
  int v7; // edi
  int i; // esi

  v5 = *(_DWORD *)(this + 64);
  if ( v5 )
  {
    *(_BYTE *)(this + 76) = 0;
    if ( a4 )
    {
      v6 = *((float *)off_103EE614 + 67) + 10.0;
      if ( v6 < *(float *)(this + 52) )
        v6 = *(float *)(this + 52);
      *(float *)(this + 52) = v6;
    }
    v7 = 0;
    *(_BYTE *)(this + 77) = 1;
    if ( *(int *)(v5 + 640) > 0 )
    {
      do
      {
        (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(*(_DWORD *)(*(_DWORD *)(this + 64) + 628) + 4 * v7)
                                                      + 56))(
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 64) + 628) + 4 * v7),
          this,
          *(_DWORD *)(this + 5976) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 64) + 768) + 4 * v7),
          a2);
        ++v7;
      }
      while ( v7 < *(_DWORD *)(*(_DWORD *)(this + 64) + 640) );
    }
    if ( (_BYTE)a3 )
    {
      *(_DWORD *)(this + 40) = 0;
      *(_DWORD *)(this + 32) = 0;
    }
    for ( i = *(_DWORD *)(this + 6008); i; i = *(_DWORD *)(i + 5980) )
      sub_101FA490(a2, a3, 0);
  }
}
