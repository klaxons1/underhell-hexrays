int __thiscall sub_1007CC40(_DWORD *this, int a2, __int16 a3)
{
  int v3; // edi
  int result; // eax
  int v6; // ebx
  int *v7; // eax
  int i; // edi
  int (__thiscall ***v9)(_DWORD, int); // ecx
  int v10; // [esp+14h] [ebp+8h]

  v3 = a3 & 0xFFF;
  if ( (unsigned int)v3 <= 0x7FF )
  {
    ++this[16395];
    if ( v3 > this[16398] )
      this[16398] = v3;
    this[2 * v3 + 16399] = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 16))(a2);
  }
  sub_1007CAE0(this, a2);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
  v6 = result;
  if ( result )
  {
    v10 = (unsigned __int16)sub_100EC160(0);
    sub_1016F8E0(0xFFFF, v10);
    v7 = (int *)(this[24591] + 8 * (unsigned __int16)v10);
    if ( v7 )
      *v7 = v6;
    LOWORD(this[2 * v3 + 16400]) = v10;
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 216))(v6);
    if ( (result & 0x400) != 0 )
      ++this[16397];
    for ( i = this[16393] - 1; i >= 0; --i )
    {
      v9 = *(int (__thiscall ****)(_DWORD, int))(this[16390] + 4 * i);
      result = (**v9)(v9, v6);
    }
  }
  else
  {
    LOWORD(this[2 * v3 + 16400]) = -1;
  }
  return result;
}
