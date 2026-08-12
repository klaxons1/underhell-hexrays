int __thiscall sub_10174EC0(int this)
{
  int result; // eax
  int *v3; // ecx

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/items/worker_helmet.mdl");
  sub_10177C60(this);
  result = sub_1011EDF0((_DWORD *)this);
  if ( *(_DWORD *)(this + 771) != 1693501540 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 771) = 1693501540;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        result = sub_100194B0(v3, 771);
      *(_DWORD *)(this + 771) = 1693501540;
    }
  }
  return result;
}
