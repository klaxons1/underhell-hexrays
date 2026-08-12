int __thiscall sub_1005DA80(int this)
{
  int v2; // eax

  if ( sub_10023D10(*(_DWORD **)(this + 4), 13) )
  {
    v2 = *(_DWORD *)(this + 60);
    if ( v2 == 2 )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1644))(*(_DWORD *)(this + 4), 1004);
      *(_DWORD *)(this + 60) = 3;
      return 47;
    }
    if ( v2 == 3 && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 140) > -0.001 )
      *(_BYTE *)(this + 112) = 1;
  }
  return 0;
}
