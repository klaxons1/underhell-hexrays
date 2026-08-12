int __thiscall sub_1010D590(_DWORD **this, int (__thiscall ***a2)(_DWORD))
{
  int result; // eax
  int v4; // edi
  int v5; // eax
  float v6; // [esp+0h] [ebp-Ch]
  float v7; // [esp+14h] [ebp+8h]

  result = (int)a2;
  if ( a2 )
  {
    v7 = *(float *)(sub_1009EA30(a2) + 304);
    v4 = *this[1];
    v6 = sub_1009E8A0(this + 3) * v7;
    (*(void (__thiscall **)(_DWORD *, _DWORD))(v4 + 12))(this[1], LODWORD(v6));
    result = sub_101BC880();
    if ( (_BYTE)result )
    {
      v5 = ((int (__thiscall *)(_DWORD **))(*this)[3])(this);
      return sub_101BCA60(v5);
    }
  }
  return result;
}
