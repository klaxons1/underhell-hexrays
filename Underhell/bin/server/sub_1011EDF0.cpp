int __thiscall sub_1011EDF0(_DWORD *this)
{
  _DWORD *v2; // eax
  int result; // eax
  int *v4; // eax
  int v5; // esi

  if ( !*(_DWORD *)(dword_106961C4 + 48) )
    return sub_1025FAC0(this);
  v2 = (_DWORD *)sub_10184390(12);
  if ( v2 )
  {
    *v2 = this;
    v2[1] = 0;
    v2[2] = 0;
  }
  else
  {
    v2 = 0;
  }
  *(_DWORD *)(*(_DWORD *)(dword_106960EC + 8) + 4) = v2;
  v2[2] = *(_DWORD *)(dword_106960EC + 8);
  *(_DWORD *)(dword_106960EC + 8) = v2;
  v2[1] = dword_106960EC;
  ++dword_106960F0;
  this[281] = v2;
  for ( result = dword_106961C4; dword_106960F0 > *(_DWORD *)(dword_106961C4 + 48); result = dword_106961C4 )
  {
    v4 = *(int **)(dword_106960E8 + 4);
    v5 = *v4;
    *(_DWORD *)(v4[2] + 4) = v4[1];
    *(_DWORD *)(v4[1] + 8) = v4[2];
    --dword_106960F0;
    sub_10184660(v4);
    *(_DWORD *)(v5 + 1124) = 0;
    sub_1025FAC0(v5);
  }
  return result;
}
