char __thiscall sub_10253700(_DWORD *this, int a2, _DWORD *a3)
{
  int v4; // ebx
  int v5; // ebp
  wint_t v6; // si
  int v7; // eax
  int v9; // [esp+14h] [ebp-Ch] BYREF
  int v10; // [esp+18h] [ebp-8h] BYREF
  int v11; // [esp+1Ch] [ebp-4h] BYREF

  v4 = 0;
  *a3 = -1;
  v5 = 3;
  if ( (int)this[58] <= 0 )
    return 0;
  while ( 1 )
  {
    v6 = *(_WORD *)(this[55] + 2 * v4);
    if ( iswcntrl(v6) )
    {
      v7 = 0;
    }
    else
    {
      (*(void (__thiscall **)(int, int, _DWORD, int *, int *, int *))(*(_DWORD *)dword_1047CA6C + 280))(
        dword_1047CA6C,
        a2,
        v6,
        &v10,
        &v9,
        &v11);
      v7 = v11 + v10 + v9;
    }
    v5 += v7;
    if ( v5 > this[97] )
      break;
    if ( ++v4 >= this[58] )
      return 0;
  }
  *a3 = v4;
  return 1;
}
