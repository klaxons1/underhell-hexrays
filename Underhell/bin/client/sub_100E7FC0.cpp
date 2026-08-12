__int16 __thiscall sub_100E7FC0(int this, unsigned __int16 a2)
{
  __int16 result; // ax

  (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(
    g_pMemAlloc,
    *(_DWORD *)(*(_DWORD *)(this + 4) + 16 * a2 + 8));
  result = -1;
  if ( a2 != 0xFFFF )
  {
    sub_100E77C0(this, a2);
    *(_WORD *)(*(_DWORD *)(this + 4) + 16 * a2) = a2;
    result = *(_WORD *)(this + 20);
    *(_WORD *)(*(_DWORD *)(this + 4) + 16 * a2 + 2) = result;
    --*(_WORD *)(this + 18);
    *(_WORD *)(this + 20) = a2;
  }
  return result;
}
