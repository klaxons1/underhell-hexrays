int __thiscall sub_10007E00(_DWORD **this, int a2)
{
  int result; // eax
  float v3; // [esp+0h] [ebp-4h]

  if ( this[1] )
  {
    v3 = (float)*(unsigned __int8 *)(a2 + 91);
    return (*(int (__stdcall **)(_DWORD))(*this[1] + 12))(LODWORD(v3));
  }
  return result;
}
