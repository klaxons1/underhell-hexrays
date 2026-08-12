void __thiscall sub_100EBE30(int this, int a2)
{
  int *v3; // ecx

  if ( *(_DWORD *)(this + 420) != a2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 420) = a2;
      sub_100E8D20((_DWORD *)this);
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 420);
      *(_DWORD *)(this + 420) = a2;
      sub_100E8D20((_DWORD *)this);
    }
  }
}
