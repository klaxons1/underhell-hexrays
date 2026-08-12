int __thiscall sub_10127A40(_DWORD *this, int a2, int a3)
{
  if ( this[1] )
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this[1] + 88)
                                 + 144 * *(_DWORD *)(*(_DWORD *)(this[1] + 8) + 16 * a2 + 8)
                                 + 44)
                     + 4 * a3);
  else
    return a3;
}
