int __thiscall sub_1001E2F0(_DWORD *this, int a2)
{
  _BYTE *v3; // esi
  int (__thiscall *v4)(_BYTE *, int); // edx
  int result; // eax

  v3 = (_BYTE *)this[906];
  if ( !v3 )
    return sub_100497D0((int)this, a2);
  v4 = *(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)v3 + 112);
  v3[8] = 1;
  result = v4(v3, a2);
  if ( !v3[8] )
    return sub_100497D0((int)this, a2);
  return result;
}
