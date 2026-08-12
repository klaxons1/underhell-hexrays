int __thiscall sub_1005B4C0(int this, int a2, char a3)
{
  int result; // eax
  unsigned __int16 v4; // si
  _DWORD *v5; // edi
  unsigned __int16 v6; // bx

  result = *(_DWORD *)(this + 80);
  v4 = *(_WORD *)(result + 10 * *(unsigned __int16 *)(a2 + 12));
  if ( v4 != 0xFFFF )
  {
    v5 = (_DWORD *)(this + 68);
    do
    {
      v6 = *(_WORD *)(*v5 + 40 * v4 + 38);
      if ( a3 || *((_DWORD *)off_103DC81C + 1) - *(_DWORD *)(*v5 + 40 * v4 + 12) > 1 )
      {
        sub_1005ADF0(v5, *(_WORD *)(a2 + 12), v4);
        sub_1005AF80(v5, *(_WORD *)(this + 124), 0xFFFFu, v4);
      }
      result = 0xFFFF;
      v4 = v6;
    }
    while ( v6 != 0xFFFF );
  }
  return result;
}
