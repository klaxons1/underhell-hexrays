void __thiscall sub_102EF4F0(int *this)
{
  int v2; // eax
  float v3; // [esp+8h] [ebp-Ch]

  if ( (*(unsigned __int8 (__thiscall **)(int, int *))(*(_DWORD *)dword_106B3CDC + 164))(dword_106B3CDC, this) )
  {
    (*(void (__thiscall **)(int *))(*this + 100))(this);
    v2 = this[62];
    *((_BYTE *)this + 853) = (v2 & 2) != 0;
    if ( (v2 & 0x12) == 0 )
    {
      v3 = RandomFloat(0.2, 0.40000001) + *(float *)(dword_106B31C8 + 12);
      sub_100EC4A0(this, v3, 0);
      sub_100EC3F0(this, (int)sub_102EF3B0, 0.0, 0);
    }
  }
  else
  {
    sub_1025FAC0((int)this);
  }
}
