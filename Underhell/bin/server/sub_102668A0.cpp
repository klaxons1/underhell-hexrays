int __thiscall sub_102668A0(int (__thiscall ***this)(void *, int), int a2, int a3, int a4, int a5)
{
  int result; // eax
  int v7; // esi
  char v8; // al

  result = (**this)(this, a2);
  v7 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 320))(v7);
      return sub_10271140(
               v8 != 0 ? v7 : 0,
               a3,
               a4,
               COERCE_FLOAT(*((_BYTE *)this[11] + 1712)),
               *((_BYTE *)this[11] + 1713),
               (int)(this[11] + 416),
               (int)(this + 104),
               a5);
    }
  }
  return result;
}
