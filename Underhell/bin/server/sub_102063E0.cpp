int __thiscall sub_102063E0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // ecx

  result = (int)this;
  *this = a2;
  v4 = dword_106C1B58;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = v4;
  dword_106C1B58 = result;
  return result;
}
