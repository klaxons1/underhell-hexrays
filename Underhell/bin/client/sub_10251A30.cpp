int __thiscall sub_10251A30(_BYTE *this, int a2)
{
  int result; // eax
  int v4; // [esp+Ch] [ebp-8h] BYREF
  int v5; // [esp+10h] [ebp-4h] BYREF

  this[295] = 0;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA68 + 8))(dword_1047CA68, 0);
  result = (*(int (__thiscall **)(_BYTE *, int *, int *))(*(_DWORD *)this + 1000))(this, &v5, &v4);
  if ( (_BYTE)result )
  {
    if ( v4 == v5 )
      *((_DWORD *)this + 78) = -1;
  }
  return result;
}
