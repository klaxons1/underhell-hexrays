bool __thiscall sub_10245220(int this, _DWORD *a2)
{
  if ( !*(_BYTE *)(this + 8) )
    return 1;
  return *(_DWORD *)(this + 40) == *a2 && *(_DWORD *)(this + 44) == a2[1];
}
