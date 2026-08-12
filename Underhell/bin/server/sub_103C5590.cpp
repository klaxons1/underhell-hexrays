int __thiscall sub_103C5590(int this)
{
  float v4; // [esp+8h] [ebp-5Ch]
  float v5; // [esp+8h] [ebp-5Ch]
  _DWORD v6[20]; // [esp+14h] [ebp-50h] BYREF

  if ( *(_BYTE *)(this + 3680) )
  {
    sub_1023C380((_DWORD *)this, (int)"DoSpark", 0.0, 0);
    if ( (*(_DWORD *)(this + 3684))-- == 1 )
    {
      return sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
    }
    else
    {
      v5 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             0.5,
             2.5)
         + *(float *)(dword_106B31C8 + 12);
      return sub_100EC4A0((int *)this, v5, 0);
    }
  }
  else
  {
    sub_10247EC0(v6);
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)this + 1612))(this, v6);
    *(_BYTE *)(this + 3680) = 1;
    v4 = *(float *)(dword_106B31C8 + 12) + 0.5;
    return sub_100EC4A0((int *)this, v4, 0);
  }
}
