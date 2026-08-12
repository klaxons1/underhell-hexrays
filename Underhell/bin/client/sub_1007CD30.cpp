int __thiscall sub_1007CD30(int this, int a2, __int16 a3)
{
  int v3; // ebx
  int v5; // eax
  int i; // edi
  int v7; // ecx
  int v8; // eax
  _WORD *v9; // ebx
  int v10; // edi
  int result; // eax
  int v12; // [esp+14h] [ebp+8h]

  v3 = a3 & 0xFFF;
  if ( (unsigned int)v3 <= 0x7FF )
  {
    *(_DWORD *)(this + 8 * v3 + 65596) = 0;
    --*(_DWORD *)(this + 65580);
    if ( v3 >= *(_DWORD *)(this + 65592) )
      sub_1007A670((_DWORD *)this);
  }
  sub_1007CB70((_DWORD *)this, a2);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
  v12 = v5;
  if ( v5 )
  {
    if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 216))(v5) & 0x400) != 0 )
      --*(_DWORD *)(this + 65588);
    for ( i = *(_DWORD *)(this + 65572) - 1; i >= 0; --i )
    {
      v7 = *(_DWORD *)(*(_DWORD *)(this + 65560) + 4 * i);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 4))(v7, v12);
    }
  }
  v8 = *(unsigned __int16 *)(this + 8 * v3 + 65600);
  v9 = (_WORD *)(this + 8 * v3 + 65600);
  if ( (_WORD)v8 == 0xFFFF )
  {
    result = 0xFFFF;
  }
  else
  {
    v10 = v8;
    sub_1003A300((int *)(this + 98364), v8);
    result = *(_DWORD *)(this + 98364);
    *(_WORD *)(result + 8 * v10 + 6) = *(_WORD *)(this + 98380);
    *(_WORD *)(this + 98380) = v10;
  }
  *v9 = -1;
  return result;
}
