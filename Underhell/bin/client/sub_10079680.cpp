__int16 __thiscall sub_10079680(int this, unsigned __int16 a2)
{
  int v3; // esi
  __int16 result; // ax

  v3 = 60 * a2;
  (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(*(_DWORD *)(this + 4) + v3 + 8));
  result = -1;
  if ( a2 != 0xFFFF )
  {
    sub_10079120(this, a2);
    *(_WORD *)(v3 + *(_DWORD *)(this + 4)) = a2;
    result = *(_WORD *)(this + 20);
    *(_WORD *)(*(_DWORD *)(this + 4) + v3 + 2) = result;
    --*(_WORD *)(this + 18);
    *(_WORD *)(this + 20) = a2;
  }
  return result;
}
