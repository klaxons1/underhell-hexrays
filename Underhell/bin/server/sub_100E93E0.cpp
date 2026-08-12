int __thiscall sub_100E93E0(int this)
{
  int v2; // eax
  bool v3; // cl
  int result; // eax

  v3 = 1;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 320))(this) )
  {
    v2 = *(unsigned __int8 *)(this + 306);
    if ( !*(_BYTE *)(this + 306) || v2 == 6 || v2 == 7 && sub_10042700((float *)this) <= 0.0 )
      v3 = 0;
  }
  result = *(_DWORD *)(this + 252);
  if ( v3 == ((result & 0x800000) != 0) )
  {
    if ( v3 )
      *(_DWORD *)(this + 252) = result & 0xFF7FFFFF;
    else
      *(_DWORD *)(this + 252) = result | 0x800000;
    return sub_1012D820(this);
  }
  return result;
}
