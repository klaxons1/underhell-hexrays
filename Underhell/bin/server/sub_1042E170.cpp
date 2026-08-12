void __thiscall sub_1042E170(int this, char *a2, int a3)
{
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // ecx

  if ( *(_BYTE *)(this + 20) )
  {
    *a2 = 0;
  }
  else
  {
    v4 = a3;
    if ( !a3 )
      v4 = 0x7FFFFFFF;
    v5 = sub_1042D7E0(this);
    if ( (*(_BYTE *)(this + 21) & 1) != 0 )
      sub_1042D6E0((_DWORD *)this);
    if ( v5 )
    {
      if ( v5 > v4 )
      {
        sub_1042D670((_BYTE *)this, a2, v4 - 1);
        a2[v4 - 1] = 0;
        *(_DWORD *)(this + 12) += v5 - v4 - 1;
        v6 = *(_DWORD *)(this + 12);
        if ( v6 <= *(_DWORD *)(this + 28) )
        {
          v7 = *(_DWORD *)(this + 32);
          *(_BYTE *)(this + 20) &= ~2u;
          if ( v6 < v7 || v6 >= v7 + *(_DWORD *)(this + 4) )
            (*(void (__thiscall **)(int, int))(this + 36))(this, -1);
        }
        else
        {
          *(_BYTE *)(this + 20) |= 2u;
        }
      }
      else
      {
        sub_1042D670((_BYTE *)this, a2, v5 - 1);
        a2[v5 - 1] = 0;
      }
      if ( (*(_BYTE *)(this + 21) & 1) == 0 )
        sub_1008A100((_DWORD *)this);
    }
    else
    {
      *a2 = 0;
      *(_BYTE *)(this + 20) |= 2u;
    }
  }
}
