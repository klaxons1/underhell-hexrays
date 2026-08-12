int __thiscall sub_1012CA00(_DWORD *this, int a2, __int16 a3)
{
  int v4; // eax
  int result; // eax
  int v6; // ebx
  int i; // edi
  int (__thiscall ***v8)(_DWORD, int); // ecx

  ++this[16390];
  v4 = a3 & 0xFFF;
  if ( v4 > this[16389] )
    this[16389] = v4;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
  v6 = result;
  if ( *(_DWORD *)(result + 24) )
    ++this[16391];
  for ( i = this[16396] - 1; i >= 0; --i )
  {
    v8 = *(int (__thiscall ****)(_DWORD, int))(this[16393] + 4 * i);
    result = (**v8)(v8, v6);
  }
  return result;
}
