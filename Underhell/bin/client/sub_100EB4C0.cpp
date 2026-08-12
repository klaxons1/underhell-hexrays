void __thiscall sub_100EB4C0(int this, float a2)
{
  int v2; // eax

  if ( a2 != *(float *)(this + 128) )
  {
    v2 = *(unsigned __int16 *)(this + 8);
    *(float *)(this + 128) = a2;
    if ( (_WORD)v2 != 0xFFFF )
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)off_103DCDDC + 48))(off_103DCDDC, v2);
  }
}
