int __thiscall sub_10179220(_DWORD *this)
{
  int v2; // edx
  int result; // eax

  v2 = *((unsigned __int16 *)this + 4);
  *this = &C_EnvelopeFX::`vftable';
  this[1] = &C_EnvelopeFX::`vftable';
  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)off_103DCDDC + 4))(off_103DCDDC, v2);
  *this = &IHandleEntity::`vftable';
  return result;
}
