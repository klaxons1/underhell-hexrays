void __thiscall sub_102082B0(_BYTE *this, int a2)
{
  double v3; // st7
  _DWORD *v4; // eax
  float v5; // [esp+0h] [ebp-64h]

  if ( this[1729] )
  {
    if ( *(_BYTE *)(a2 + 306) == 6 && *(_BYTE *)(a2 + 225) <= 1u )
    {
      sub_101CA9F0((int)this, a2, 1, 4.0);
      return;
    }
    if ( *(_BYTE *)(a2 + 306) == 6 && *(_BYTE *)(a2 + 225) == 2 )
    {
      v3 = (double)*(int *)(a2 + 220);
LABEL_11:
      v5 = v3;
      v4 = (_DWORD *)sub_10248110((int)this, (int)this, v5, 1, 0);
      sub_100D9E70((int *)a2, (int)this, v4);
      return;
    }
  }
  if ( this[1624] && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 284))(a2) )
  {
    v3 = 500.0;
    goto LABEL_11;
  }
}
