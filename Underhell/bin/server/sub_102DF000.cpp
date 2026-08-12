char __thiscall sub_102DF000(int this, int a2)
{
  int *v3; // esi
  char result; // al
  int v5; // edi
  int v6; // eax
  double v7; // st7

  v3 = (int *)(this + 5092);
  if ( (*(_DWORD *)a2 & *(_DWORD *)(this + 5092)) != 0 || !*(_BYTE *)(this + 2329) )
    return 0;
  v5 = *(_DWORD *)a2 | *v3;
  if ( *v3 != v5 )
  {
    (**(void (__thiscall ***)(int, int *))(this + 5080))(this + 5080, v3);
    *v3 = v5;
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 176))(dword_106B3CDC) == 1
    && *(_DWORD *)(dword_10698344 + 48) )
  {
    v6 = a2;
    if ( (*(_BYTE *)a2 & 1) == 0 )
    {
      result = 1;
      *(float *)(this + 5596) = *(float *)(a2 + 4) * 0.5 + *(float *)(this + 5596);
      return result;
    }
  }
  else
  {
    v6 = a2;
  }
  v7 = *(float *)(v6 + 4) + *(float *)(this + 5596);
  result = 1;
  *(float *)(this + 5596) = v7;
  return result;
}
