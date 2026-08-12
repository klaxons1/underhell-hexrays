int __thiscall sub_103C86C0(int this, int a2, char a3)
{
  int result; // eax

  sub_10023CB0((char *)this, 79);
  result = sub_1004AFF0((_DWORD *)this, 8);
  if ( a2 )
  {
    result = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    *(_DWORD *)(this + 5720) = result;
  }
  else
  {
    *(_DWORD *)(this + 5720) = -1;
  }
  *(_BYTE *)(this + 5724) = a3;
  return result;
}
