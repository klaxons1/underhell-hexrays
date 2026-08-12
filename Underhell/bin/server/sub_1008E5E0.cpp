int __thiscall sub_1008E5E0(_DWORD *this, float *a2, int a3, int a4, float a5)
{
  int v6; // esi
  int v7; // edx
  int v8; // eax
  unsigned int v9; // esi
  int v10; // ecx
  int result; // eax
  float v12[3]; // [esp+10h] [ebp-Ch] BYREF

  v6 = a3 | sub_1008E550(a2, this[1]);
  v7 = *(_DWORD *)(this[1] + 1676);
  v8 = this[5];
  v9 = v6 & 0xFFFFFEFF;
  if ( a4 < 0 || a4 >= *(_DWORD *)(v8 + 4) )
  {
    ++dword_10691DE0;
    v10 = 0;
  }
  else
  {
    v10 = *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4 * a4);
  }
  sub_1008D160(v10, v12, v7);
  if ( *a2 == v12[0] && a2[1] == v12[1] && a2[2] == v12[2] )
    return sub_1008D6A0(this, *(_DWORD *)(this[1] + 1676), a4, 8);
  result = (*(int (__thiscall **)(_DWORD *, float *, float *, _DWORD, int, int, unsigned int, _DWORD))(*this + 20))(
             this,
             a2,
             v12,
             0,
             4,
             a4,
             v9,
             LODWORD(a5));
  if ( result )
    *(_DWORD *)(result + 16) = a4;
  return result;
}
