int __thiscall sub_103EEDC0(int this)
{
  int result; // eax
  char v3; // cl
  char v4; // dl

  result = (**(int (__thiscall ***)(int))(this + 1484))(this + 1484);
  if ( result )
  {
    sub_103EC430(this);
    v3 = *(_BYTE *)(this + 1845);
    v4 = *(_BYTE *)(this + 1846);
    *(_BYTE *)(this + 1848) = *(_BYTE *)(this + 1844);
    result = *(unsigned __int8 *)(this + 1847);
    *(_BYTE *)(this + 1849) = v3;
    *(_BYTE *)(this + 1850) = v4;
    *(_BYTE *)(this + 1851) = result;
  }
  return result;
}
