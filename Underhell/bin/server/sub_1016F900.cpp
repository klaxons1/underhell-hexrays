int __thiscall sub_1016F900(_DWORD *this, int a2)
{
  int v2; // ebx
  int result; // eax
  unsigned __int16 i; // si
  int v5; // edi
  _DWORD *v6; // [esp+8h] [ebp-8h]

  v2 = (int)(this + 100);
  result = sub_1016DE60((int)(this + 100));
  for ( i = result; (unsigned __int16)result != 0xFFFF; i = result )
  {
    v5 = 20 * i;
    v6 = (_DWORD *)(this[101] + v5 + 8);
    if ( *v6 < a2 || a2 == -1 )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31F8 + 40))(
        dword_106B31F8,
        *(_DWORD *)(this[101] + v5 + 16));
      v6[2] = 0;
      if ( i != 0xFFFF )
      {
        sub_1016F0E0(v2, i);
        *(_WORD *)(v5 + *(_DWORD *)(v2 + 4)) = i;
        *(_WORD *)(*(_DWORD *)(v2 + 4) + v5 + 2) = *(_WORD *)(v2 + 20);
        --*(_WORD *)(v2 + 18);
        *(_WORD *)(v2 + 20) = i;
      }
      result = sub_1016DE60(v2);
    }
    else
    {
      result = sub_1016DF30((_DWORD *)v2, i);
    }
  }
  return result;
}
