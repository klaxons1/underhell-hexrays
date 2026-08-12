int __thiscall sub_1005B750(int this, char a2)
{
  int result; // eax
  _DWORD *v3; // edi
  int v4; // esi
  int v5; // ebx
  int v6; // [esp+0h] [ebp-Ch]
  int v7; // [esp+4h] [ebp-8h]
  unsigned __int16 v8; // [esp+8h] [ebp-4h]

  result = *(unsigned __int16 *)(*(_DWORD *)(this + 24) + 10 * *(unsigned __int16 *)(this + 126));
  v7 = this;
  v8 = result;
  if ( (_WORD)result != 0xFFFF )
  {
    v3 = (_DWORD *)(this + 12);
    while ( 1 )
    {
      v4 = 28 * (unsigned __int16)result;
      v5 = *v3 + v4;
      v6 = *(unsigned __int16 *)(v5 + 26);
      if ( a2 || *((_DWORD *)off_103DC81C + 1) - *(_DWORD *)(*v3 + v4 + 20) > 1 )
        sub_1005B4C0(this, v5, 1);
      else
        sub_1005B4C0(this, v5, 0);
      if ( *(_WORD *)(*(_DWORD *)(v7 + 80) + 10 * *(unsigned __int16 *)(v5 + 12)) == 0xFFFF )
      {
        sub_1005AD20(v3, *(_WORD *)(v7 + 126), v8);
        sub_1005AEB0(v3, *(_WORD *)(v7 + 128), 0xFFFFu, v8);
        ++*(_WORD *)(*v3 + v4 + 14);
      }
      result = v6;
      v8 = v6;
      if ( (_WORD)v6 == 0xFFFF )
        break;
      LOWORD(result) = v6;
      this = v7;
    }
  }
  return result;
}
