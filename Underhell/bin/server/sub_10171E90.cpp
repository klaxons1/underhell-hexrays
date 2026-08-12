int __thiscall sub_10171E90(void *this)
{
  int v2; // ebx
  int *v4; // ecx

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(void *, const char *))(*(_DWORD *)this + 104))(this, "models/PG_props/pg_food/pg_apple.mdl");
  v2 = sub_10219A30() % 2;
  if ( *((_DWORD *)this + 212) != v2 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((_DWORD *)this + 212) = v2;
      return sub_10177C60(this);
    }
    v4 = (int *)*((_DWORD *)this + 6);
    if ( v4 )
      sub_100194B0(v4, 848);
    *((_DWORD *)this + 212) = v2;
  }
  return sub_10177C60(this);
}
