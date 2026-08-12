__int16 __thiscall sub_1005BCA0(int this)
{
  int v2; // ecx
  int v3; // edx
  int v4; // ebx
  _DWORD *v5; // esi
  int v6; // eax
  int v8; // [esp+10h] [ebp-4h]

  v2 = *(unsigned __int16 *)(this + 128);
  v3 = *(_DWORD *)(this + 24);
  LOWORD(v4) = *(_WORD *)(v3 + 10 * v2);
  if ( (_WORD)v4 == 0xFFFF )
  {
    v4 = (unsigned __int16)sub_1005A780(this + 12);
    v8 = (unsigned __int16)sub_100849E0(0);
    sub_1022D780(0xFFFF, v8);
    v5 = (_DWORD *)(this + 12);
    v6 = 10 * (unsigned __int16)v8;
    *(_WORD *)(*(_DWORD *)(this + 80) + v6 + 2) = -1;
    *(_WORD *)(v6 + *(_DWORD *)(this + 80)) = -1;
    *(_WORD *)(*(_DWORD *)(this + 80) + v6 + 4) = 0;
    *(_WORD *)(*(_DWORD *)(this + 12) + 28 * v4 + 12) = v8;
  }
  else
  {
    v5 = (_DWORD *)(this + 12);
    sub_1005AD20((_DWORD *)(this + 12), v2, *(_WORD *)(v3 + 10 * v2));
  }
  sub_1005AEB0(v5, *(_WORD *)(this + 126), 0xFFFFu, v4);
  return v4;
}
