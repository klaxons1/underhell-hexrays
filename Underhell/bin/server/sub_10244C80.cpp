int __thiscall sub_10244C80(int *this, unsigned __int16 a2)
{
  int v3; // ecx

  v3 = *this;
  if ( a2 >= *(int *)(v3 + 8) || a2 > *(_WORD *)(v3 + 22) || sub_10243B20((_DWORD *)v3, a2) == a2 )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)(*this + 4) + 16 * a2 + 12);
}
