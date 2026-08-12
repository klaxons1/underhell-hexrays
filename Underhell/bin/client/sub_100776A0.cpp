int __thiscall sub_100776A0(int this, unsigned __int16 a2)
{
  int *v4; // eax
  int v5; // ebx
  int *v6; // eax
  int result; // eax
  int v8; // [esp+14h] [ebp+8h]

  v4 = sub_100772B0((_DWORD *)this, a2);
  v5 = *((unsigned __int16 *)v4 + 1);
  *(_WORD *)(*(_DWORD *)(this + 4) + 60 * a2 + 2) = *(_WORD *)sub_100772B0((_DWORD *)this, *((_WORD *)v4 + 1));
  v8 = 60 * a2;
  if ( *(_WORD *)sub_100772B0((_DWORD *)this, v5) != 0xFFFF )
    *(_WORD *)(*(_DWORD *)(this + 4) + 60 * *(unsigned __int16 *)sub_100772B0((_DWORD *)this, v5) + 4) = a2;
  if ( (_WORD)v5 != 0xFFFF )
    *(_WORD *)(*(_DWORD *)(this + 4) + 60 * v5 + 4) = *((_WORD *)sub_100772B0((_DWORD *)this, a2) + 2);
  if ( a2 == *(_WORD *)(this + 16) )
  {
    *(_WORD *)(this + 16) = v5;
  }
  else
  {
    v6 = sub_100772B0((_DWORD *)this, a2);
    if ( *(_WORD *)sub_100772B0((_DWORD *)this, *((_WORD *)v6 + 2)) == a2 )
      *(_WORD *)(*(_DWORD *)(this + 4) + 60 * *((unsigned __int16 *)sub_100772B0((_DWORD *)this, a2) + 2)) = v5;
    else
      *(_WORD *)(*(_DWORD *)(this + 4) + 60 * *((unsigned __int16 *)sub_100772B0((_DWORD *)this, a2) + 2) + 2) = v5;
  }
  result = 0xFFFF;
  *(_WORD *)(*(_DWORD *)(this + 4) + 60 * v5) = a2;
  if ( a2 != 0xFFFF )
    *(_WORD *)(*(_DWORD *)(this + 4) + v8 + 4) = v5;
  return result;
}
