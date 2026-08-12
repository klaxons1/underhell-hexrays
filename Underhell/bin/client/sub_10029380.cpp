char __thiscall sub_10029380(int this, int a2)
{
  char result; // al
  int v4; // edx

  result = sub_1003C500(a2);
  if ( !a2 )
  {
    result = *(_BYTE *)(this + 1928);
    *(_BYTE *)(this + 1929) = result;
    v4 = *(_DWORD *)(this + 1800);
    *(_DWORD *)(this + 1768) = *(_DWORD *)(this + 1760);
    *(_DWORD *)(this + 1672) = v4;
  }
  return result;
}
