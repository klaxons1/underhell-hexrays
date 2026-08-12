int __thiscall sub_10274320(int this, _DWORD *a2, int *a3, int a4, int *a5)
{
  int result; // eax
  int i; // edi
  int v8; // ecx
  int v9; // [esp+1Ch] [ebp+Ch]

  if ( *a2 )
  {
    --*a2;
    result = sub_10236310((int (__thiscall ***)(void *, int))this, 0);
  }
  else
  {
    sub_10236310((int (__thiscall ***)(void *, int))this, 1);
    sub_10236140((int (__thiscall ***)(void *, int, int))this, a4, *a5);
    result = *(_DWORD *)(*(_DWORD *)(this + 268) + 256);
    *a5 += result;
    --*a3;
  }
  v9 = a4 + 20;
  for ( i = 0; i < *(_DWORD *)(this + 232); ++i )
  {
    if ( *a3 > 0 && *(_BYTE *)(this + 240) )
    {
      result = sub_10274320(a2, a3, v9, a5);
    }
    else
    {
      v8 = *(_DWORD *)(*(_DWORD *)(this + 220) + 4 * i);
      result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 124))(v8, 0);
    }
  }
  return result;
}
