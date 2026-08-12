int __thiscall sub_1001FCE0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // esi

  result = this[602];
  if ( !*(_DWORD *)(result + 16) )
  {
    v3 = sub_100AAD90(0, a2, 1);
    if ( !v3 )
      DevMsg("Warning: NULL Return from GetBestSound\n");
    return v3;
  }
  return result;
}
