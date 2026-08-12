int __thiscall sub_10245740(int this, int a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = sub_10245550((char *)this, a2);
  if ( *(_DWORD *)(this + 4) && (v4 = *(_DWORD *)(v3 + 112)) != 0 )
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 88)
                                 + 144 * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 8) + 16 * a2 + 8)
                                 + 124)
                     + 4 * v4
                     - 4)
         + 1;
  else
    return *(_DWORD *)(v3 + 112);
}
