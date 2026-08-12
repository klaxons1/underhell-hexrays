char __thiscall sub_101AA1C0(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  unsigned int v6; // eax
  int *v7; // ecx

  v3 = *(_DWORD *)(this + 3632);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 3632) & 0xFFF) + 1];
    if ( off_1061BE18[4 * (v3 & 0xFFF) + 2] == v3 >> 12 )
    {
      if ( *v4 )
      {
        if ( 0.0 == *(float *)(this + 3736)
          || (v4[1] != v3 >> 12 ? (v5 = 0) : (v5 = *v4),
              (v6 = *(_DWORD *)(v5 + 300), v6 != -1)
           && (v7 = &off_1061BE18[4 * (*(_DWORD *)(v5 + 300) & 0xFFF) + 1], v7[1] == v6 >> 12)
           && *v7) )
        {
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 3628) + 172))(*(_DWORD *)(this + 3628));
        }
        else if ( sub_1007E040(*(_DWORD **)(this + 2588)) )
        {
          sub_101A9000(this, a2);
          return 1;
        }
      }
    }
  }
  return 1;
}
