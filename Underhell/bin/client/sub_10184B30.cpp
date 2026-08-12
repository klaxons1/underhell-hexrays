int __thiscall sub_10184B30(_DWORD *this)
{
  int result; // eax

  result = *(_DWORD *)(this[167] + 4 * this[170] - 4);
  this[100] = result;
  --this[170];
  return result;
}
