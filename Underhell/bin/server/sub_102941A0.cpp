int __thiscall sub_102941A0(unsigned __int8 (__cdecl **this)(int, int), int a2)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-8h] BYREF

  if ( !a2 )
    return -1;
  v3 = a2;
  result = sub_10293890(this, (int)&v3);
  if ( result == -1 )
    return -1;
  return result;
}
