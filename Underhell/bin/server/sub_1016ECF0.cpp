int __thiscall sub_1016ECF0(_DWORD *this, int a2)
{
  int result; // eax

  for ( result = (unsigned __int16)sub_1016DE60((int)(this + 100));
        (unsigned __int16)result != 0xFFFF && *(_DWORD *)(this[101] + 20 * (unsigned __int16)result + 8) < a2;
        result = (unsigned __int16)sub_1016DF30(this + 100, result) )
  {
    ;
  }
  return result;
}
