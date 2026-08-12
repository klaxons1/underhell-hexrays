void __thiscall sub_1007E160(_DWORD **this, int a2, float *a3)
{
  int v4; // edi
  void *v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // edi

  if ( *a3 == *(float *)a2 && a3[1] == *(float *)(a2 + 4) && a3[2] == *(float *)(a2 + 8) )
  {
    while ( *this[9] != a2 )
      sub_100A6890();
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 40);
    v5 = (void *)sub_1042FCC0(48);
    if ( v5 )
      v6 = sub_100B9A20(v5, (int)a3, 0.0, *(_DWORD *)(a2 + 36), 0, -1);
    else
      v6 = 0;
    while ( *this[9] != v4 )
      sub_100A6890();
    v7 = *(_DWORD *)(v6 + 40);
    if ( v7 )
      *(_DWORD *)(v7 + 44) = 0;
    *(_DWORD *)(v6 + 40) = v4;
    if ( v4 )
    {
      v8 = *(_DWORD *)(v4 + 44);
      if ( v8 )
        *(_DWORD *)(v8 + 40) = 0;
      *(_DWORD *)(*(_DWORD *)(v6 + 40) + 44) = v6;
    }
    sub_100A61F0(v6, 0);
  }
}
