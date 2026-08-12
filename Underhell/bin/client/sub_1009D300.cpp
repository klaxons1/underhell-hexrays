int __thiscall sub_1009D300(int this)
{
  int v2; // esi
  int result; // eax

  if ( (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578) )
  {
    if ( sub_10229D00(32) )
      v2 = sub_10229D20("FlashlightState");
    else
      v2 = 0;
    sub_1022ACC0("time", *((float *)off_103DC81C + 3));
    sub_1022ACA0("entindex", *(_DWORD *)(this + 8));
    sub_1022ACA0("flashlightHandle", *(unsigned __int16 *)(this + 12));
    sub_1022ACE0("flashlightState", 0);
    sub_101BC9C0(0, v2);
    sub_1022AF00(v2);
  }
  result = *(unsigned __int16 *)(this + 12);
  if ( (_WORD)result != 0xFFFF )
  {
    result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)off_103DD080 + 80))(
               off_103DD080,
               *(unsigned __int16 *)(this + 12));
    *(_WORD *)(this + 12) = -1;
  }
  return result;
}
