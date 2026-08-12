char __thiscall sub_103782B0(int this)
{
  int v2; // eax
  int v3; // eax

  v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4));
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 92);
    if ( v3 == dword_106E8514 || v3 == dword_106E8510 )
      return 0;
  }
  if ( sub_10023D10(*(_DWORD **)(this + 4), 57) || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 236) )
    return 0;
  else
    return sub_100520B0(this);
}
