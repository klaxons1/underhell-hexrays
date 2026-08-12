void __thiscall sub_100F7C60(int *this, int a2)
{
  int *v2; // esi
  int v3; // edi
  int *v4; // eax
  int *v5; // ecx

  v2 = this + 1057;
  if ( a2 )
    v3 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    v3 = -1;
  if ( *v2 != v3 )
  {
    v4 = v2 - 1057;
    if ( *((_BYTE *)v2 - 4144) )
    {
      *((_BYTE *)v4 + 88) |= 1u;
      *v2 = v3;
    }
    else
    {
      v5 = (int *)v4[6];
      if ( v5 )
        sub_100194B0(v5, 4228);
      *v2 = v3;
    }
  }
}
