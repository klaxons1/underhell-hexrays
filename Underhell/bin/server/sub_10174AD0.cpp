int __thiscall sub_10174AD0(int this)
{
  int result; // eax
  int *v3; // ecx
  float v4[4]; // [esp+8h] [ebp-10h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/items/pmc_helmet.mdl");
  sub_10177C60(this);
  sub_1011EDF0((_DWORD *)this);
  v4[0] = 0.0;
  v4[1] = 0.0;
  v4[2] = 0.0;
  result = sub_100E10C0(this, v4);
  v4[3] = 3.5533266e22;
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
