int __thiscall sub_101776C0(int this)
{
  int result; // eax

  if ( *(_BYTE *)(this + 1152) )
  {
    *(_BYTE *)(this + 1152) = 0;
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 8);
    return sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  }
  return result;
}
