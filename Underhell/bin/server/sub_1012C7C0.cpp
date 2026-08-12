int __thiscall sub_1012C7C0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
  if ( *(_DWORD *)(result + 24) )
  {
    result = -1;
    --this[16391];
  }
  --this[16390];
  return result;
}
