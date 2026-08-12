char __thiscall sub_1032D100(int this, int a2, int a3, int a4)
{
  int v5; // ecx

  if ( *(_DWORD *)(a2 + 68) == -1 && *(float *)(this + 1700) <= (double)*(float *)(dword_106B31C8 + 12) )
  {
    v5 = *(_DWORD *)(a2 + 96);
    if ( v5 )
    {
      *(_DWORD *)(this + 1716) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
      return 0;
    }
    *(_DWORD *)(this + 1716) = -1;
  }
  return 0;
}
