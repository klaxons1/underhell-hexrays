int __thiscall sub_1005CDD0(_DWORD *this, int a2)
{
  int result; // eax
  float v4; // [esp+0h] [ebp-Ch]

  result = sub_1003CD40(this, a2);
  if ( !a2 )
  {
    v4 = *((float *)off_103DC81C + 3) + 0.2;
    return (*(int (__stdcall **)(_DWORD))(*(this - 2) + 408))(LODWORD(v4));
  }
  return result;
}
