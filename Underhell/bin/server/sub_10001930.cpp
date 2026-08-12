int __thiscall sub_10001930(_DWORD *this)
{
  int result; // eax
  unsigned __int16 i; // si
  int v4; // ecx

  (*(void (__thiscall **)(_DWORD *))(this[5] + 28))(this + 5);
  result = sub_10001670((int)(this + 18));
  for ( i = result; (unsigned __int16)result != 0xFFFF; i = result )
  {
    v4 = *(_DWORD *)(this[19] + 16 * i + 12);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 28))(v4);
    result = sub_10001740(this + 18, i);
  }
  return result;
}
