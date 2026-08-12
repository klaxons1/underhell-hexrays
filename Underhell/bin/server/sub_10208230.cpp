unsigned int __thiscall sub_10208230(int this, int a2)
{
  unsigned int result; // eax

  if ( a2 )
    *(_DWORD *)(this + 1724) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 1724) = -1;
  result = *(_DWORD *)(this + 1724);
  if ( result == -1
    || (result >>= 12, off_1061BE18[4 * (*(_DWORD *)(this + 1724) & 0xFFF) + 2] != result)
    || !off_1061BE18[4 * (*(_DWORD *)(this + 1724) & 0xFFF) + 1] )
  {
    *(_BYTE *)(this + 1728) = 0;
  }
  return result;
}
