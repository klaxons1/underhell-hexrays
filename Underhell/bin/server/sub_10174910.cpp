int __thiscall sub_10174910(int this)
{
  int *v2; // ecx
  float v4[4]; // [esp+Ch] [ebp-10h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/items/helmet_visor.mdl");
  sub_10177C60(this);
  sub_1011EDF0((_DWORD *)this);
  v4[3] = 3.5533266e22;
  if ( *(_DWORD *)(this + 771) != 1693501540 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 771);
    }
    *(_DWORD *)(this + 771) = 1693501540;
  }
  v4[0] = 0.0;
  v4[1] = 0.0;
  v4[2] = 0.0;
  return sub_100E10C0(this, v4);
}
