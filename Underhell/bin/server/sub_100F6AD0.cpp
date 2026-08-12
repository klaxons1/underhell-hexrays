void __thiscall sub_100F6AD0(_DWORD *this, int a2)
{
  int v3; // eax

  if ( a2 )
  {
    a2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    v3 = sub_10319100(&a2);
    if ( v3 != -1 )
    {
      if ( this[1061] - v3 - 1 > 0 )
        memcpy((void *)(this[1058] + 4 * v3), (const void *)(this[1058] + 4 * v3 + 4), 4 * (this[1061] - v3 - 1));
      --this[1061];
    }
  }
}
