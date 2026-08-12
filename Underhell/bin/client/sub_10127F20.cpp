int __thiscall sub_10127F20(_DWORD *this, int a2, int a3)
{
  int v3; // eax

  v3 = this[1];
  if ( v3 )
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v3 + 88) + 144 * *(_DWORD *)(*(_DWORD *)(v3 + 8) + 16 * a2 + 8) + 24)
                     + 4 * a3);
  else
    return a3;
}
