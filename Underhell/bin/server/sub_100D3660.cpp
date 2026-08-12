int __thiscall sub_100D3660(void *this, int a2)
{
  int v3; // esi
  int v4; // edx
  int *v5; // ecx
  int v7; // [esp+14h] [ebp+8h]

  if ( (void *)sub_100CF460((_DWORD *)a2) == this )
    v3 = *(_BYTE *)(a2 + 3316) != 0 ? 64 : 2;
  else
    v3 = 1;
  v4 = *((_DWORD *)this + 296);
  v7 = v4;
  if ( v4 != v3 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v5 = (int *)*((_DWORD *)this + 6);
      if ( v5 )
      {
        sub_100194B0(v5, 1184);
        v4 = v7;
      }
    }
    *((_DWORD *)this + 296) = v3;
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 1016))(this, v4);
  }
  return 1;
}
