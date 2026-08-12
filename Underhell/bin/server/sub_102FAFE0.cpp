int __thiscall sub_102FAFE0(_DWORD **this, float a2)
{
  int result; // eax
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+Ch] [ebp-4h] BYREF

  if ( this[699] )
  {
    v4 = a2 * 0.5;
    v5 = a2
       - ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           LODWORD(v4));
    return sub_100B1890(this[699], dword_106E29E0, (int)&v5, (int)this);
  }
  return result;
}
