int __thiscall sub_1024AB40(_DWORD *this, int a2, __int16 a3, __int16 a4)
{
  int result; // eax

  result = 12 * a2;
  *(_WORD *)(result + this[55] + 6) = a3;
  *(_WORD *)(result + this[55] + 8) = a4;
  return result;
}
