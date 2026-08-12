int __thiscall sub_10048970(_DWORD *this, int a2)
{
  float v4; // [esp+0h] [ebp-Ch]

  if ( !a2 )
  {
    v4 = *((float *)off_103DC81C + 3) + 0.05;
    (*(void (__stdcall **)(_DWORD))(*(this - 2) + 408))(LODWORD(v4));
  }
  return sub_1003CD40(this, a2);
}
