_DWORD *__thiscall sub_102A8740(int this, int a2)
{
  int v3; // ecx

  if ( a2 )
    *(_DWORD *)(this + 40) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 40) = -1;
  v3 = *(_DWORD *)(this + 4);
  *(_WORD *)(this + 16) = 257;
  return sub_10044510(v3, (int)"Enable police behavior");
}
