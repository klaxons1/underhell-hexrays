int __thiscall sub_10146240(_DWORD *this, unsigned __int8 a2)
{
  int result; // eax
  int v4; // eax
  int v5; // esi
  int v6; // edi
  _WORD *v7; // ebx
  int *v8; // esi
  int *v9; // eax
  char v10; // [esp+14h] [ebp+8h]

  result = *(_DWORD *)(this[32] + 272);
  if ( !result || (result = *(_DWORD *)(result + 28), *(_DWORD *)(result + 48)) )
  {
    if ( *(_DWORD *)(dword_1043C03C + 48) )
    {
      sub_100F0DC0(a2);
      v4 = this[33];
      v5 = this[36];
      v6 = *(_DWORD *)(v5 + 688168) - 1;
      v10 = (v4 & 0x100000) != 0;
      if ( v6 >= 0 )
      {
        v7 = (_WORD *)(v5 + 12 * v6 + 393224);
        do
        {
          v8 = *(int **)v7;
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)v7 + 20))(*(_DWORD *)v7) )
            sub_100ECE60(v6);
          if ( (*(unsigned __int8 (__thiscall **)(int *))(*v8 + 24))(v8) )
          {
            v9 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 52))(dword_10439968);
            sub_10053B20((int)v7, v6, 0, *v9, v9[1], v9[2], v9[3], 0, 0);
          }
          sub_10146080((int)v7, v6, v8, v7[3] != 0, v10);
          v7 -= 6;
          --v6;
        }
        while ( v6 >= 0 );
      }
      return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413168 + 16))(1.0);
    }
  }
  return result;
}
