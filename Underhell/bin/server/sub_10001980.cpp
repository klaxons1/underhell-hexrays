int __thiscall sub_10001980(_DWORD *this)
{
  int result; // eax
  unsigned __int16 i; // si
  int v4; // ecx

  result = sub_10001670((int)(this + 18));
  for ( i = result; (unsigned __int16)result != 0xFFFF; i = result )
  {
    v4 = *(_DWORD *)(this[19] + 16 * i + 12);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 32))(v4);
    result = sub_10001740(this + 18, i);
  }
  return result;
}
